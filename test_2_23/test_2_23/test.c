#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void change(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

//void reverse(int* parr,int num)
//{
//	int ji = 0, ou = 0;
//	while (ji < 10)
//	{
//		while (parr[ji] % 2 == 0&& ji < 10)
//			ji++;
//		while (parr[ou] % 2 == 1&& ou < 10)
//			ou++;
//		if (ji > ou&&ji<10&& ou < 10)
//		{
//			change(&parr[ji], &parr[ou]);
//		}
//		else
//		{
//			ji++;
//		}
//	}
//}

void reverse(int* parr, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (parr[j] % 2 == 0 && parr[j + 1] % 2 == 1)
				change(&parr[j], &parr[j + 1]);
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}