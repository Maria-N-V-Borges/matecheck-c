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

#include <stdio.h>

#define SIZE 8

void displayBoard(char board[SIZE][SIZE]) {
    int row, col;
    
    printf("\n  a b c d e f g h\n");
    for (row = 0; row < SIZE; row++) {
        printf("%d ", 8 - row);
        for (col = 0; col < SIZE; col++) {
            printf("%c ", board[row][col]);
        }
        printf("%d\n", 8 - row);
    }
    printf("  a b c d e f g h\n\n");
}

int main()
{
    char board[SIZE][SIZE] = {
        {'r','n','b','q','k','b','n','r'},
        {'p','p','p','p','p','p','p','p'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','Q','K','B','N','R'}
    };
    
    displayBoard(board);

    return 0;
}









