#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX 100
#define STR "abcdef"

int a = 10;
void test()
{
	printf("test-->%d\n", a);
}

enum Color	
{
	//枚举常量
	RED,		//可能的取值，不会申请空间，不可更改
	GREEN,
	BLUE
};

enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	test();
	//int a = 10;
	{
		printf("%d\n", a);	//局部范围
	}
	printf("%d\n", a);

	extern int b;	//声明来自外部的符号
	printf("%d\n", b);

	//字面常量
	30;
	3.14;
	'w';
	"abc";

	//const修饰的常变量
	const int num = 3;
	//num = 4;		//常变量不能修改
	printf("%d\n", num);

	//#define定义的标识符常量
	printf("%d\n", MAX);
	int a = MAX;
	printf("%d\n", a);
	printf("%s\n", STR);	//%s打印字符串

	//枚举常量
	//三原色
	enum Color c = RED;		//创建枚举变量，赋值RED；在创建变量的时候才会申请空间

	/*char ch= 'a'字符类型
	C语言中没有字符串*/
	char arr1[] = "abcdef";	//末尾是\0，是结束标志
	char arr2[] = { 'a','b','c','d','e','f' };
	char arr3[] = { 'a','b','c','d','e','f','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);

	int len = strlen(arr2);		//求字符串长度的一个函数，string length  头文件是string.h
	printf("%d\n", len);

	return 0;
}