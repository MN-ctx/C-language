//递归 - 输入一个非负整数，返回他们的数字之和
//例如：1729  返回1+7+2+9 = 19

#include<stdio.h>

int DigitSum(int num)
{
	if (num > 9)
	{
		return DigitSum(num / 10) + (num % 10);
	}
	else
	{
		return num;
	}
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("%d\n", ret);
	return 0;
}