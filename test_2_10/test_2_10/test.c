#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"	//����ͷ�ļ�

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
	//��ʼ������
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//�������
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		winner = Check(board, ROW, COL, winner);
		//���̼�� ���ʤ��������
		if (winner != 0)
		{
			break;
		}
		Sleep(700);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		winner = Check(board, ROW, COL, winner);
		//���̼�� ����ʤ��������
		if (winner != 0)
		{
			break;
		}
	}
	//����ж�
	switch (winner)
	{
	case 1:
		printf("��ϲ��ʤ����\n");
		break;
	case 2:
		printf("������\n");
		break;
	case 3:
		printf("ƽ��\n");
		break;
	}
	Sleep(2000);
	printf("************************************\n");
	Sleep(500);
	printf("************������������************\n");
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