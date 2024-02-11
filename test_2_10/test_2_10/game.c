#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"	//包含头文件

void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印数据 %c | %c | %c 和---|---|---
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j != col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i != row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j != col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int num1, num2, right;
	printf("玩家下棋:>\n");
	printf("请输入坐标:>");
	do
	{
		scanf("%d %d", &num1, &num2);
		if ((num1 - 1 > row - 1 || num1 - 1 < 0) || (num2 - 1 > col - 1 || num2 - 1 < 0))
		{
			printf("请输入正确的坐标\n");
			right = 0;
		}
		else
		{
			if (board[num1 - 1][num2 - 1] != ' ')
			{
				printf("坐标被占用，请输入正确的坐标\n");
				right = 0;
			}
			else
			{
				right = 1;
			}
		}
	} while (right == 0);
	board[num1 - 1][num2 - 1] = '*';
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");
	int num1, num2, right;
	do
	{
		num1 = rand() % row;
		num2 = rand() % col;
		if (board[num1][num2] != ' ')
		{
			right = 0;
		}
		else
		{
			right = 1;
		}
	} while (right == 0);
	board[num1][num2] = '#';
}

//胜利检查
int Check(char board[ROW][COL], int row, int col)
{
	int ret = 0;
	//循环检查行 结果为列的一倍玩家胜利 结果为二倍电脑胜利 结果为三倍以上则继续检查
	for (int i = 0; i < row; i++)
	{
		ret = 0;
		for (int j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1])
			{
				if (board[i][j] == '*')
				{
					ret = ret + 1;
				}
				else if (board[i][j] == '#')
				{
					ret = ret + 2;
				}
			}
			else
			{
				ret = ret + 3 * col;
			}
		}
		if (ret == col - 1)
		{
			return 1;
		}
		else if (ret == 2 * col - 2)
		{
			return 2;
		}
	}
	//循环检查列
	for (int j = 0; j < col; j++)
	{
		ret = 0;
		for (int i = 0; i < row - 1; i++)
		{
			if (board[i][j] == board[i + 1][j])
			{
				if (board[i][j] == '*')
				{
					ret = ret + 1;
				}
				else if (board[i][j] == '#')
				{
					ret = ret + 2;
				}
			}
			else
			{
				ret = ret + 3 * row;
			}
		}
		if (ret == row - 1)
		{
			return 1;
		}
		else if (ret == 2 * row - 2)
		{
			return 2;
		}
	}
	//循环检查对角1
	ret = 0;
	for (int i = 0; i < row - 1; i++)
	{
		if (board[i][i] == board[i + 1][i + 1])
		{
			if (board[i][i] == '*')
			{
				ret = ret + 1;
			}
			else if (board[i][i] == '#')
			{
				ret = ret + 2;
			}
		}
		else
		{
			ret = ret + 3 * col;
		}
	}
	if (ret == col - 1)
	{
		return 1;
	}
	else if (ret == 2 * col - 2)
	{
		return 2;
	}
	//循环检查对角2
	ret = 0;
	for (int i = 0; i < row - 1; i++)
	{
		if (board[i][row - 1 - i] == board[i + 1][row - i - 2])
		{
			if (board[i][row - 1 - i] == '*')
			{
				ret = ret + 1;
			}
			else if (board[i][row - 1 - i] == '#')
			{
				ret = ret + 2;
			}
		}
		else
		{
			ret = ret + 3 * col;
		}
	}
	if (ret == col - 1)
	{
		return 1;
	}
	else if (ret == 2 * col - 2)
	{
		return 2;
	}
	//没有结果跳出
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	//平局
	return 3;
}