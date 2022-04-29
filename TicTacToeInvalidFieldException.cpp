//
// Created by Rene.KOESSLER on 24.04.2022.
//

#include "TicTacToeInvalidFieldException.h"


const char* TicTacToeInvalidFieldException::what() const noexcept {
    return "TicTacToeInvalidFieldException";
}