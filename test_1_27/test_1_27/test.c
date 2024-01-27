#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define NUM 100		//定义一个标识符常量
#define ADD(x,y) ((x)+(y))	//定义一个宏，宏的定义是有参数的

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

void test()
{
	static int a = 1;		//static修饰局部变量的时候，局部变量出了作用域，不销毁。
	a++;					//本质上，static修饰局部变量的时候，改变了变量的存储位置。
	printf("%d\n", a);		//影响了变量的生命周期，和程序的生命周期一样。
}

extern int Add(int x, int y);

struct Stu				//类型，不占空间，在创建对象的时候才会占用空间。
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

int main()
{
	typedef unsigned int uint;
	unsigned int num0 = 10;
	uint num1 = 10;

	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}

	/*extern int g_val;
	printf("%d\n", g_val);*/	//static修饰全局变量的时候，这个全局变量的外部链接属性就变成了内部链接属性。
								//其他源文件（.c）就不能在使用到这个全局变量了。同时也改变了变量的存储位置。
	int a = 10;
	int b = 20;
	int z = Add(a, b);
	printf("%d\n", z);

	printf("%d\n", NUM);
	int n = NUM;
	printf("%d\n", n);
	int arr[NUM] = { 0 };

	int c = ADD(a, b);
	printf("%d\n", c);

	int num2 = 10;			//向内存申请4个字节，存储10
	&num2;					//取地址操作符
	printf("%p\n", &num2);
	int* p = &num2;			//p就是指针变量，*说明p是指针变量，int说明p指向的对象是int类型的
	*p = 20;				//解引用操作符，意思就是通过p中存放的地址，找到p所指的对象，*p就是p指向的对象
	printf("%d\n", num2);
	//不管是什么类型的指针，创建的时候都是在创建指针变量
	//指针变量是用来存放地址的
	//指针变量的大小取决于一个地址存放的时候需要多大的空间
	//32位机器上的地址：32bit位 - 4字节，所以指针变量的大小是4个字节
	//64位机器上的地址：64bit位 - 8字节，所以指针变量的大小是8个字节
	int* p1, p2, p3;	//此时p1是int指针，p2、p3都是int类型。要想三个都是指针，则写成int *p1, *p2, *p3;

	struct Stu s = { "zhangsan",20,"nan","10010001000" };		//创建对象并且初始化
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);		//打印对象成员   结构体对象.成员名
	return 0;
}

void print(struct Stu* ps)		//输入的ps为指针变量，是s的地址
{
	printf("%s %d %s %s", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);		//因为ps是指针，先*ps解引用找到s，再引用成员名
	printf("%s %d %s %s", ps->name, ps->age, ps->sex, ps->tele);				//指针变量->成员名，直接找到成员
}
