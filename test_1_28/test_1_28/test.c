#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 10;
	if (a == 3) printf("hehe\n");

	int age = 0;
	//if (age > 18) printf("成年\n");
	scanf("%d", &age);
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 40)
		printf("壮年\n");
	else if (age >= 40 && age < 60)
		printf("中年\n");
	else if (age >= 60 && age < 100)
		printf("老年\n");
	else
		printf("老寿星\n");

	int num1 = 0;
	int num2 = 2;
	if (num1 == 1)
	{
		if (num2 == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	}

	//1.变量的命名（有意义，规范）
	//2.空格 空行 换行

	int num3 = 0;
	scanf("%d", &num3);
	if (num3 % 2 == 1)
		printf("奇数\n");
	else
		printf("偶数\n");

	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:						//整型常量表达式
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期7\n");
		break;
	}

	switch (day)
	{
	case 1:						//整型常量表达式
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("选择错误\n");
		break;
	}

	int i = 0;
	while (i < 10)
	{
		if (5 == i) break;		//等于五的时候直接跳出循环，不打印5
		printf("%d hehe\n",i);
		i++;
	}

	int i2 = 0;
	while (i2 < 10)
	{
		i2++;
		if (i2 == 5) continue;
		printf("%d hehe\n", i2);
	}

	int ch = getchar();			//用int变量接收getchar得到的字符，并以ACSII码值的方式储存
	printf("%c\n", ch);			//将ch打印成ASCII码值所对应的字符
	putchar(ch);				//将ch打印成ASCII码值所对应的字符

	int ch1 = 0;
	while ((ch1 = getchar()) != -1)
	{
		putchar(ch1);
	}

	//举个例子
	//假设密码是一个字符串
	char password[20] = { 0 };
	printf("请输入密码");
	scanf("%s", password);
	int ch3 = 0;
	while ((ch3=getchar())!='\n')
	{
		continue;
	}
	printf("请确认密码（Y/N）:>");
	int ret = getchar();
	if ('Y' == ret)
		printf("YES\n");
	else
		printf("N\n");

	return 0;
}