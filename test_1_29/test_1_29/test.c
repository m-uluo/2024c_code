#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 98;
	printf("%c\n", a);
	//ת������ASCII��ֵ
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);

	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i < sz)
	{
		printf("%c", arr[i]);
		i++;
	}
	printf("\n");

	//����һ���˵ĳ������ڣ����������շֱ����
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%4d%2d%2d", &year,&month,&day);
	if (year >= 1990 && year <= 2015)
	{
		if (month >= 1 && month <= 12)
		{
			if (day >= 1 && day <= 30)
			{
				printf("year=%d\n", year);
				printf("month=%02d\n", month);
				printf("date=%02d\n", day);
			}
			else
			{
				printf("�����������");
			}
		}
		else
		{
			printf("�·��������");
		}
	}
	else
	{
		printf("����������");
	}

	int id = 0;
	float c = 0.0f;
	float math = 0.0f;
	float eng = 0.0f;
	//����
	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
	printf("NO.%d is %.2f,%.2f,%.2f", id, c, math, eng);

	for (int i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;			//i����5��ʱ������ѭ���������ӡ5
		printf("%d ", i);
	}
	return 0;
}