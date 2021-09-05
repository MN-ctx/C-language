//函数递归-斐波那契数列 1 1 2 3 5 8 13 21 34 55......

#include<stdio.h>

////方法一：
////递归求斐波那契数列
//int c = 0;
//int add(int n)
//{
//	if (n == 3) //测试第三个斐波那契数的计算次数
//	{
//		c++;
//	}
//	if (n<=2)
//		return 1;
//	else
//		return add(n - 2) + add(n - 1);
//}

//方法二：用循环，速度快，效率高
//
int add(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	//1 1 2 3 5 8 13 21 34 55......
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}return c;
}

int main()
{
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	sum = add(n);
	printf("sum = %d\n", sum);
	//printf("第三个斐波那契数的计算次数为：c=%d\n", c); //结论：递归求的效率低，速度慢
	return 0;
}
