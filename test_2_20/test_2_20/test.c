#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void reverse(char* arr)
{
	int right = 0;
	while (arr[right])
	{
		right++;
	}
	right--;
	int left = 0;
	char temp = NULL;
	while (left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

void reverse1(char* arr)
{
	int num = 0;
	int left = 0;
	int right = 0;
	char temp = NULL;
	while (arr[num] != 0)
	{
		while (arr[right] != ' '&&arr[right]!=0)
		{
			right++;
		}
		right--;
		num = right + 1;
		while (left < right)
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
		left = right = num+1;
	}
}

int main()
{
	/*int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1 - i; j > 0; j--)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (int k = 2*(n-i)-3; k > 0; k--)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//int i = 20;
	//int n = 2 * i - 1;
	//printf("%d\n", n);

	char arr[101] = {0};
	gets(arr);
	reverse(arr);
	reverse1(arr);
	printf("%s\n", arr);
	return 0;
}
