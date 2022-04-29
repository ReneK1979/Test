//
//  main.cpp
//
//
//

#include <iostream>
#include <string>
#include <vector>

#include "TicTacToeField.h"
#include "TicTacToeGame.h"
#include "TicTacToeInvalidFieldException.h"

using namespace std;


int main(int argc, const char * argv[]) {

    TicTacToeGame g("Max", "Monika");
    cout << g.getFieldStr() << endl;

    while (!g.isFinished()) {
        cout << "Aktuell ist Spieler " << g.getCurrentPlayer() << " dran. Wo spielst du hin?" << endl;
        int row, col;

        cin >> row >> col;
        try {
            g.play(row, col);
        }
        catch(TicTacToeInvalidFieldException &e) {
            cout << "Dieser Spielzug ist ungueltig, bitte nochmal probieren!" << endl;
        }


        cout << g.getFieldStr() << endl;
    }

    cout << "Der Gewinner ist: " << g.getWinner() << endl;



}
