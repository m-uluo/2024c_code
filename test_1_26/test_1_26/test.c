#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a0 = 7 / 2;		//取商
	int b0 = 7 % 2;		//取模
	//取模从操作符两端的操作数只能是整数
	float c0 = 7 / 2.0;
	printf("%d\n", a0);
	printf("%d\n", b0);
	printf("%.1f\n", c0);		//.1f表示打印小数点后一位

	int a = 10;			//赋值
	a = a + 3;
	a += 3;

	int a1 = -10;
	int b = -a1;

	//sizeof是操作符，是单目操作符，不是函数
	int num = 10;
	printf("%d\n", sizeof(num));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof num);		//变量可以去掉括号，但类型不可以
	//printf("%d\n", sizeof int);
	int arr[10] = { 0 };
	printf("%d\n", sizeof arr);		//40计算的是整个数组的大小，单位是字节
	printf("%d\n", sizeof arr[0]);

	int num1 = 10;
	int num2 = num1++;				//后置++，先使用，后++
	printf("%d\n", num1);
	printf("%d\n", num2);

	int num3 = ++num1;				//前置++，先++，后使用

	int num4 = (int)3.14;
	printf("%d\n", num4);			//3.14默认是double类型

	int num5 = 10;
	if (num5 == 10)
		printf("hehe\n");

	int num6 = 1;
	int num7 = 0;
	if (num6 && num7) printf("right1\n");
	if (num6 || num7) printf("right2\n");

	int num8 = 10;
	int num9 = 20;
	printf("%s\n", num8 > num9 ? "8大" : "9大");

	int x = 10;
	int y = 20;
	int z = 0;
	int w = (z = x - 2, x = y + z, z - 3);
	printf("%d\n", w);

	int arrp[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 4;
	arrp[n] = 30;


	return 0;
}