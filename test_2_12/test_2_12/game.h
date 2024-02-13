#pragma once
#include<stdio.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

//初始化数组
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch);

//展示数组
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);

//雷的布局
void SetMine(char board[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);