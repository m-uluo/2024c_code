#define _CRT_SECURE_NO_WARNINGS 1   //���ڴ����һ��
#include <stdio.h>   //����ͷ�ļ�

int a = 100;    //�������ⲿ����Ϊȫ�ֱ���
int main()
{                             //main�����ǳ������ڣ�һ�����������ҽ���һ��
    printf("hello bit\n");    //���hello bit   printf-�⺯��-����Ļ�ϴ�ӡ��Ϣ������ͷ�ļ�stdio.h
    printf("hehe\n");         //���hehe

    char ch = 'a';           //�ַ�����
    int age = 20;            //����
    short num = 10;          //������
    float weight = 46.3f;     //�����ȸ�����
    double d = 11.1;         //˫���ȸ�����

    printf("%d\n", 100);            //d��ӡ����
    printf("%d\n", sizeof(char));   //��ӡchar��ռ�ռ��С

    int age1 = 20;
    age1 = age1 + 1;
    age1++;
    double weight1 = 45.6;
    printf("%d\n", age1);            //d��ӡ����
    printf("%lf\n", weight1);        //f��ӡ�����ȸ����ͣ�lf��ӡ˫���ȸ�����

    int b = 100;    //�������ڲ�����Ϊ�ֲ�����

    int num1 = 0;
    int num2 = 0;
    int sum = num1 + num2;
    scanf("%d %d", &num1, &num2);   //scanf�����뺯��
    printf("%d\n", sum);
    return 0;
}