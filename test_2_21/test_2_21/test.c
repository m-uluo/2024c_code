#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	/*int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	for (i = 0; i < 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	printf("%p\n", arr);
	printf("%p\n", &i);*/

	/*int a = 1;
	if (*(char*)&a == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}*/

	/*char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d b=%d c=%d\n", a, b, c);*/

	//char a = -128;
	////10000000 00000000 00000000 10000000
	////11111111 11111111 11111111 10000000
	////a=10000000
	//
	//char a = 128;
	//printf("%u\n", a);
	////00000000 00000000 00000000 10000000
	////a=10000000

	int n = 9;
	float* pfloat = (float*)&n;
	printf("n的值：%d\n", n);
	printf("*pfloat的值为：%f\n", *pfloat);

	*pfloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pfloat的值为：%f\n", *pfloat);
	return 0;
}