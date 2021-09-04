//函数-判断是否为闰年

#include<stdio.h>

//int main()
//{
//	//判断是否为闰年
//	//1.是4的倍数
//	//2.400的倍数
//	int i = 0;
//	int sum = 0;
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ",i);
//			sum++;
//		}
//		/*else
//		{
//			printf("%d\n不是闰年", i);
//		}*/
//	}
//	printf("\nsum=%d\n", sum);
//	return 0;
//}

int abc(int a)
{
	if ((a%4 == 0 && a % 100 != 0) || (a % 400 == 0))
		return 1;
	else
		return 0;
}


int sum = 0;
int main()
{
	int i = 0;
	for (int i = 1000; i <= 2000; i++)
	{
		if (1 == abc(i))
		{
			printf("%d ", i);
			sum++;
		}
	}
	printf("\nsum=%d\n", sum);
	return 0;
}