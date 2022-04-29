//
// Created by Rene.KOESSLER on 24.04.2022.
//

#ifndef TICTACTOE_TICTACTOEINVALIDFIELDEXCEPTION_H
#define TICTACTOE_TICTACTOEINVALIDFIELDEXCEPTION_H
#pragma once

#include <stdio.h>
#include <stdexcept>

class TicTacToeInvalidFieldException : public std::exception {
public:
    virtual const char* what() const noexcept;
};


#endif //TICTACTOE_TICTACTOEINVALIDFIELDEXCEPTION_H


