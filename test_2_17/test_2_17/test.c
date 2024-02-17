#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int* test()
{
	int a = 10;
	return &a;
}

int main()
{
	//int a = 10;		//a是整型变量，占用4个字节的内存空间
	//int* pa = &a;	//pa是一个指针变量，用来存放地址的

	//int n = 10;
	//char* pc = (char*)&n;
	//int* pi = &n;
	//printf("%p\n", &n);
	//printf("%p\n", pc);
	//printf("%p\n", pc+1);
	//printf("%p\n", pi);
	//printf("%p\n", pi+1);

	//int n = 0x11223344;
	//char* pc = (char*)&n;
	//int* pi = &n;
	//*pc = 0;
	//*pi = 0;

	//int* p;
	////p没有初始化，就意味着没有明确的指向
	////一个局部变量不初始化的话，放的是随机值
	//*p = 10;	//非法访问内存，这里的p就是野指针

	//int arr[10] = { 0 };
	//int* p = arr;
	//for (int i = 0; i <= 10; i++)
	//{
	//	*(p++) = i;	 //当指针指向的范围超出数组arr的范围时，p就是野指针
	//}

	//int* p = test();

	/*float v[5];
	for (float* pv = &v[0]; pv < &v[5];)
	{
		*pv++ = 0;
	}*/

	/*int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);*/

	/*char arr[] = "asuiyqwr";
	int a = my_strlen1(arr);
	int b = my_strlen2(arr);
	printf("%d %d\n", a, b);*/

	/*for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}
	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
	{
		*vp = 0;
	}*/

	int a = 10;
	int b = 20;
	int c = 30;
	int arr[10];
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	int* parr[10] = { &a,&b,&c };
	return 0;
}

int my_strlen1(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

int my_strlen2(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen2(++str);
	}
	else
	{
		return 0;
	}
}

int my_strlen3(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}