//简易计算器

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

void Arr(int (*pr)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数：");
	scanf("%d%d", &x, &y);
	printf("%d\n", pr(x, y));
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);

		switch(input)
		{
		case 1:
		{
			Arr(Add);
			break;
		}
		case 2:
		{
			Arr(Sub);
			break;
		}
		case 3:
		{
			Arr(Mul);
			break;
		}
		case 4:
		{
			Arr(Div);
			break;
		}
		case 0:
		{
			printf("退出！\n");
		}
		default:
		{
			printf("请重新输入！\n");
		}
		}
	} while (input);
	return 0;
}


















////传统方法
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//
//		switch(input)
//		{
//		case 1:
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		}
//		case 2:
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		}
//		case 3:
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		}
//		case 4:
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		}
//		case 0:
//		{
//			printf("退出！\n");
//		}
//		default:
//		{
//			printf("请重新输入！\n");
//		}
//		}
//
//	} while (input);
//	return 0;
//}