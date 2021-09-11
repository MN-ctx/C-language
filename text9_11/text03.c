//练习 - 求一个整数存储在内存中二进制中1的个数

#include<stdio.h>

////方法一：
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			j++;
//	}
//	printf("%d\n", j);
//	return 0;
//}

//方法二：
int count(int n)
{
	int a = 0;
	while (n)
	{
		n = n&(n - 1);
		a++;
	}
	return a;
}

int main()
{
	int n = 0;
	scanf("%d", n);
	int abc = count(n);
	printf("%d\n", abc);
	return 0;
}