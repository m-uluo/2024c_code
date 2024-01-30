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
//	int ret = rand()%100+1;			//设置随机数 因为rand函数生成的随机数范围是0~RAND_MAX，这里是0~32767，通过模100的方式转换成0~99的数字
//	while (guess != -1)
//	{
//		printf("请猜数字");
//		scanf("%d", &guess);
//		if (guess < ret&&guess>0)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret&&guess<101)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess == ret)
//		{
//			printf("恭喜！猜对了\n");
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
//			printf("请输入1~100的数字\n");
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));	//设置随机数种子，输入的(unsigned int)time(NULL)是转换成unsigned int类型的时间戳
//	int a = 0;
//	do
//	{
//		Menu();
//		printf("请选择:>");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 0:
//			printf("游戏结束\n");
//			break;
//		case 1:
//			system("cls");
//			printf("游戏开始\n");
//			Game();
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (a!=0);
//	return 0;
//}
