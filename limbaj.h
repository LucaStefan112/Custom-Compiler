#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

struct SymbolTableBlock
{
    char symbolType[100];
    char symbolName[100];
    int scope;
    char reference[100];
    char stringValue[100];
    int value;
} symbolTable[100];

int refferenceCount = 0;
char currentRefference[100][100];

struct Function
{
    char name[100];
    char types[100][100];
    int numberOfParams;
} function_names[100], user_calls[100];

struct SymbolTableElementFunction
{
    char signature[450];
} symTableFct[100];
;

int variableCount = 0, paramCount = 0, userCount = 0, userCallCount = 0, nameIndex = 0;

char functionSignature[300], temp[100];

int blockDepthCount[100], curentDepth = 0, functionIndex = 0;

void addRefference(char *refference)
{
    strcpy(currentRefference[refferenceCount++], refference);
}

void removeRefference()
{
    refferenceCount--;
}

void initialize(){
    strcpy(currentRefference[refferenceCount++], "global");
}

void increaseDepth()
{
    blockDepthCount[curentDepth++]++;
}

void decreaseDepth()
{
    curentDepth--;
}

int variableIndex(char *variable)
{
    for (int i = 0; i < variableCount; i++)
    {
        if(symbolTable[i].scope == curentDepth && !strcmp(symbolTable[i].reference, currentRefference[curentDepth]) && !strcmp(symbolTable[i].symbolName, variable))
        {
            return i;
        }
    }

    return -1;
}

void insert(char *type, char *id, int val)
{
    if (variableCount == 100)
    {
        printf("MAXIMUM VARIABLE NUMBER\n");
        return;
    }

    if (variableIndex(id) != -1)
    {
        printf("VARIABLE %s HAS ALREADY BEEN DECLARED\n", id);
        return;
    }

    strcpy(symbolTable[variableCount].symbolType, type);
    strcpy(symbolTable[variableCount].symbolName, id);
    symbolTable[variableCount].scope = curentDepth;
    strcpy(symbolTable[variableCount].reference, currentRefference[curentDepth]);
    symbolTable[variableCount].value = val;

    variableCount++;

    return;
}

void insertString(char *id, char* val)
{
    if (variableCount == 100)
    {
        printf("MAXIMUM VARIABLE NUMBER\n");
        return;
    }

    if (variableIndex(id) != -1)
    {
        printf("VARIABLE %s HAS ALREADY BEEN DECLARED\n", id);
        return;
    }

    strcpy(symbolTable[variableCount].symbolType, "string");
    strcpy(symbolTable[variableCount].symbolName, id);
    symbolTable[variableCount].scope = curentDepth;
    strcpy(symbolTable[variableCount].reference, currentRefference[curentDepth]);
    strcpy(symbolTable[variableCount].stringValue, val);

    variableCount++;

    return;
}

int checkDeclaration(char *id)
{
    int idIndex;
    if ((idIndex = variableIndex(id)) == -1)
    {
        printf("VARIABLE %s DOES NOT EXIST\n", id);
        return 0;
    }

    if (strcmp(symbolTable[idIndex].symbolType, "int") != 0)
    {
        printf("VARIABLE %s IS NOT INTEGER\n", id);
        return -1;

        if (symbolTable[idIndex].value == INT_MAX)
        {
            printf("VARIABLE %s HAS NOT BEEN INITIALIZED\n", id);
            return -1;
        }
    }
    return 1;
}

int updateVariableValue(char *dest, int source)
{
    int destIndex;

    if ((destIndex = variableIndex(dest)) == -1)
    {
        printf("VARIABLE %s DOES NOT EXIST\n", dest);
        return -1;
    }

    symbolTable[destIndex].value = source;

    return 0;
}

int updateVariableId(char *dest, char *source)
{
    int sourceIndex, destIndex;

    if ((sourceIndex = variableIndex(source)) == -1 || (destIndex = variableIndex(dest)) == -1)
    {
        printf("VARIABLE %s DOES NOT EXISTS\n", source);
        return -1;
    }

    if (strcmp(symbolTable[sourceIndex].symbolType, "int") != 0)
    {
        printf("VARIABLE %s IS NOT INTEGER\n", dest);
        return -1;

        if (symbolTable[sourceIndex].value == INT_MAX)
        {
            printf("VARIABLE %s HAS NOT BEEN INITIALIZED\n", dest);
            return -1;
        }
    }

    symbolTable[destIndex].value = symbolTable[sourceIndex].value;

    return 0;
}

