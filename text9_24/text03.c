//指针函数实现简易计算器

#include <stdio.h>

void menu()
{
	printf("******************\n");
	printf("**1.加法  2.减法**\n");
	printf("**3.乘法  4.除法**\n");
	printf("**    0.取消    **\n");
	printf("******************\n");
}

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
	return x *  y;
}

int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个数字：");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if(input == 0)
		{
			printf("退出！\n");
		}
		else
		{
			printf("选择错误！请重新输入！\n");
		}
	} while (input);
	return 0;
}