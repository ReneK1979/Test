//
// Created by Rene.KOESSLER on 24.04.2022.



#include <iostream>
#include <string>
#include <sstream>

#include "TicTacToeInvalidFieldException.h"
#include "TicTacToeGame.h"

using namespace std;

TicTacToeGame::TicTacToeGame(std::string player1, std::string player2) {
    this->player1 = player1;
    this->player2 = player2;

    currentPlayer = 1;

    cout << "Ein neues TicTacToeGame wurde erstellt" << endl;
}

void TicTacToeGame::play(int row, int col) {
    if (row < 0 || row >= field.size()) {
        throw TicTacToeInvalidFieldException();
    }
    if (col < 0 || col >= field[row].size()) {
        throw TicTacToeInvalidFieldException();
    }
    if (field[row][col] != 0) {
        throw TicTacToeInvalidFieldException();
    }
    field[row][col] = currentPlayer;
    if (currentPlayer == 1) {
        currentPlayer = 2;
    }
    else {
        currentPlayer = 1;
    }
}

string TicTacToeGame::getWinner() {
    if (isFinished()) {
        int winner = calculateWinner();
        if (winner == 0) {
            return "Unentschieden";
        }
        else if (winner == 1) {
            return player1;
        }
        else {
            return player2;
        }
    }
    return "";
}

bool TicTacToeGame::isFinished() {
    int winner = calculateWinner();
    if (winner != 0) {
        return true;
    }

    for (const auto &row : field) {
        for (const int &value : row) {
            if (value == 0) {
                return false;
            }
        }
    }

    return true;
}

string TicTacToeGame::getCurrentPlayer() {
    if (currentPlayer == 1) {
        return player1;
    }
    else {
        return player2;
    }
}

string TicTacToeGame::getFieldStr() {
    stringstream result;

    result << "Player 1: " << player1 << endl;
    result << "Player 2: " << player2 << endl;

    result << TicTacToeField::getFieldStr();

    return result.str();
}

