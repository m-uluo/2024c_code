#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 10;
	if (a == 3) printf("hehe\n");

	int age = 0;
	//if (age > 18) printf("����\n");
	scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 40)
		printf("׳��\n");
	else if (age >= 40 && age < 60)
		printf("����\n");
	else if (age >= 60 && age < 100)
		printf("����\n");
	else
		printf("������\n");

	int num1 = 0;
	int num2 = 2;
	if (num1 == 1)
	{
		if (num2 == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	}

	//1.�����������������壬�淶��
	//2.�ո� ���� ����

	int num3 = 0;
	scanf("%d", &num3);
	if (num3 % 2 == 1)
		printf("����\n");
	else
		printf("ż��\n");

	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:						//���ͳ������ʽ
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("����7\n");
		break;
	}

	switch (day)
	{
	case 1:						//���ͳ������ʽ
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
		printf("ѡ�����\n");
		break;
	}

	int i = 0;
	while (i < 10)
	{
		if (5 == i) break;		//�������ʱ��ֱ������ѭ��������ӡ5
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

	int ch = getchar();			//��int��������getchar�õ����ַ�������ACSII��ֵ�ķ�ʽ����
	printf("%c\n", ch);			//��ch��ӡ��ASCII��ֵ����Ӧ���ַ�
	putchar(ch);				//��ch��ӡ��ASCII��ֵ����Ӧ���ַ�

	int ch1 = 0;
	while ((ch1 = getchar()) != -1)
	{
		putchar(ch1);
	}

	//�ٸ�����
	//����������һ���ַ���
	char password[20] = { 0 };
	printf("����������");
	scanf("%s", password);
	int ch3 = 0;
	while ((ch3=getchar())!='\n')
	{
		continue;
	}
	printf("��ȷ�����루Y/N��:>");
	int ret = getchar();
	if ('Y' == ret)
		printf("YES\n");
	else
		printf("N\n");

	return 0;
}