//函数-递归与迭代,求n的阶乘

#include<stdio.h>

////方法一：
//int add(int n)
//{
//	int i = 0;
//	int a = 1;
//	for (i = 1; i <= n; i++)
//	{
//		a = a*i;
//	}
//	return a;
//}

//方法二：函数递归
int add(int n)
{
	if (n <= 1)
		return 0;
	else
		return n*add(n - 1);
}

int main()
{
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	sum = add(n);
	printf("%d\n", sum);
	return 0;
}