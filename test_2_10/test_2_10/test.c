#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"	//包含头文件

void Menu()
{
	printf("************************************\n");
	printf("********  1.play    0.exit  ********\n");
	printf("************************************\n");
}

void Game()
{
	int winner = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋过程
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		winner = Check(board, ROW, COL, winner);
		//过程检查 玩家胜利则跳出
		if (winner != 0)
		{
			break;
		}
		Sleep(700);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		winner = Check(board, ROW, COL, winner);
		//过程检查 电脑胜利则跳出
		if (winner != 0)
		{
			break;
		}
	}
	//结果判断
	switch (winner)
	{
	case 1:
		printf("恭喜你胜利了\n");
		break;
	case 2:
		printf("你输了\n");
		break;
	case 3:
		printf("平局\n");
		break;
	}
	Sleep(2000);
	printf("************************************\n");
	Sleep(500);
	printf("************正在清理桌面************\n");
	Sleep(500);
	printf("***************请稍等***************\n");
	Sleep(500);
	printf("************************************\n");
	Sleep(500);
	system("cls");
}

int main()
{
	srand((unsigned int)time(NULL));	//设置随机数的生成起点
	int num = 0;
	do
	{
		Menu();
		scanf("%d", &num);
		switch (num)
		{
		case 0:
			printf("游戏结束\n");
			break;
		case 1:
			system("cls");
			printf("游戏开始\n");
			Game();
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	} while (num != 0);
	return 0;
}