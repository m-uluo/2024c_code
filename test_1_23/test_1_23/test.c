#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX 100
#define STR "abcdef"

int a = 10;
void test()
{
	printf("test-->%d\n", a);
}

enum Color	
{
	//ö�ٳ���
	RED,		//���ܵ�ȡֵ����������ռ䣬���ɸ���
	GREEN,
	BLUE
};

enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	test();
	//int a = 10;
	{
		printf("%d\n", a);	//�ֲ���Χ
	}
	printf("%d\n", a);

	extern int b;	//���������ⲿ�ķ���
	printf("%d\n", b);

	//���泣��
	30;
	3.14;
	'w';
	"abc";

	//const���εĳ�����
	const int num = 3;
	//num = 4;		//�����������޸�
	printf("%d\n", num);

	//#define����ı�ʶ������
	printf("%d\n", MAX);
	int a = MAX;
	printf("%d\n", a);
	printf("%s\n", STR);	//%s��ӡ�ַ���

	//ö�ٳ���
	//��ԭɫ
	enum Color c = RED;		//����ö�ٱ�������ֵRED���ڴ���������ʱ��Ż�����ռ�

	/*char ch= 'a'�ַ�����
	C������û���ַ���*/
	char arr1[] = "abcdef";	//ĩβ��\0���ǽ�����־
	char arr2[] = { 'a','b','c','d','e','f' };
	char arr3[] = { 'a','b','c','d','e','f','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);

	int len = strlen(arr2);		//���ַ������ȵ�һ��������string length  ͷ�ļ���string.h
	printf("%d\n", len);

	return 0;
}