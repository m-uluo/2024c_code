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
	////打开文件
	//FILE* pf = fopen("test.txt", "r");
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 1;
	//}
	////读文件
	////关闭文件
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
	////写文件
	//for (char i = 'a'; i <= 'z'; i++)
	//{
	//	fputc(i, pf);
	//}
	////关闭文件
	//fclose(pf);
	//pf = NULL;

	//FILE* pf = fopen("test.txt", "r");
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 1;
	//}
	////读文件
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
	////关闭文件
	//fclose(pf);
	//pf = NULL;

	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	//printf("%s\n", strerror(errno));
	//	perror("fopen");
	//	return 1;
	//}
	////写文件
	//fputs("hello bit", pf);
	////读文件
	//char arr[20];
	//fgets(arr, 20, pf);
	//printf("%s\n", arr);
	////关闭文件
	//fclose(pf);
	//pf = NULL;

	////打开文件
	//S s = { "zhangsan",20,50.2f };
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//fprintf(pf, "%s %d %f", s.name, s.age, s.weight);
	////关闭文件
	//fclose(pf);
	//pf = NULL;

	////打开文件
	//S s = { 0 };
	//FILE* pf = fopen("test.txt", "r");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.weight));
	////printf("%s %d %f", s.name, s.age, s.weight);
	//fprintf(stdout, "%s %d %f", s.name, s.age, s.weight);		//输出到屏幕上
	////关闭文件
	//fclose(pf);
	//pf = NULL;

	//S s = { "zhangsan",20,50.5f };
	//FILE* pf = fopen("test.txt", "wb");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////二进制写入
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
	////二进制写入
	//fread(&ss, sizeof(ss), 1, pf);
	//printf("%s %d %f", ss.name, ss.age, ss.weight);
	//fclose(pf);
	//pf = NULL;

	//S s = { "zhangsan",20,50.5f };
	//S ss = { 0 };
	//char buf[100] = { 0 };
	////把s中的格式化数据转换成字符串
	//sprintf(buf, "%s %d %f", s.name, s.age, s.weight);
	//printf("%s\n", buf);
	////从字符串buf中获取一个格式化数据
	//sscanf(buf, "%s %d %f", ss.name, &(ss.age), &(ss.weight));
	//printf("%s %d %f", ss.name, ss.age, ss.weight);

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fseek(pf, 2, SEEK_SET);		//取文件开头偏移2的位置
	int ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));	//计算文件当前距离开头的偏移位置

	fseek(pf, 2, SEEK_CUR);		//取文件当前位置偏移2的位置
	ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));

	rewind(pf);					//指针回到起始位置
	fseek(pf, 2, SEEK_SET);		//取文件开头偏移2的位置
	ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}