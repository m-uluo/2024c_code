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
	////���Ʋ������ƶ����Ƕ�����λ
	//int num2 = num1 >> 1;
	//printf("%d\n", num2);

	////& ��������λ��
	////| ��������λ��
	////^ ��������λ���
	//int a1 = 3;
	//int b1 = -5;
	//int c1 = a1 & b1;
	////00000000000000000000000000000011 - 3�Ĳ���
	////10000000000000000000000000000101 - -5��ԭ��
	////11111111111111111111111111111010 - -5�ķ���
	////11111111111111111111111111111011 - -5�Ĳ���
	////00000000000000000000000000000011 - ��λ��
	//int c2 = a1 | b1;
	////11111111111111111111111111111011 - ��λ����
	////10000000000000000000000000000101 - -5��ԭ��
	//int c3 = a1 ^ b1;
	////11111111111111111111111111111000 - ��λ�����
	////10000000000000000000000000001000 - ��λ���ԭ��

	////���ֽ�����������ʱ����
	////����һ
	//int a = 3;
	//int b = 5;
	//printf("a=%d b=%d\n", a, b);
	///*a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("a=%d b=%d\n", a, b);*/

	////������
	////���֧�ֽ�����
	//a = a ^ b;		//a=3^5
	//b = a ^ b;		//b=3^5^5 -> b=3
	//a = a ^ b;		//a=3^5^3 -> a=5
	//printf("a=%d b=%d\n", a, b);

	////��һ�������洢���ڴ��еĶ�������1�ĸ���
	////����һ
	//int num = 10;
	//int count = 0;
	//while (num)
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}
	//printf("%d\n", count);

	////������
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

	//int* p = &a;	//p����a��ָ��
	//printf("%p\n", &a);
	//printf("%p\n", p);

	//a &= (~(1 << 4));

	//*p = 20;
	//printf("%d\n", a);

	//int d = a && b;
	//d = a || b;

	//int a = 1;
	//int b = 2;
	//int c = (a > b, a = b + 10, a, b = a + 1);		//��һ�����жϱ��ʽ�����Ϊ0���ڶ�����a=12����������12�����ĸ���b=13

	struct Stu s = {0};
	SetStu(&s);
	PrintStu(s);

	char a2 = 5;
	char b2 = 126;			//�洢��ʱ�����Խضϵķ�ʽ�洢��λ
	char c2 = a2 + b2;		//�����ʱ����չ��4�ֽ��ټ��㣬����Ľ���ٴν׶κ�洢
	printf("%d\n", c2);		

	return 0;
}