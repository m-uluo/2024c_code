#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"

int BinarySearch(int arr[], int y, int sz)
{
	int left = 0;
	int right = sz - 1;
	int mid;
	while (left <= right)			//循环条件
	{
		mid = left+(right-left)/2;	//防止溢出
			if (y < arr[mid])
			{
				right = mid - 1;
			}
			else if (y > arr[mid])
			{
				left = mid + 1;
			}
			else
			{
				return mid;			//找到情况
			}
	}
	return -1;						//找不到情况
}

void print(int num)
{
	int m = 0;
	while (num != 0)
	{
		m = num % 10;
		printf("%d ", m);
		num /= 10;
	}
}

void print1(int num)
{
	/*if (num >9)
	{
		print1(num / 10);
	}
	printf("%d ", num % 10);*/

	if (num != 0)
	{
		print1(num / 10);
		printf("%d ",num % 10);
	}
}

//int my_strlen(char chr[])		//参数部分写成数组的形式
int my_strlen(char* chr)		//参数部分写成指针的形式
{
	int count = 0;
	while (*chr != '\0')
	{
		count++;
		chr++;
	}
	return count;
}

int my_strlen1(char* chr)
{
	if (*chr != '\0')
	{
		return 1+my_strlen1(chr+1);
	}
	else
	{
		return 0;
	}
}

int fac(int num)
{
	if (num != 1)
	{
		return num * fac(num - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 9;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = BinarySearch(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("下标为%d \n", ret);
	}

	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);

	print(1234);
	printf("\n");
	print1(1234);
	printf("\n");

	char arr1[] = "abcdef";
	printf("%d\n", my_strlen(arr1));
	printf("%d\n", my_strlen1(arr1));

	printf("%d\n", fac(4));
	return 0;
}