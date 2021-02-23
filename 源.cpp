#include<stdio.h>

void a();//声明abc函数
void b();
void c();

int count = 0;//这个count为全局变量

void a()
{
	count++;
}

void b()
{
	count++;
}

void c()
{
	count++;
}

int main()
{
	a();
	b();
	c();

	printf("小何今天被抱了%d次!",count);

	return 0;
}


