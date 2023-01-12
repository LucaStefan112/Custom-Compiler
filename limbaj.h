#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

struct SymbolTableBlock
{
    char symbolType[100];
    char symbolName[100];
    int scope;
    char refference[100];
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

int variableCount = 0, paramCount = 0, userCount = 0, userCallCount = 0, nameIndex = 0;

char functionSignature[300], temp[100];

int blockDepthCount[100], currentDepth = 0, functionIndex = 0;

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
    blockDepthCount[currentDepth++]++;
}

void decreaseDepth()
{
    currentDepth--;
}

int variableIndex(char *variable)
{
    for (int i = 0; i < variableCount; i++)
    {
        if(symbolTable[i].scope == currentDepth && !strcmp(symbolTable[i].refference, currentRefference[refferenceCount]) && !strcmp(symbolTable[i].symbolName, variable))
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
        exit(0);
    }

    if (variableIndex(id) != -1)
    {
        printf("VARIABLE %s HAS ALREADY BEEN DECLARED\n", id);
        exit(0);
    }

    strcpy(symbolTable[variableCount].symbolType, type);
    strcpy(symbolTable[variableCount].symbolName, id);
    symbolTable[variableCount].scope = currentDepth;
    strcpy(symbolTable[variableCount].refference, currentRefference[refferenceCount]);
    symbolTable[variableCount].value = val;

    variableCount++;

    return;
}

void insertString(char *id, char* val)
{
    if (variableCount == 100)
    {
        printf("MAXIMUM VARIABLE NUMBER\n");
        exit(0);
    }

    if (variableIndex(id) != -1)
    {
        printf("VARIABLE %s HAS ALREADY BEEN DECLARED\n", id);
        exit(0);
    }

    strcpy(symbolTable[variableCount].symbolType, "string");
    strcpy(symbolTable[variableCount].symbolName, id);
    symbolTable[variableCount].scope = currentDepth;
    strcpy(symbolTable[variableCount].refference, currentRefference[refferenceCount]);
    strcpy(symbolTable[variableCount].stringValue, val + 1);
    symbolTable[variableCount].stringValue[strlen(symbolTable[variableCount].stringValue) - 1] = '\0';

    variableCount++;

    return;
}

int checkDeclaration(char *id)
{
    int idIndex;
    if ((idIndex = variableIndex(id)) == -1)
    {
        printf("VARIABLE %s DOES NOT EXIST\n", id);
        exit(0);
    }

    if (strcmp(symbolTable[idIndex].symbolType, "int") != 0)
    {
        printf("VARIABLE %s IS NOT INTEGER\n", id);
        exit(0);

        if (symbolTable[idIndex].value == INT_MAX)
        {
            printf("VARIABLE %s HAS NOT BEEN INITIALIZED\n", id);
            exit(0);
        }
    }
    return 1;
}

void updateVariableValue(char *dest, int value)
{
    int destIndex = variableIndex(dest);

    if (destIndex == -1)
    {
        printf("VARIABLE %s DOES NOT EXIST\n", dest);
        exit(0);
    }

    if (strcmp(symbolTable[destIndex].symbolType, "string") == 0)
    {
        printf("CAN'T PASS VALUE %d TO STRING\n", value);
        exit(0);
    }

    if(strcmp(symbolTable[destIndex].symbolType, "char") == 0) {
        symbolTable[destIndex].value = abs(value) % 256;
    } else if (strcmp(symbolTable[destIndex].symbolType, "bool") == 0) {
        symbolTable[destIndex].value = value != 0 ? 1 : 0;
    } else if (strcmp(symbolTable[destIndex].symbolType, "int") == 0) {
        symbolTable[destIndex].value = value;
    } else {
        printf("VARIABLE %s IS NOT DEFAULT TYPE\n", dest);
        exit(0);
    }

    return;
}

void updateVariableStringValue(char *dest, char* value)
{
    int destIndex = variableIndex(dest);

    if (destIndex == -1)
    {
        printf("VARIABLE %s DOES NOT EXIST\n", dest);
        exit(0);
    }

    if (strcmp(symbolTable[destIndex].symbolType, "string") != 0)
    {
        printf("CAN'T PASS STRING TO %s\n", symbolTable[destIndex].symbolType);
        exit(0);
    }

    strcpy(symbolTable[destIndex].stringValue, value + 1);
    symbolTable[destIndex].stringValue[strlen(symbolTable[destIndex].stringValue) - 1] = '\0';

    return;
}

