#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(Contact* con)
{
	memset(con->data, 0, sizeof(con->data));
	con->count = 0;
}

void AddContact(Contact* con)
{
	assert(con);
	if (con->count < MAX)
	{
		printf("请输入名字:>");
		scanf("%s", (con->data[con->count]).name);
		printf("请输入年龄:>");
		scanf("%s", &(con->data[con->count]).age);
		printf("请输入性别:>");
		scanf("%s", (con->data[con->count]).sex);
		printf("请输入电话:>");
		scanf("%s", (con->data[con->count]).tele);
		printf("请输入地址:>");
		scanf("%s", (con->data[con->count]).addr);
		printf("增加成功\n");
		(con->count)++;
	}
	else
	{
		printf("数据已满，不能增加\n");
	}
}

void ShowContact(const Contact* con)
{
	assert(con);
	printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\n","名字","年龄","性别","电话","地址");
	for (int i = 0; i < con->count; i++)
	{
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n", con->data[i].name, 
												con->data[i].age,
												con->data[i].sex, 
												con->data[i].tele, 
												con->data[i].addr);
	}
}

void DelContact(Contact* con)
{
	assert(con);
	if (con->count == 0)
	{
		printf("没有数据\n");
		return;
	}
	printf("请输入要删除人的名字:>");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	//查找
	int num=FindByName(con,name);
	if (num == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//删除
	for (int i = num; i < con->count-1; i++)
	{
		con->data[i] = con->data[i + 1];
	}
	con->count--;
	printf("删除成功\n");
}

static int FindByName(const Contact* con, char name[])
{
	assert(con);
	for (int i = 0; i < con->count; i++)
	{
		if (strcmp(con->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}