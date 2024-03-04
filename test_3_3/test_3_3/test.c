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
////匿名结构体类型
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
//#pragma pack(4)		//修改回默认对齐数
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
//	print1(s);		//传值调用
//	print2(&s);		//传址调用
//	return 0;
//}

//struct A			//位段是可以用来节省空间的
//{
//	int a : 2;		//数字表示所占用几个比特位
//	int b : 5;
//	int c : 20;
//};

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;		//数字不能超过类型本身的大小
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;		//存储结果是620304
	return 0;
}