#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

size_t my_strlen(const char* ch)
{
	assert(ch);
	int i = 0;
	size_t sz = 0;
	while (ch[i] != 0)
	{
		i++;
		sz++;
	}
	return sz;
}

char*  my_strcpy(char* d1, const char* s1)
{
	assert(d1&&s1);
	char* ret = d1;
	while (*d1++ = *s1++)
	{
		;
	}
	return ret;
}

char* my_strcat(char* d1, const char* s1)
{
	assert(d1 && s1);
	char* ret = d1;
	while (*d1++);
	while (*d1++ = *s1++);
	return ret;
}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (1)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
			return (*str1) - (*str2);
		
	}
}

char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*s1 != 0&&*s2!=0)
	{
		if (*s1 == *s2)
		{
			s1++; s2++;
		}
		else
		{
			p++;
			s1 = p;
			s2 = str2;
		}
	}
	if (*p == 0)
		return NULL;
	else
		return p;
}

//memcpy负责拷贝两块独立空间中的数据
//重叠内存的拷贝，使用memmove
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	for (int i = 0; i < num; i++)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	//char arr[] = "abcdef";		//abcdef\0
	//size_t len = my_strlen(arr);
	//printf("%d\n", len);

	//char name[20] = { 0 };
	//strcpy(name, "zhangsan");
	////name = "zhangsan";	//err,name数组名是地址，地址是一个常量值，不能被赋值

	//char* p = "abcdef";
	//char arr[] = "bit";
	//strcpy(p, arr);	//目标区域不可修改

	/*char arr1[20] = "zhangsan";
	char arr2[] = "zhangsanfeng";*/

	/*if (arr1 == arr2)
	{
		printf("==\n");
	}
	else
	{
		printf("!=\n");
	}*/

	/*int ret = my_strcmp(arr1, arr2);
	if (ret < 0)
	{
		printf("<\n");
	}
	else if (ret == 0)
	{
		printf(" == \n");
	}*/

	/*char email[] = "zzz@zzzz.comzzz";
	char substr[] = "com";
	char* ret = my_strstr(email, substr);
	if (ret == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n",ret);
	}*/

	////errno-C语言设置的一个全局的错误码存放的变量
	//FILE* pf = fopen("text.txt", "r");		//r表示只读
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//}

	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}