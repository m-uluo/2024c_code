#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Get_Max(int a, int b)
{
	return (a > b ? a : b);	//求较大值
}

//形式参数
void Change(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

void Swap1(int x, int y)
{
	int z = x;
	x = y;
	y = z;
}

void Swap2(int* px, int* py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

int GetPrimeNumber(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int GetLeapYear(int year)
{
	/*if (year % 400 == 0)
	{
		return 1;
	}
	else if (year % 100 == 0)
	{
		return 0;
	}
	else if (year % 4 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}*/

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return 1;
	}
	return 0;
}
int main()
{
	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//printf("交换前：a=%d b=%d\n", a, b);
	//int c = Get_Max(a, b);
	//printf("%d\n", c);

	////当实参传递给形参的时候，形参是实参的一份临时拷贝
	////对形参的修改不会影响实参
	//Change(&a, &b);
	//printf("%d %d", a, b);

	////实参-实际参数
	////传值调用
	//Swap1(a, b);

	////传址调用
	//Swap2(&a, &b);

	//for (int i = 101; i < 200; i += 2)
	//{
	//	if (GetPrimeNumber(i) == 1)
	//	{
	//		printf("%d ", i);
	//	}
	//}

	int a1 = 0;
	int b1 = 0;
	scanf("%d %d", &a1, &b1);
	for (int year = a1; year <= b1; year++)
	{
		if (GetLeapYear(year) == 1)
		{
			printf("%d ", year);
		}
	}


	return 0;
}