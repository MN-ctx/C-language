//在屏幕上输入9*9乘法口诀表

#include<stdio.h>

int main()
{
	int i = 0;
	int f = 0;
	for (int i = 1; i <= 9 ; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, j*i);	//%2d->右对齐   %-2d->左对齐
		}
		printf("\n");
	}
	return 0;
}