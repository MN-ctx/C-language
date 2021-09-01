//打印素数

#include<stdio.h>
int main()
{
	//判断i是否为素数
	//只能被1和他本身整除的数
	//1.试除法
	//产生2 -> i-1个数字
	int i = 0;
	int max = 0;
	for (int i = 1; i <= 200; i++)
	//算法优化：偶数不能是素数，所有上串代码中可以使 i+=2，跳过偶数
	{
		int j = 0;
		for (j = 2; j < i;j++)
		//算法优化：把j < i 改变j < sqrt(i)
		//sqrt：用于开平方的数学库函数
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		//算法优化：把j < i 改变j < sqrt(i)后，此处j > sqrt(i)
		{
			max++;
			printf("%d ", i);
		}
	}
	printf("\nmax = %d\n", max);
	return 0;
}
