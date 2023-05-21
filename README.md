# Lex and Yacc Compiler
This repository contains a compiler implemented using Lex and Yacc, two popular tools for lexical analysis and parsing. The compiler takes input source code written in a specific language and generates executable code or an intermediate representation.

**Components**

Lex: Lex is a lexical analyzer generator. It reads a set of regular expressions and corresponding actions and generates a lexer (lexical analyzer) in C.

Yacc: Yacc is a parser generator. It reads a set of grammar rules and actions and generates a parser in C. The parser recognizes the syntactic structure of the source code based on the grammar rules.

Compiler: The compiler itself is built using Lex and Yacc. It combines the lexer and parser to perform lexical analysis and parsing of the source code. The compiler can perform various tasks such as syntax checking, semantic analysis, and code generation.
