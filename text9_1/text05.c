//����Ļ������9*9�˷��ھ���

#include<stdio.h>

int main()
{
	int i = 0;
	int f = 0;
	for (int i = 1; i <= 9 ; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, j*i);	//%2d->�Ҷ���   %-2d->�����
		}
		printf("\n");
	}
	return 0;
}