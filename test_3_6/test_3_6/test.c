#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

//void test()
//{
//	int* p = (int*)malloc(INT_MAX * 4);
//	*p = 20;
//	free(p);
//}

typedef struct st_type
{
	int i;
	int a[0];	//���������Ա
}type_a;

int main()
{
	//int arr[10] = { 0 };
	//int* p = (int*)malloc(sizeof(int[10]));		//��̬����
	//if (p == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 1;
	//}
	////ʹ��
	//for (int i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//	printf("%d\n", *(p + i));
	//}
	////��ʹû��free
	////������˵�ڴ�ռ�Ͳ�������
	////�������˳���ʱ��ϵͳ���Զ������ڴ�ռ�
	//free(p);
	////tea ����������ϵͳ������p������ڴ��ַû�б䣬����Ұָ�룬���������󸳳ɿ�����
	//p = NULL;

	//int* p = (int*)calloc(10, sizeof(int));
	//if (p == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 1;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", *(p + i));
	//}
	////free(p);
	////����
	//for (int i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	////����
	//int* ptr = (int*)realloc(p, 80);
	//if (ptr != NULL)
	//{
	//	p = ptr;
	//}
	////ʹ��
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d", *(p + i));
	//}
	//free(p);
	//p = NULL;

	/*int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	for (int i = 0; i <= 10; i++)
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;*/

	/*int a = 10;
	int* p = &a;
	free(p);
	p = NULL;*/

	/*int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	for (int i = 0; i < 10; i++)
	{
		*p = i;
		p++;
	}
	free(p);
	p = NULL;*/

	/*int* p = (int*)malloc(40);
	free(p);
	free(p);*/

	printf("%d\n", sizeof(type_a));

	struct st_type* ps=(struct st_type*)malloc(sizeof(struct st_type) + 40);
	ps->i = 100;
	for (int j = 0; j < 100; j++)
	{
		ps->a[j] = j;
	}
	for (int j = 0; j < 100; j++)
	{
		printf("%d\n", ps->a[j]);
	}
	struct st_type* ptr= (struct st_type*)realloc(ps,sizeof(ps) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
		ptr = NULL;
	}
	free(ps);
	ps = NULL;
	return 0;
}