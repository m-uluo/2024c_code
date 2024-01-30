#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	do
	{
		printf("%d ", i);
		i++;
	} while (i < 10);
	printf("\n");

	//打印阶乘
	int i1 = 0;
	scanf("%d", &i1);
	int ret = 1;
	for (int i = 1; i <= i1; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);

	//打印阶乘之和
	int i2 = 0;
	scanf("%d", &i2);
	int sum = 0;
	int ret1 = 1;
	for (int i = 1; i <= i2; i++) {
		ret1 = 1;
		for (int j = 1; j <= i; j++)
		{
			ret1 *= j;
		}
		sum += ret1;
	}
	printf("%d\n", sum);

	//打印阶乘之和2
	int i3 = 0;
	scanf("%d", &i3);
	int ret2 = 1;
	int sum2 = 0;
	for (int i = 1; i <= i3; i++)
	{
		ret2 *= i;
		sum2 += ret2;
	}
	printf("%d\n", sum2);

	//二分查找
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 8;
	int first = 0;
	int last = sizeof(arr) / sizeof(arr[0])-1;
	int n = (first + last) / 2;
	while (k != arr[n]&&first!=last)
	{
		if (k < arr[n])
		{
			last = n-1;
		}
		else
		{
			first = n+1;
		}
		n = (first + last) / 2;
	}
	if (k == arr[n])
	{
		printf("%d\n", n);
	}
	else
	{
		printf("找不到");
	}

	//二分查找2
	int ii = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}

	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	int n1 = 0;
	while (n1 <= (strlen(arr1)-1) / 2)		//字符串用sizeof结尾会多算一个\0，所以此处用strlen
	{
		arr2[n1] = arr1[n1];
		arr2[strlen(arr1)-1 - n1] = arr1[strlen(arr1)-1 - n1];
		printf("%s\n", arr2);
		Sleep(1000);						//延后1000毫秒
		system("cls");						//system是一个库函数，可以执行系统命令，清空屏幕
		n1++;
	}
	printf("%s\n", arr2);

	//模拟用户登录，最多输错三次
	//比较两个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
	//如果返回值是0，表示2个字符串相等
	int i4 = 0;
	char password[20] = { 0 };
	printf("请输入密码\n");
	for (i3 = 0; i4 < 3; i4++)
	{
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		printf("输入错误\n");
	}
	if (i4 >= 3)
	{
		printf("输入三次，登陆失败");
	}

again:						//标签
	printf("hehe\n");
	printf("haha\n");
	goto again;				//跳转到again的地方

	char input[20] = { 0 };
	system("shutdown -s -t 60");
again1:
	printf("请注意，你的电脑在60秒后关机，如果输入：我是猪。就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again1;
	}

	return 0;
}