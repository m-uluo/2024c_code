#define _CRT_SECURE_NO_WARNINGS 1   //放在代码第一行
#include <stdio.h>   //引用头文件

int a = 100;    //大括号外部定义为全局变量
int main()
{                             //main函数是程序的入口，一个工程中有且仅有一个
    printf("hello bit\n");    //输出hello bit   printf-库函数-在屏幕上打印信息，引用头文件stdio.h
    printf("hehe\n");         //输出hehe

    char ch = 'a';           //字符类型
    int age = 20;            //整型
    short num = 10;          //短整型
    float weight = 46.3f;     //单精度浮点型
    double d = 11.1;         //双精度浮点型

    printf("%d\n", 100);            //d打印整型
    printf("%d\n", sizeof(char));   //打印char所占空间大小

    int age1 = 20;
    age1 = age1 + 1;
    age1++;
    double weight1 = 45.6;
    printf("%d\n", age1);            //d打印整型
    printf("%lf\n", weight1);        //f打印单精度浮点型，lf打印双精度浮点型

    int b = 100;    //大括号内部定义为局部变量

    int num1 = 0;
    int num2 = 0;
    int sum = num1 + num2;
    scanf("%d %d", &num1, &num2);   //scanf是输入函数
    printf("%d\n", sum);
    return 0;
}