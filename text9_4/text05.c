//函数-打印100-200之间的素数

#include<stdio.h>
#include<math.h>

int aaa(int pi)
{
		int j = 0;
		for (int j = 2; j <= sqrt(pi); j++)
		{
			if (pi % j == 0)
				return 0;
		}
		return 1;
}

int sum = 0;

int main()
{
	//打印100-200之间的素数
	int i = 0;
	for (int i = 100; i < 200; i++)
	{
		if (aaa(i) == 1)
		{
			printf("%d\n", i);
			sum++;
		}
	}
	printf("sum=%d\n", sum);
	return 0;
}