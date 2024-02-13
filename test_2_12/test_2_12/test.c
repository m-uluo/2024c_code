#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Menu()
{
	printf("********************************\n");
	printf("**********   1.play   **********\n");
	printf("**********   0.exit   **********\n");
	printf("********************************\n");
}

void Game()
{
	char mine[ROWS][COLS] = { '0' };	//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };	//存放排查出的雷的信息
	//初始化数组内容为指定的内容
	//mine 数组在没有布置雷的时候，都是‘0’
	InitBoard(mine, ROWS, COLS, '0');
	//show 数组在没有排查雷的时候，都是‘*’
	InitBoard(show, ROWS, COLS, '*');
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROWS, COLS);
	DisplayBoard(show, ROWS, COLS);
	FindMine(mine,show, ROW, COL);
	Sleep(2500);
	printf("************************************\n");
	Sleep(500);
	printf("************正在清理地面************\n");
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