cmake_minimum_required(VERSION 3.25)
project(Chess)

set(CMAKE_CXX_STANDARD 20)

add_executable(Chess main.cpp Game.cpp Board.cpp Piece.cpp Evaluate.cpp Move.cpp Generate.cpp Computer.cpp Ui.cpp Constants.cpp)
