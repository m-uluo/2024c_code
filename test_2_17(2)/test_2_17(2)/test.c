#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Peo
//{
//	char name[20];		//成员变量
//	char tele[12];
//	char sex[5];
//	int high;
//};

struct Peo
{
	char name[20];		//成员变量
	char tele[12];
	char sex[7];
	int high;
}p2, p3;		//是使用struct Peo结构类型创建出的2个变量

struct Peo p4, p5;

struct St
{
	struct Peo p;		//其他结构体
	int num;
	float f;
};

void print1(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
}

int main()
{
	struct Peo p1 = { "张三" , "11111111111" , "保密" , 180 };    //创建一个局部变量的同时初始化
	struct St s = { {"lisi","11111111111","男",175},100,100.3f };
	printf("%s %s %s %d \n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
	print1(&p1);
	return 0;
}