#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = ch;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int rows, int cols)
{
	printf("------------ɨ����Ϸ------------\n");
	for (int i = 0; i < cols - 1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i < rows - 1; i++)
	{
		printf("%d ", i);
		for (int j = 1; j < cols - 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------ɨ����Ϸ------------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count > 0)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (board[i][j] != 'x')
		{
			board[i][j] = 'x';
			count--;
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y, count, win = 0;
	while (1)
	{
		printf("�������Ų������\n");
		scanf("%d %d", &x, &y);
		//�����������
		if (x > 0 && x <= row && y > 0 && y <= col && show[x][y] == '*')
		{
			//�������
			if (mine[x][y] == 'x')
			{
				printf("���ź����㱻ը����\n");
				Sleep(1000);
				DisplayBoard(mine, ROWS, COLS);
				break;
			}
			//���������
			else
			{
				count = 0;
				for (int i = -1; i < 2; i++)
				{
					for (int j = -1; j < 2; j++)
					{
						if (mine[x + i][y + j] == 'x')
						{
							count++;
						}
					}
				}
				show[x][y] = count + '0';		//ת���������ַ�
				DisplayBoard(show, ROWS, COLS);
				win++;
				if (win == row * col - EASY_COUNT)
				{
					printf("��ϲ��ʤ����\n");
					Sleep(1500);
					DisplayBoard(mine, ROWS, COLS);
					break;
				}
			}
		}
		else
		{
			printf("�����������\n");
		}
	}

}