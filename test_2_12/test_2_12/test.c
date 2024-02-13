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
	char mine[ROWS][COLS] = { '0' };	//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };	//����Ų�����׵���Ϣ
	//��ʼ����������Ϊָ��������
	//mine ������û�в����׵�ʱ�򣬶��ǡ�0��
	InitBoard(mine, ROWS, COLS, '0');
	//show ������û���Ų��׵�ʱ�򣬶��ǡ�*��
	InitBoard(show, ROWS, COLS, '*');
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROWS, COLS);
	DisplayBoard(show, ROWS, COLS);
	FindMine(mine,show, ROW, COL);
	Sleep(2500);
	printf("************************************\n");
	Sleep(500);
	printf("************�����������************\n");
	Sleep(500);
	printf("***************���Ե�***************\n");
	Sleep(500);
	printf("************************************\n");
	Sleep(500);
	system("cls");
}

int main()
{
	srand((unsigned int)time(NULL));	//������������������
	int num = 0;
	do
	{
		Menu();
		scanf("%d", &num);
		switch (num)
		{
		case 0:
			printf("��Ϸ����\n");
			break;
		case 1:
			system("cls");
			printf("��Ϸ��ʼ\n");
			Game();
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	} while (num != 0);
	return 0;
}