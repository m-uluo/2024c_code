#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void bubble_sort1(int arr[])
{
	for (int i = 0; i < 9; i++)			//趟数
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//数组名本质上是：数组首元素的地址
//地址是应该使用指针来接收，所以arr这里看似是数组，本质是指针变量。
void bubble_sort(int arr[], int sz)
{
	
	for (int i = 0; i < sz-1; i++)			//趟数
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	//int arr[10];
	//char ch[5];
	//double data[20];

	/*int n = 10;
	int arr0[n];*/
	//在C99标准之前，数组的大小必须是常量或者常量表达式
	//在C99之后，数组的大小可以是变量，为了支持变长数组
	//变量数组不能初始化

	//不完全初始化，剩余的元素默认初始化为0
	int arr1[10] = { 1,2,3 };
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr3[] = { 1,2,3 };
	
	//a  b  c  0  0  0  0  0  0  0
	char ch1[10] = { 'a','b','c' };
	//a  b  c  \0  0  0  0  0  0  0
	char ch2[10] = "abc";
	//a  b  c
	char ch3[] = { 'a','b','c' };
	//a  b  c  \0
	char ch4[] = "abc";
	int arr4[] = { 1,2,3 };
	int arr5[4] = { 1,2,3,4 };
	char arr6[3] = { 'a',98,'c' };
	char arr7[] = { 'a','b','c' };
	char arr8[] = "abcd";

	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	for (int i = 0; i < 10; i++)
	{
		printf("&arr[%d]=%p\n",i, &arr[i]);
	}

	/*int arr[3][4];
	char ch[3][5];
	double data[2][4];*/

	int arr9[3][4] = { 1,2,3,4,5,6 };
	int arr10[3][4] = { {1,2},{4,5} };
	//二维数组行可以省略，但是列不能省略，以此类推三位也是只能省略第一维，后两维不能省略
	int arr11[][4] = { {2,3},{4,5} };

	int arrA[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arrA[i][j]);
		}
		printf("\n");
	}

	int arrB[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arrB) / sizeof(arrB[0]);
	bubble_sort(arr,sz);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	int arrC[10] = { 1,2,3,4,5 };
	printf("%p\n", arrC);					//arr就是首元素地址
	printf("%p\n", arrC+1);					//sizeof加一是加上一个元素的字节数
	printf("--------------------");
	printf("%p\n", &arrC[0]);				//首元素地址
	printf("%p\n", &arrC[0]+1);
	printf("--------------------");
	printf("%d\n", &arrC);					//数组地址
	printf("%d\n", &arrC+1);
	printf("--------------------");


	return 0;
}