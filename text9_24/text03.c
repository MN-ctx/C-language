//ָ�뺯��ʵ�ּ��׼�����

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

int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("�������������֣�");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if(input == 0)
		{
			printf("�˳���\n");
		}
		else
		{
			printf("ѡ��������������룡\n");
		}
	} while (input);
	return 0;
}