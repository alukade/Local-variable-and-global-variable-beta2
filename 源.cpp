#include<stdio.h>

void a();//����abc����
void b();
void c();

int count = 0;//���countΪȫ�ֱ���

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

	printf("С�ν��챻����%d��!",count);

	return 0;
}


