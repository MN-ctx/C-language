//���׼�����

#include <stdio.h>

void menu()
{
	printf("******************\n");
	printf("**1.�ӷ�  2.����**\n");
	printf("**3.�˷�  4.����**\n");
	printf("**    0.ȡ��    **\n");
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
	printf("������������������");
	scanf("%d%d", &x, &y);
	printf("%d\n", pr(x, y));
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
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
			printf("�˳���\n");
		}
		default:
		{
			printf("���������룡\n");
		}
		}
	} while (input);
	return 0;
}


















////��ͳ����
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//
//		switch(input)
//		{
//		case 1:
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		}
//		case 2:
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		}
//		case 3:
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		}
//		case 4:
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		}
//		case 0:
//		{
//			printf("�˳���\n");
//		}
//		default:
//		{
//			printf("���������룡\n");
//		}
//		}
//
//	} while (input);
//	return 0;
//}