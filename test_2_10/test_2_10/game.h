#pragma once
#include<stdio.h>

#include<stdlib.h>
#include<time.h>

#define ROW 3		//���峣�� ��
#define COL 3		//���峣�� ��

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//������
int Check(char board[ROW][COL], int row, int col);