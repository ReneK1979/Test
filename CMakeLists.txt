cmake_minimum_required(VERSION 3.19)
project(tictactoe)

set(CMAKE_CXX_STANDARD 14)

add_executable(tictactoe main.cpp TicTacToeField.cpp TicTacToeField.h TicTacToeGame.cpp TicTacToeGame.h TicTacToeInvalidFieldException.cpp TicTacToeInvalidFieldException.h)