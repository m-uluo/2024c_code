#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	printf("abc\n");
	printf("abc\0def");
	printf("%s\n", "(are you ok \? \? )");		//早期有的会将??)翻译成]，现已无
	printf("%c\n", '\'');						//打印单引号
	printf("%c\n", '\"');						//打印双引号
	printf("%s\n", "abc\\0def");				//打印反斜杠
	printf("%c\n", '\a');						//蜂鸣
	printf("%s\n", "abc\ndef");					//换行
	printf("%s\n", "abc\tdef");					//水平制表符
	printf("%c\n", '\130');						//表示1~3个八进制的ASCII编码字符
	printf("%c\n", '\x30');						//表示2个十六进制的ASCII编码字符
	printf("%d\n", strlen("qwer t"));			//空格也占一个符号位

	//注释 /**/

	printf("加入比特\n");
	printf("要好好学习吗(1/0)");
	int a = 0;
	scanf("%d", &a);
	if (a == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n");

	int line = 0;
	printf("加入比特\n");
	while (line != 10)				//line小于10的时候保持循环
	{
		printf("写代码\n");
		line++;
	}								//大于10的时候跳出循环
	if (line >= 10)
	{
		printf("好offer\n");
	}

	int n1 = 0;
	int n2 = 0;
	//输入
	scanf("%d %d", &n1, &n2);
	int sum = Add(n1, n2);
	printf("%d\n", sum);

	int arr[10] = { 1 };		//整型数组，中括号内有常量则最多放所写常量数个，少于常数个则其余默认为0
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}
int Add(int a, int b)
{
	int sum = a + b;
	return sum;
}