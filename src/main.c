/*
 * File: main.c
 * Author: Maria de N. V. Borges
 * Description:
 *   Simple chessboard display in C.
 *   This program initializes a standard chessboard
 *   and prints it to the terminal using a 2D array.
 *
 * Features:
 *   - 8x8 chessboard
 *   - ASCII representation of pieces
 *   - Clean board visualization
 *
 * Language: C
 */

#include "board.h"

int main()
{
    Board board;

    initBoard(&board);
    printBoard(&board);

    return 0;
}








