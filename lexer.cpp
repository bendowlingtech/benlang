//
// Created by ben on 17/11/24.
//

#include "lexer.h"
#include <cctype>
#include <cstdio>
#include <cstdlib>

std::string IdentifierStr; // Filled in if tok_identifier
double NumVal;

int getTok() {
    static int LastChar = ' ';

    while (isspace(LastChar)) {
        LastChar = getchar();
    }

    if (isalpha(LastChar)) {
        IdentifierStr += LastChar;
        while (isalnum((LastChar = getchar())))
            IdentifierStr += LastChar;

        if (IdentifierStr == "def")
            return tok_def;
        if (IdentifierStr == "extern")
            return tok_extern;
        return tok_identifier;
    }

}




