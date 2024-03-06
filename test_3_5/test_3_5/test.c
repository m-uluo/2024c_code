#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

enum Day	//ÐÇÆÚ
{
	Mon,	//0
	Tues,	//1
	Wed,	//2
	Thur,	//3
	Fri,	//4
	Sat,	//5
	Sun		//6
};
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
enum Color
{
	RED,
	GREEN,
	BLUE
};


union Un
{
	int a;
	char c;
};
//int main()
//{
//	enum Day d = Mon;
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	printf("%d\n", Fri);
//	printf("%d\n", Sat);
//	printf("%d\n", Sun);
//	return 0;
//}

//int main()
//{
//	union Un u;
//	/*printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));*/
//
//	printf("%d\n", &(u.a));
//	printf("%d\n", &(u.c));
//
//	u.a = 0x11223344;
//	u.c = 0x55;
//	printf("%x\n", u.a);
//	printf("%x\n", u.c);
//
//	return 0;
//}

int check_sys()
{
	union
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
		printf("Ð¡¶Ë\n");
	else
		printf("´ó¶Ë\n");
	return 0;
}

