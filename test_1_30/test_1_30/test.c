#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	do
	{
		printf("%d ", i);
		i++;
	} while (i < 10);
	printf("\n");

	//��ӡ�׳�
	int i1 = 0;
	scanf("%d", &i1);
	int ret = 1;
	for (int i = 1; i <= i1; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);

	//��ӡ�׳�֮��
	int i2 = 0;
	scanf("%d", &i2);
	int sum = 0;
	int ret1 = 1;
	for (int i = 1; i <= i2; i++) {
		ret1 = 1;
		for (int j = 1; j <= i; j++)
		{
			ret1 *= j;
		}
		sum += ret1;
	}
	printf("%d\n", sum);

	//��ӡ�׳�֮��2
	int i3 = 0;
	scanf("%d", &i3);
	int ret2 = 1;
	int sum2 = 0;
	for (int i = 1; i <= i3; i++)
	{
		ret2 *= i;
		sum2 += ret2;
	}
	printf("%d\n", sum2);

	//���ֲ���
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 8;
	int first = 0;
	int last = sizeof(arr) / sizeof(arr[0])-1;
	int n = (first + last) / 2;
	while (k != arr[n]&&first!=last)
	{
		if (k < arr[n])
		{
			last = n-1;
		}
		else
		{
			first = n+1;
		}
		n = (first + last) / 2;
	}
	if (k == arr[n])
	{
		printf("%d\n", n);
	}
	else
	{
		printf("�Ҳ���");
	}

	//���ֲ���2
	int ii = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}

	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	int n1 = 0;
	while (n1 <= (strlen(arr1)-1) / 2)		//�ַ�����sizeof��β�����һ��\0�����Դ˴���strlen
	{
		arr2[n1] = arr1[n1];
		arr2[strlen(arr1)-1 - n1] = arr1[strlen(arr1)-1 - n1];
		printf("%s\n", arr2);
		Sleep(1000);						//�Ӻ�1000����
		system("cls");						//system��һ���⺯��������ִ��ϵͳ��������Ļ
		n1++;
	}
	printf("%s\n", arr2);

	//ģ���û���¼������������
	//�Ƚ������ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
	//�������ֵ��0����ʾ2���ַ������
	int i4 = 0;
	char password[20] = { 0 };
	printf("����������\n");
	for (i3 = 0; i4 < 3; i4++)
	{
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		printf("�������\n");
	}
	if (i4 >= 3)
	{
		printf("�������Σ���½ʧ��");
	}

again:						//��ǩ
	printf("hehe\n");
	printf("haha\n");
	goto again;				//��ת��again�ĵط�

	char input[20] = { 0 };
	system("shutdown -s -t 60");
again1:
	printf("��ע�⣬��ĵ�����60���ػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again1;
	}

	return 0;
}