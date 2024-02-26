#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print1(int arr[3][5], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*p)[5], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

void test(int arr[]) {}
void test(int arr[10]) {}
void test(int* arr) {}
void test2(int* arr[20]) {}
void test2(int** arr) {}

void test3(int arr[3][5]) {}
void test3(int arr[][]) {}		//形参的二维数组，行可以省略，列不能省略
void test3(int arr[][5]) {}
void test3(int* arr) {}			//实参传入的第一行是一个一维数组的地址，一维数组的地址不能放到一级指针中
void test3(int* arr[5]) {}		//形参是指针数组，不是指针
void test3(int(*arr)[5]) {}		//形参是数组指针，数组个数为5个的
void test3(int** arr) {}		//形参是二级指针，用来存放一级指针变量的地址，而传入的是数组第一行的一维数组的地址

void print(int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d\n", *(p + i));
	}
}

void test(int** ptr)
{
	printf("num=%d\n", **ptr);
}

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	/*char ch = 'w';
	char* pc = &ch;
	*pc = 'b';
	printf("%c\n", *pc);*/

	//const char* p = "abcdef";		//把字符串首字符 a 的地址付给了 p
	//char arr[] = "abcdef";
	//printf("%s\n", p);

	//const char* p1 = "abcdef";
	//const char* p2 = "abcdef";

	//char arr1[] = "abcdef";
	//char arr2[] = "abcdef";
	//if (p1 == p2)
	//	printf("p1==p2\n");
	//else
	//	printf("p1!=p2\n");

	//if (arr1 == arr2)
	//	printf("arr1==arr2\n");
	//else
	//	printf("arr1!=arr2\n");

	//int arr1[10];	//整型数组
	//char ch[5];		//字符数组
	//int* arr2[6];	//存放整型指针的数组
	//char* arr3[5];	//存放字符指针的数组

	//int arr1[] = { 1,2,3,4 };
		//int arr2[] = { 2,3,4,5 };
		//int arr3[] = { 3,4,5,6 };

	//int* parr[3] = { arr1,arr2,arr3 };
		//for (int i = 0; i < 3; i++)
		//{
		//	for (int j = 0; j < 4; j++)
		//	{
		//		printf("%d ", parr[i][j]);	//*(parr[i]+j)
		//	}
		//	printf("\n");
		//}

	//int arr[10] = { 0 };
		//printf("%p\n", arr);			//首元素地址
		//printf("%p\n", arr + 1);		//[1]元素地址

	//printf("%p\n", &arr[0]);		//首元素地址
		//printf("%p\n", &arr[0]+1);		//[1]元素地址

	//printf("%p\n", &arr);			//首元素地址
		//printf("%p\n", &arr+1);			//元素末尾后第一个地址

	//int arr[10] = { 0 };
		//int* p = arr;
		//int (*p2)[10] = &arr;

	////整型指针是用来存放整型的地址
		////字符指针是用来存放字符的地址
		////数组指针是用来存放数组的地址

	//char* arr[5] = { 0 };	//arr是char* [5]类型
		//char* (*pc)[5] = &arr;

	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		//int* p = arr;
		//int (*p1)[10] = &arr;

	//int sz = sizeof(arr) / sizeof(arr[0]);
		//for (int i = 0; i < sz; i++)
		//{
		//	printf("%d ", (*p1)[i]);
		//	//printf("%d ", *(*p + i));
		//}
		//printf("\n");
		//for (int i = 0; i < sz; i++)
		//{
		//	//printf("%d ", p[i]);
		//	printf("%d ", *(p + i));
		//}

	/*int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7, };
		print1(arr, 3, 5);*/

		//int arr[5];				//arr是整型数组
			//int* parr1[10];			//parr1是int*的指针数组
			//int(*parr2)[10];		//parr2是int[10]的数组指针
			//int(*parr3[10])[5];		//parr3[10]是int(*)[5]的数组指针，parr3是数组指针数组

		/*int arr[10] = { 0 };
		int* arr2[20] = { 0 };
		test(arr);
		test2(arr2);*/

		//int arr[3][5] = { 0 };
		//test3(arr);		//传入数组第一行的一维数组

		/*int arr[10] = { 1,2,3,4,5,6,7,8,9 };
		int* p = arr;
		int sz = sizeof(arr) / sizeof(arr[0]);
		print(p, sz);*/

	/*int n = 10;
	int* p = &n;
	int** pp = &p;
	test(pp);
	test(&p);*/

	int arr[5] = { 0 };
	int(*p)[5] = &arr;		//&数组名-取出数组的地址
	printf("%p\n", &Add);	//对于函数来说，&函数名和函数名都是函数的地址
	printf("%p\n", Add);
	int (*pf)(int, int) = &Add;
	int ret = (*pf)(3, 2);	//通过调用pf间接调用Add函数

	return 0;
}
