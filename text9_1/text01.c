//��ӡ����

#include<stdio.h>
int main()
{
	//�ж�i�Ƿ�Ϊ����
	//ֻ�ܱ�1����������������
	//1.�Գ���
	//����2 -> i-1������
	int i = 0;
	int max = 0;
	for (int i = 1; i <= 200; i++)
	//�㷨�Ż���ż�������������������ϴ������п���ʹ i+=2������ż��
	{
		int j = 0;
		for (j = 2; j < i;j++)
		//�㷨�Ż�����j < i �ı�j < sqrt(i)
		//sqrt�����ڿ�ƽ������ѧ�⺯��
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		//�㷨�Ż�����j < i �ı�j < sqrt(i)�󣬴˴�j > sqrt(i)
		{
			max++;
			printf("%d ", i);
		}
	}
	printf("\nmax = %d\n", max);
	return 0;
}