int printTable()
{
    int vizitat[100];

    for (int i = 0; i < variableCount; i++)
    {
        vizitat[i] = 0;
    }

    printf("\nSymbol table:\n");

    for(int i = 0; i < variableCount; i++){
        if(!vizitat[i]){
            char thisRefference[100];
            int thisScope = symbolTable[i].scope;
            strcpy(thisRefference, symbolTable[i].reference);
            for(int k = 0; k < thisScope - 1; k++){
                printf("\t");
            }
            printf("%s:\n", thisRefference);
            for(int j = 0; j < variableCount; j++){
                if(!vizitat[j]){
                    if(symbolTable[j].scope == thisScope && !strcmp(symbolTable[j].reference, thisRefference)){
                        vizitat[j] = 1;
                        for(int k = 0; k < thisScope; k++){
                            printf("\t");
                        }
                        if(strcmp(symbolTable[j].symbolType, "char") == 0){
                            printf("%s %s '%c'\n", symbolTable[j].symbolType, symbolTable[j].symbolName, symbolTable[j].value);
                        } else if (strcmp(symbolTable[j].symbolType, "int") == 0){
                            printf("%s %s %d\n", symbolTable[j].symbolType, symbolTable[j].symbolName, symbolTable[j].value);
                        } else if (strcmp(symbolTable[j].symbolType, "string") == 0){
                            printf("%s %s \"%s\"\n", symbolTable[j].symbolType, symbolTable[j].symbolName, symbolTable[j].stringValue);
                        } else if(strcmp(symbolTable[j].symbolType, "bool") == 0){
                            if(symbolTable[j].value){
                                printf("%s %s true\n", symbolTable[j].symbolType, symbolTable[j].symbolName);
                            } else {
                                printf("%s %s false\n", symbolTable[j].symbolType, symbolTable[j].symbolName);
                            }
                        }
                    }
                }
            }
        }
    }

    printf("\n");
    for (int i = 0; i < functionIndex; i++)
    {
        printf("%s\n", symTableFct[i].signature);
    }
}

// void write()
// {
//     FILE *f = fopen("symbol_table.txt", "w");
//     fprintf(f, "DECLARED VARIABLE:");

//     for (int i = 0; i < variableCount; i++)
//     {
//         for (int j = symbolTable[i].blockDepth; j > 1; j--)
//         {
//             fprintf(f, "\t");
//         }
//         fprintf(f, "%s %s %d\n", symbolTable[i].symbolType, symbolTable[i].symbolName, symbolTable[i].value);
//     }

//     fprintf(f, "\n");
//     fprintf(f, "DECLARED FUNCTIONS:");

//     for (int i = 0; i < functionIndex; i++)
//     {
//         fprintf(f, "%s\n", symTableFct[i].signature);
//     }

//     fclose(f);
// }

int checkFunction(char *sign)
{
    for (int i = functionIndex - 1; i >= 0; i--)
    {
        if (strcmp(symTableFct[i].signature, sign) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int insertFunction()
{
    char penru[200];
    strcpy(penru, functionSignature);
    strcat(penru, temp);

    if (checkFunction(penru) == 1)
    {
        printf("FUNCTION WITH SAME SIGNATURE %s IS DUPLICATE\n", functionSignature);
        memset(penru, 0, 200);
        memset(functionSignature, 0, 300);
        memset(temp, 0, 100);
        return 0;
    }

    strcpy(symTableFct[functionIndex].signature, functionSignature);
    strcat(symTableFct[functionIndex++].signature, temp);

    memset(functionSignature, 0, 300);
    memset(temp, 0, 100);
    memset(penru, 0, 200);
}

void insertTEMP(char *ceva)
{
    strcat(temp, ceva);
    strcat(temp, " ");
}

void insertIntoFunctionsignature(char *in)
{
    strcat(functionSignature, in);
    strcat(functionSignature, " ");
}

void insertIntoNameArray(char *in)
{
    strcpy(function_names[nameIndex++].name, in);
    paramCount = 0;
}

void insertIntoParamArray(char *type)
{
    strcpy(function_names[nameIndex].types[paramCount++], type);
    function_names[nameIndex].numberOfParams++;
}

void insertName(char *name)
{
    strcpy(user_calls[userCallCount++].name, name);
    userCount = 0;
}

void insertIntoUserArray(char *type)
{
    strcpy(user_calls[userCallCount].types[userCount], type);
    user_calls[userCallCount].numberOfParams++;
    userCount++;
}

int checkIdentity(char *in)
{
    int copie;
    int new_copie;

    for (int k = 0; k < userCallCount; k++)
        if (strcmp(in, user_calls[k].name) == 0)
        {
            copie = k;
        }

    int ok = 0;

    for (int k = 0; k < nameIndex; k++)
        if (strcmp(user_calls[copie].name, function_names[k].name) == 0)
        {
            new_copie = k;
            ok = 1;
        }

    if (ok == 0)
    {
        printf("FUNCTION %s HAS NOT BEEN DECLARED\n", user_calls[copie].name);
        return 2;
    }

    for (int parcurge = 0; parcurge < user_calls[copie].numberOfParams; parcurge++)
    {
        if (strcmp(user_calls[copie].types[parcurge], function_names[new_copie].types[parcurge]) != 0)
            return 0;
    }

    return 1;
}
