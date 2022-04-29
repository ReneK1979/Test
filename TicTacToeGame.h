//
// Created by Rene.KOESSLER on 24.04.2022.
//

#ifndef TICTACTOE_TICTACTOEGAME_H
#define TICTACTOE_TICTACTOEGAME_H
#pragma once

#include <string>
#include "TicTacToeField.h"

using namespace std;

class TicTacToeGame : public TicTacToeField
{
private:
    string player1;
    string player2;
    int currentPlayer;

public:

    TicTacToeGame(string player1, string player2);
    bool isFinished();
    void play(int row, int col);

    string getWinner();
    string getCurrentPlayer();
    string getFieldStr();
};


#endif //TICTACTOE_TICTACTOEGAME_H




