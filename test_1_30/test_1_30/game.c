#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//void Menu()
//{
//	printf("********************************\n");
//	printf("**********   1.play   **********\n");
//	printf("**********   0.exit   **********\n");
//	printf("********************************\n");
//}
//
//void Game()
//{
//	int guess = 0;
//	int ret = rand()%100+1;			//��������� ��Ϊrand�������ɵ��������Χ��0~RAND_MAX��������0~32767��ͨ��ģ100�ķ�ʽת����0~99������
//	while (guess != -1)
//	{
//		printf("�������");
//		scanf("%d", &guess);
//		if (guess < ret&&guess>0)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret&&guess<101)
//		{
//			printf("�´���\n");
//		}
//		else if (guess == ret)
//		{
//			printf("��ϲ���¶���\n");
//			Sleep(2000);
//			for (int i = 0; i < 5; i++)
//			{
//				Sleep(100);
//				printf("********************************\n");
//			}
//			system("cls");
//			break;
//		}
//		else
//		{
//			printf("������1~100������\n");
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));	//������������ӣ������(unsigned int)time(NULL)��ת����unsigned int���͵�ʱ���
//	int a = 0;
//	do
//	{
//		Menu();
//		printf("��ѡ��:>");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		case 1:
//			system("cls");
//			printf("��Ϸ��ʼ\n");
//			Game();
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (a!=0);
//	return 0;
//}
