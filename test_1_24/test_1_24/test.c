#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	printf("abc\n");
	printf("abc\0def");
	printf("%s\n", "(are you ok \? \? )");		//�����еĻὫ??)�����]��������
	printf("%c\n", '\'');						//��ӡ������
	printf("%c\n", '\"');						//��ӡ˫����
	printf("%s\n", "abc\\0def");				//��ӡ��б��
	printf("%c\n", '\a');						//����
	printf("%s\n", "abc\ndef");					//����
	printf("%s\n", "abc\tdef");					//ˮƽ�Ʊ��
	printf("%c\n", '\130');						//��ʾ1~3���˽��Ƶ�ASCII�����ַ�
	printf("%c\n", '\x30');						//��ʾ2��ʮ�����Ƶ�ASCII�����ַ�
	printf("%d\n", strlen("qwer t"));			//�ո�Ҳռһ������λ

	//ע�� /**/

	printf("�������\n");
	printf("Ҫ�ú�ѧϰ��(1/0)");
	int a = 0;
	scanf("%d", &a);
	if (a == 1)
		printf("��offer\n");
	else
		printf("������\n");

	int line = 0;
	printf("�������\n");
	while (line != 10)				//lineС��10��ʱ�򱣳�ѭ��
	{
		printf("д����\n");
		line++;
	}								//����10��ʱ������ѭ��
	if (line >= 10)
	{
		printf("��offer\n");
	}

	int n1 = 0;
	int n2 = 0;
	//����
	scanf("%d %d", &n1, &n2);
	int sum = Add(n1, n2);
	printf("%d\n", sum);

	int arr[10] = { 1 };		//�������飬���������г�����������д�������������ڳ�����������Ĭ��Ϊ0
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}
int Add(int a, int b)
{
	int sum = a + b;
	return sum;
}