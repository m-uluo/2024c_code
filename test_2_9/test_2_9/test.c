#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void bubble_sort1(int arr[])
{
	for (int i = 0; i < 9; i++)			//����
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

//�������������ǣ�������Ԫ�صĵ�ַ
//��ַ��Ӧ��ʹ��ָ�������գ�����arr���￴�������飬������ָ�������
void bubble_sort(int arr[], int sz)
{
	
	for (int i = 0; i < sz-1; i++)			//����
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
	//��C99��׼֮ǰ������Ĵ�С�����ǳ������߳������ʽ
	//��C99֮������Ĵ�С�����Ǳ�����Ϊ��֧�ֱ䳤����
	//�������鲻�ܳ�ʼ��

	//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
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
	//��ά�����п���ʡ�ԣ������в���ʡ�ԣ��Դ�������λҲ��ֻ��ʡ�Ե�һά������ά����ʡ��
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
	printf("%p\n", arrC);					//arr������Ԫ�ص�ַ
	printf("%p\n", arrC+1);					//sizeof��һ�Ǽ���һ��Ԫ�ص��ֽ���
	printf("--------------------");
	printf("%p\n", &arrC[0]);				//��Ԫ�ص�ַ
	printf("%p\n", &arrC[0]+1);
	printf("--------------------");
	printf("%d\n", &arrC);					//�����ַ
	printf("%d\n", &arrC+1);
	printf("--------------------");


	return 0;
}