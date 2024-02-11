#pragma once
#include<stdio.h>

#include<stdlib.h>
#include<time.h>

#define ROW 3		//定义常量 行
#define COL 3		//定义常量 列

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//结果检查
int Check(char board[ROW][COL], int row, int col);