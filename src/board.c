#include <stdio.h>
#include "board.h"

void initBoard(Board *board) {
    char initialBoard[BOARD_SIZE][BOARD_SIZE] = {
        {'r','n','b','q','k','b','n','r'},
        {'p','p','p','p','p','p','p','p'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','Q','K','B','N','R'}
    };

    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board->squares[i][j] = initialBoard[i][j];
        }
    }
}

void printBoard(const Board *board) {
    printf("\n  a b c d f e f g\n");

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        printf("%d ", 8 - i);
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf("%c ", board->squares[i][j]);
        }
        printf("%d\n", 8 - i);
    }

    printf("  a b c d e f g h\n\n");
    
}
