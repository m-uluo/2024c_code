#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

char* my_strcpy(char* arr1, const char* arr2)  //常对象不能修改，防止下面*arr1++ = *arr2++写反
{
	char* ret = arr1;
	assert(arr2 != NULL);    //传入空指针会报错
	assert(arr1 != NULL);
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}

int main()
{
	/*int a = 100;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int b = 9;

	int n = 0;
	scanf("%d", &n);
	int ret = 1;
	int sum = 0;
	for (int j = 1; j <= n; j++)
	{
		ret = 1;
		for (int i = 1; i <= j; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d\n", sum);*/

	/*int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 15; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}*/

	char arr1[20] = "XXXXXXXXXXXXXXXXX";
	char arr2[] = "hello bit";
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}