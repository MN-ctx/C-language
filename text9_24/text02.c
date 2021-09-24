//指针详解 - 指针函数数组
//实现简易计算器（text03里面是指针函数版本）

#include<stdio.h>

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
	return x*y;
}

int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int (*abc[4])(int,int) = { Add,Sub,Mul,Div };//函数指针的数组
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", (*abc[i])(2,3));
		printf("%d\n", abc[i](2, 3));
	}
	return 0;
}