#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define NUM 100		//����һ����ʶ������
#define ADD(x,y) ((x)+(y))	//����һ���꣬��Ķ������в�����

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

void test()
{
	static int a = 1;		//static���ξֲ�������ʱ�򣬾ֲ��������������򣬲����١�
	a++;					//�����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�á�
	printf("%d\n", a);		//Ӱ���˱������������ڣ��ͳ������������һ����
}

extern int Add(int x, int y);

struct Stu				//���ͣ���ռ�ռ䣬�ڴ��������ʱ��Ż�ռ�ÿռ䡣
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
	printf("%d\n", g_val);*/	//static����ȫ�ֱ�����ʱ�����ȫ�ֱ������ⲿ�������Ծͱ�����ڲ��������ԡ�
								//����Դ�ļ���.c���Ͳ�����ʹ�õ����ȫ�ֱ����ˡ�ͬʱҲ�ı��˱����Ĵ洢λ�á�
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

	int num2 = 10;			//���ڴ�����4���ֽڣ��洢10
	&num2;					//ȡ��ַ������
	printf("%p\n", &num2);
	int* p = &num2;			//p����ָ�������*˵��p��ָ�������int˵��pָ��Ķ�����int���͵�
	*p = 20;				//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ�Ķ���*p����pָ��Ķ���
	printf("%d\n", num2);
	//������ʲô���͵�ָ�룬������ʱ�����ڴ���ָ�����
	//ָ�������������ŵ�ַ��
	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���Ŀռ�
	//32λ�����ϵĵ�ַ��32bitλ - 4�ֽڣ�����ָ������Ĵ�С��4���ֽ�
	//64λ�����ϵĵ�ַ��64bitλ - 8�ֽڣ�����ָ������Ĵ�С��8���ֽ�
	int* p1, p2, p3;	//��ʱp1��intָ�룬p2��p3����int���͡�Ҫ����������ָ�룬��д��int *p1, *p2, *p3;

	struct Stu s = { "zhangsan",20,"nan","10010001000" };		//���������ҳ�ʼ��
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);		//��ӡ�����Ա   �ṹ�����.��Ա��
	return 0;
}

void print(struct Stu* ps)		//�����psΪָ���������s�ĵ�ַ
{
	printf("%s %d %s %s", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);		//��Ϊps��ָ�룬��*ps�������ҵ�s�������ó�Ա��
	printf("%s %d %s %s", ps->name, ps->age, ps->sex, ps->tele);				//ָ�����->��Ա����ֱ���ҵ���Ա
}