void updateVariableWithVariable(char *dest, char* source)
{
    int destIndex = variableIndex(dest);
    int sourceIndex = variableIndex(source);

    if (destIndex == -1)
    {
        printf("VARIABLE %s DOES NOT EXIST\n", dest);
        exit(0);
    }

    if (sourceIndex == -1)
    {
        printf("VARIABLE %s DOES NOT EXIST\n", source);
        exit(0);
    }

    if (strcmp(symbolTable[destIndex].symbolType, symbolTable[sourceIndex].symbolType) != 0) {
        printf("CAN'T PASS %s TO %s\n", symbolTable[sourceIndex].symbolType, symbolTable[destIndex].symbolType);
        exit(0);
    }

    if (strcmp(symbolTable[destIndex].symbolType, "string") == 0 && strcmp(symbolTable[sourceIndex].symbolType, "string") == 0) {
        strcpy(symbolTable[destIndex].stringValue, symbolTable[sourceIndex].stringValue);
    } else {
        symbolTable[destIndex].value = symbolTable[sourceIndex].value;
    }

    return;
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
            strcpy(thisRefference, symbolTable[i].refference);
            if(strcmp(thisRefference, "global") == 0){
                printf("global:\n");
            }
            for(int k = 0; k < thisScope - 1; k++){
                printf("\t");
            }
            for(int j = 0; j < variableCount; j++){
                if(!vizitat[j]){
                    if(symbolTable[j].scope == thisScope && !strcmp(symbolTable[j].refference, thisRefference)){
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
                        } else if(strcmp(symbolTable[j].symbolType, "structure") == 0){
                            printf("%s %s\n", symbolTable[j].symbolType, symbolTable[j].symbolName);
                            thisScope++;
                            strcpy(thisRefference, symbolTable[j].symbolName);
                            j = -1;
                            continue;
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

void writeTable()
{
    FILE *f = fopen("output.txt", "w");

    int vizitat[100];

    for (int i = 0; i < variableCount; i++)
    {
        vizitat[i] = 0;
    }

    fprintf(f, "\nSymbol table:\n");

    for(int i = 0; i < variableCount; i++){
        if(!vizitat[i]){
            char thisRefference[100];
            int thisScope = symbolTable[i].scope;
            strcpy(thisRefference, symbolTable[i].refference);
            if(strcmp(thisRefference, "global") == 0){
                fprintf(f, "global:\n");
            }
            for(int k = 0; k < thisScope - 1; k++){
                fprintf(f, "\t");
            }
            for(int j = 0; j < variableCount; j++){
                if(!vizitat[j]){
                    if(symbolTable[j].scope == thisScope && !strcmp(symbolTable[j].refference, thisRefference)){
                        vizitat[j] = 1;
                        for(int k = 0; k < thisScope; k++){
                            fprintf(f, "\t");
                        }
                        if(strcmp(symbolTable[j].symbolType, "char") == 0){
                            fprintf(f, "%s %s '%c'\n", symbolTable[j].symbolType, symbolTable[j].symbolName, symbolTable[j].value);
                        } else if (strcmp(symbolTable[j].symbolType, "int") == 0){
                            fprintf(f, "%s %s %d\n", symbolTable[j].symbolType, symbolTable[j].symbolName, symbolTable[j].value);

                        } else if (strcmp(symbolTable[j].symbolType, "string") == 0){

                            fprintf(f, "%s %s \"%s\"\n", symbolTable[j].symbolType, symbolTable[j].symbolName, symbolTable[j].stringValue);
                        } else if(strcmp(symbolTable[j].symbolType, "bool") == 0){
                            if(symbolTable[j].value){
                                fprintf(f, "%s %s true\n", symbolTable[j].symbolType, symbolTable[j].symbolName);
                            } else {
                                fprintf(f, "%s %s false\n", symbolTable[j].symbolType, symbolTable[j].symbolName);
                            }
                        } else if(strcmp(symbolTable[j].symbolType, "structure") == 0){
                            fprintf(f, "%s %s\n", symbolTable[j].symbolType, symbolTable[j].symbolName);
                            thisScope++;
                            strcpy(thisRefference, symbolTable[j].symbolName);
                            j = -1;
                            continue;
                        }

                    }
                }
            }
        }
    }

    fprintf(f, "\n");
    for (int i = 0; i < functionIndex; i++)
    {
        fprintf(f, "%s\n", symTableFct[i].signature);
    }

    fclose(f);
}


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

char* getTypeOf(char *name)
{
    for (int i = 0; i < variableCount; i++)
    {
        if (strcmp(symbolTable[i].symbolName, name) == 0)
        {
            return symbolTable[i].symbolType;
        }
    }

    return "VOID";
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
