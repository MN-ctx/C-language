//����һ���򵥵�������Ӻ���

#include<stdio.h>

ADD(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int sum = ADD(a, b);
	printf("%d\n", sum);
	return 0;
}