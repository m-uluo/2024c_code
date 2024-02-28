#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

void print(int (*pt)(int, int))
{
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	int ret = pt(x, y);
	printf("%d\n", ret);
}

void qsort(void* base,		//你要排序的数据的起始位置
	size_t num,				//待排序的数据元素的个数
	size_t width,			//待排序的数据元素的大小（单位是字节）
	int(*cmp)(const void* e1, const void* e2)	//函数指针-比较函数
);

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_struct_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_struct_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test2()
{
	struct Stu s[] = { {"zhangsan",20},{"lisi",15},{"wangwu",25} };
	qsort(s, 3, sizeof(s[0]), cmp_struct_name);
	printf("%s %s %s\n", s[0].name, s[1].name, s[2].name);

}

void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void bubble_sort1(void* arr, int sz, int width, int(*cmp)(int e1, int e2))
{
	for(int i=0;i<)
}

int main()
{
	/*print(Add);*/

	//int (*pf)(int, int) = Add;	//pf是函数指针
	//int (*arr[4])(int, int) = { Add,Sub,Mul,Div };	//arr就是函数指针的数组
	//int (*arr[4])(int, int) = { Add,Sub,Mul,Div };
	//int a = 0, b = 0, c = 0;;
	//scanf("%d %d %d", &a, &b, &c);
	//int ret=arr[a-1](b, c);
	//printf("%d\n", ret);

	//int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };	//函数指针数组
	//int (*(*ppfArr)[5])(int, int) = &pfArr;				//指向函数指针数组的指针

	//int a = 10;
	//void* pv = &a;	//void* 是无具体类型的指针，可以接受任意类型的地址
	////void*是无具体类型的指针，所以不能即引用操作，也不能加减整数

	/*int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	qsort(arr, 10, 4, cmp_int);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");*/

	//test2();
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}