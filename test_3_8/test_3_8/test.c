#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

typedef struct S
{
	char name[20];
	int age;
	float weight;
}S;

int main()
{
	////���ļ�
	//FILE* pf = fopen("test.txt", "r");
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 1;
	//}
	////���ļ�
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;

	/*FILE* pFile = fopen("myfile.txt", "w");
	if (pFile != NULL)
	{
		fputs("fopen example", pFile);
		fclose(pFile);
	}*/

	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 1;
	//}
	////д�ļ�
	//for (char i = 'a'; i <= 'z'; i++)
	//{
	//	fputc(i, pf);
	//}
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;

	//FILE* pf = fopen("test.txt", "r");
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 1;
	//}
	////���ļ�
	///*int ch = fgetc(pf);
	//printf("%c\n", ch);
	//ch = fgetc(pf);
	//printf("%c\n", ch);
	//ch = fgetc(pf);
	//printf("%c\n", ch);
	//ch = fgetc(pf);
	//printf("%c\n", ch);*/
	//int ch = 0;
	//while ((ch = fgetc(pf)) != EOF)
	//{
	//	printf("%c ", ch);
	//}
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;

	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	//printf("%s\n", strerror(errno));
	//	perror("fopen");
	//	return 1;
	//}
	////д�ļ�
	//fputs("hello bit", pf);
	////���ļ�
	//char arr[20];
	//fgets(arr, 20, pf);
	//printf("%s\n", arr);
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;

	////���ļ�
	//S s = { "zhangsan",20,50.2f };
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//fprintf(pf, "%s %d %f", s.name, s.age, s.weight);
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;

	////���ļ�
	//S s = { 0 };
	//FILE* pf = fopen("test.txt", "r");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.weight));
	////printf("%s %d %f", s.name, s.age, s.weight);
	//fprintf(stdout, "%s %d %f", s.name, s.age, s.weight);		//�������Ļ��
	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;

	//S s = { "zhangsan",20,50.5f };
	//FILE* pf = fopen("test.txt", "wb");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////������д��
	//fwrite(&s, sizeof(s), 1, pf);
	//fclose(pf);
	//pf = NULL;

	//S ss = { 0 };
	//pf = fopen("test.txt", "rb");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////������д��
	//fread(&ss, sizeof(ss), 1, pf);
	//printf("%s %d %f", ss.name, ss.age, ss.weight);
	//fclose(pf);
	//pf = NULL;

	//S s = { "zhangsan",20,50.5f };
	//S ss = { 0 };
	//char buf[100] = { 0 };
	////��s�еĸ�ʽ������ת�����ַ���
	//sprintf(buf, "%s %d %f", s.name, s.age, s.weight);
	//printf("%s\n", buf);
	////���ַ���buf�л�ȡһ����ʽ������
	//sscanf(buf, "%s %d %f", ss.name, &(ss.age), &(ss.weight));
	//printf("%s %d %f", ss.name, ss.age, ss.weight);

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fseek(pf, 2, SEEK_SET);		//ȡ�ļ���ͷƫ��2��λ��
	int ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));	//�����ļ���ǰ���뿪ͷ��ƫ��λ��

	fseek(pf, 2, SEEK_CUR);		//ȡ�ļ���ǰλ��ƫ��2��λ��
	ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));

	rewind(pf);					//ָ��ص���ʼλ��
	fseek(pf, 2, SEEK_SET);		//ȡ�ļ���ͷƫ��2��λ��
	ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}