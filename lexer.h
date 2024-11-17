//
// Created by ben on 17/11/24.
//

#ifndef BENLANG_LEXER_H
#define BENLANG_LEXER_H

#include <string>

enum Token {
    tok_eof = -1,

    // commands
    tok_def = -2,
    tok_extern = -3,

    // primary
    tok_identifier = -4,
    tok_number = -5,
};

extern std::string IdentifierStr;
extern double NumVal;

#endif