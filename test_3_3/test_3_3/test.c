#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node,* linklist;
//
////�����ṹ������
//struct
//{
//	int a;
//	int b;
//	int c;
//}s1;

//struct score
//{
//	int n;
//	char ch;
//};
//
//typedef struct Stu
//{
//	char name[20];	//0-1
//	int age;		//4-4
//	struct score s;	//8-16
//}Stu;
//
//int main()
//{
//	Stu s = { "zhangsan",20,{100,'q'}};
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#pragma pack(4)
//struct S
//{
//	int i;		//4 4 4 0~3
//	double d;	//8 4 4 4~11
//};
//#pragma pack(4)		//�޸Ļ�Ĭ�϶�����
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

//struct S
//{
//	int data[100];
//	int num;
//}s = { {1,2,3},10 };
//
//void print1(struct S ss)
//{
//	printf("%d\n", ss.num);
//}
//
//void print1(struct S* ss)
//{
//	printf("%d\n", ss->num);
//}
//
//int main()
//{
//	print1(s);		//��ֵ����
//	print2(&s);		//��ַ����
//	return 0;
//}

//struct A			//λ���ǿ���������ʡ�ռ��
//{
//	int a : 2;		//���ֱ�ʾ��ռ�ü�������λ
//	int b : 5;
//	int c : 20;
//};

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;		//���ֲ��ܳ������ͱ���Ĵ�С
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;		//�洢�����620304
	return 0;
}