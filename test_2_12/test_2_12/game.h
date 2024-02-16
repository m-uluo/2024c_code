#pragma once
#include<stdio.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch);

//չʾ����
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);

//�׵Ĳ���
void SetMine(char board[ROWS][COLS], int row, int col);

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);