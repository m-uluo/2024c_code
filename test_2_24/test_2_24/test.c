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
void test3(int arr[][]) {}		//�βεĶ�ά���飬�п���ʡ�ԣ��в���ʡ��
void test3(int arr[][5]) {}
void test3(int* arr) {}			//ʵ�δ���ĵ�һ����һ��һά����ĵ�ַ��һά����ĵ�ַ���ܷŵ�һ��ָ����
void test3(int* arr[5]) {}		//�β���ָ�����飬����ָ��
void test3(int(*arr)[5]) {}		//�β�������ָ�룬�������Ϊ5����
void test3(int** arr) {}		//�β��Ƕ���ָ�룬�������һ��ָ������ĵ�ַ����������������һ�е�һά����ĵ�ַ

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

	//const char* p = "abcdef";		//���ַ������ַ� a �ĵ�ַ������ p
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

	//int arr1[10];	//��������
	//char ch[5];		//�ַ�����
	//int* arr2[6];	//�������ָ�������
	//char* arr3[5];	//����ַ�ָ�������

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
		//printf("%p\n", arr);			//��Ԫ�ص�ַ
		//printf("%p\n", arr + 1);		//[1]Ԫ�ص�ַ

	//printf("%p\n", &arr[0]);		//��Ԫ�ص�ַ
		//printf("%p\n", &arr[0]+1);		//[1]Ԫ�ص�ַ

	//printf("%p\n", &arr);			//��Ԫ�ص�ַ
		//printf("%p\n", &arr+1);			//Ԫ��ĩβ���һ����ַ

	//int arr[10] = { 0 };
		//int* p = arr;
		//int (*p2)[10] = &arr;

	////����ָ��������������͵ĵ�ַ
		////�ַ�ָ������������ַ��ĵ�ַ
		////����ָ���������������ĵ�ַ

	//char* arr[5] = { 0 };	//arr��char* [5]����
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

		//int arr[5];				//arr����������
			//int* parr1[10];			//parr1��int*��ָ������
			//int(*parr2)[10];		//parr2��int[10]������ָ��
			//int(*parr3[10])[5];		//parr3[10]��int(*)[5]������ָ�룬parr3������ָ������

		/*int arr[10] = { 0 };
		int* arr2[20] = { 0 };
		test(arr);
		test2(arr2);*/

		//int arr[3][5] = { 0 };
		//test3(arr);		//���������һ�е�һά����

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
	int(*p)[5] = &arr;		//&������-ȡ������ĵ�ַ
	printf("%p\n", &Add);	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ
	printf("%p\n", Add);
	int (*pf)(int, int) = &Add;
	int ret = (*pf)(3, 2);	//ͨ������pf��ӵ���Add����

	return 0;
}
