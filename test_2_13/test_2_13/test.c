#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Stu
{
	char name[20];
	int age;
	double score;
};

void SetStu(struct Stu* ss)
{
	strcpy(ss->name, "zhangsan");	//strcpy((*ss).name, "zhangsan");
	ss->age = 20;
	ss->score = 100.0;
}

void PrintStu(struct Stu ss)
{
	printf("%s,%d,%lf", ss.name, ss.age, ss.score);
}

int main()
{
	//int a = 7 % 2;
	//int b = 7 / 2;
	//printf("%d\n", a);
	//printf("%d\n", b);

	//int num1 = 7;
	////左移操作符移动的是二进制位
	//int num2 = num1 >> 1;
	//printf("%d\n", num2);

	////& 按二进制位与
	////| 按二进制位或
	////^ 按二进制位异或
	//int a1 = 3;
	//int b1 = -5;
	//int c1 = a1 & b1;
	////00000000000000000000000000000011 - 3的补码
	////10000000000000000000000000000101 - -5的原码
	////11111111111111111111111111111010 - -5的反码
	////11111111111111111111111111111011 - -5的补码
	////00000000000000000000000000000011 - 按位与
	//int c2 = a1 | b1;
	////11111111111111111111111111111011 - 按位或补码
	////10000000000000000000000000000101 - -5的原码
	//int c3 = a1 ^ b1;
	////11111111111111111111111111111000 - 按位异或补码
	////10000000000000000000000000001000 - 按位异或原码

	////数字交换不创建临时变量
	////方法一
	//int a = 3;
	//int b = 5;
	//printf("a=%d b=%d\n", a, b);
	///*a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("a=%d b=%d\n", a, b);*/

	////方法二
	////异或支持交换律
	//a = a ^ b;		//a=3^5
	//b = a ^ b;		//b=3^5^5 -> b=3
	//a = a ^ b;		//a=3^5^3 -> a=5
	//printf("a=%d b=%d\n", a, b);

	////求一个整数存储在内存中的二进制中1的个数
	////方法一
	//int num = 10;
	//int count = 0;
	//while (num)
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}
	//printf("%d\n", count);

	////方法二
	//count = 0;
	//for (int i = 0; i < 32; i++)
	//{
	//	if (num & (1 << i))
	//	{
	//		count++;
	//	}
	//}
	//printf("%d\n", count);

	//a = a + 5;		//a+=5
	//a = a << 1;		//a<<=1

	//int* p = &a;	//p就是a的指针
	//printf("%p\n", &a);
	//printf("%p\n", p);

	//a &= (~(1 << 4));

	//*p = 20;
	//printf("%d\n", a);

	//int d = a && b;
	//d = a || b;

	//int a = 1;
	//int b = 2;
	//int c = (a > b, a = b + 10, a, b = a + 1);		//第一个是判断表达式，结果为0；第二个是a=12；第三个是12；第四个是b=13

	struct Stu s = {0};
	SetStu(&s);
	PrintStu(s);

	char a2 = 5;
	char b2 = 126;			//存储的时候都是以截断的方式存储低位
	char c2 = a2 + b2;		//计算的时候扩展成4字节再计算，计算的结果再次阶段后存储
	printf("%d\n", c2);		

	return 0;
}