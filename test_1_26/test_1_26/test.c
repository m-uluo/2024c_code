#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a0 = 7 / 2;		//ȡ��
	int b0 = 7 % 2;		//ȡģ
	//ȡģ�Ӳ��������˵Ĳ�����ֻ��������
	float c0 = 7 / 2.0;
	printf("%d\n", a0);
	printf("%d\n", b0);
	printf("%.1f\n", c0);		//.1f��ʾ��ӡС�����һλ

	int a = 10;			//��ֵ
	a = a + 3;
	a += 3;

	int a1 = -10;
	int b = -a1;

	//sizeof�ǲ��������ǵ�Ŀ�����������Ǻ���
	int num = 10;
	printf("%d\n", sizeof(num));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof num);		//��������ȥ�����ţ������Ͳ�����
	//printf("%d\n", sizeof int);
	int arr[10] = { 0 };
	printf("%d\n", sizeof arr);		//40���������������Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof arr[0]);

	int num1 = 10;
	int num2 = num1++;				//����++����ʹ�ã���++
	printf("%d\n", num1);
	printf("%d\n", num2);

	int num3 = ++num1;				//ǰ��++����++����ʹ��

	int num4 = (int)3.14;
	printf("%d\n", num4);			//3.14Ĭ����double����

	int num5 = 10;
	if (num5 == 10)
		printf("hehe\n");

	int num6 = 1;
	int num7 = 0;
	if (num6 && num7) printf("right1\n");
	if (num6 || num7) printf("right2\n");

	int num8 = 10;
	int num9 = 20;
	printf("%s\n", num8 > num9 ? "8��" : "9��");

	int x = 10;
	int y = 20;
	int z = 0;
	int w = (z = x - 2, x = y + z, z - 3);
	printf("%d\n", w);

	int arrp[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 4;
	arrp[n] = 30;


	return 0;
}