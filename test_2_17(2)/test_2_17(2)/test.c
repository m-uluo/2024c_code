#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Peo
//{
//	char name[20];		//��Ա����
//	char tele[12];
//	char sex[5];
//	int high;
//};

struct Peo
{
	char name[20];		//��Ա����
	char tele[12];
	char sex[7];
	int high;
}p2, p3;		//��ʹ��struct Peo�ṹ���ʹ�������2������

struct Peo p4, p5;

struct St
{
	struct Peo p;		//�����ṹ��
	int num;
	float f;
};

void print1(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
}

int main()
{
	struct Peo p1 = { "����" , "11111111111" , "����" , 180 };    //����һ���ֲ�������ͬʱ��ʼ��
	struct St s = { {"lisi","11111111111","��",175},100,100.3f };
	printf("%s %s %s %d \n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
	print1(&p1);
	return 0;
}