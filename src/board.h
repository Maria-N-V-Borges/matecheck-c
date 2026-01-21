#ifndef BOARD_H
#define BOARD_H

#define BOARD_SIZE 8

/* Structure taht represents the chessboard*/
typedef struct 
{
    char squares[BOARD_SIZE][BOARD_SIZE];
} Board;

/* Initializes the board with the standard chess setup*/
void initBoard(Board *board);

/* Prints the board to the terminal */
void printBoard(const Board *board);

#endif
