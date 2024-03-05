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
		printf("����������:>");
		scanf("%s", (con->data[con->count]).name);
		printf("����������:>");
		scanf("%s", &(con->data[con->count]).age);
		printf("�������Ա�:>");
		scanf("%s", (con->data[con->count]).sex);
		printf("������绰:>");
		scanf("%s", (con->data[con->count]).tele);
		printf("�������ַ:>");
		scanf("%s", (con->data[con->count]).addr);
		printf("���ӳɹ�\n");
		(con->count)++;
	}
	else
	{
		printf("������������������\n");
	}
}

void ShowContact(const Contact* con)
{
	assert(con);
	printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\n","����","����","�Ա�","�绰","��ַ");
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
		printf("û������\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	//����
	int num=FindByName(con,name);
	if (num == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//ɾ��
	for (int i = num; i < con->count-1; i++)
	{
		con->data[i] = con->data[i + 1];
	}
	con->count--;
	printf("ɾ���ɹ�\n");
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