## 📌 main.c

This file is the entry point of the program.

It is responsible for:

- Creating a Board instance

- Calling the board initialization function

- Displaying the chessboard in the terminal

The main.c file keeps the program simple and delegates all board-related logic to the board module, following good modular programming practices in C.

---

## 📌 board.h

This header file defines:

- The Board structure

- Constants related to the chessboard

- Function prototypes for board manipulation

It allows code organization and communication between main.c and board.c.

---

## 📌 board.c

This file implements all board-related logic, including:

- Initializing the chessboard with the standard chess setup

- Printing the board to the terminal using algebraic notation (a–h, 1–8)

All chessboard logic is isolated here to keep the project clean and maintainable.

---

## ♟️ Project Goal

This project is a simple chessboard implementation in C, created for learning purposes.
It focuses on:

- Modular programming in C

- Use of header files (.h)

- Compilation with GCC

- Terminal-based output

Future improvements may include piece movement, rules validation, and basic game logic.
