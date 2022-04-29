//
// Created by Rene.KOESSLER on 24.04.2022.
//

#ifndef TICTACTOE_TICTACTOEFIELD_H
#define TICTACTOE_TICTACTOEFIELD_H
#pragma once

#include <vector>
#include <string>
#include <sstream>

using namespace std;

class TicTacToeField {
protected:
    vector<vector<int>> field;

public:
    TicTacToeField();
    TicTacToeField(vector<vector<int>> field);

    int calculateWinner();

    string getFieldStr();

};



#endif //TICTACTOE_TICTACTOEFIELD_H






