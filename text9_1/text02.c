//��1-100���ж��ٸ���9����99��2��9��

#include<stdio.h>
int max = 0;
int main()
{
	int i = 0;
	for (int i = 1; i < 100; i++)
	{
		if (i % 10 == 9)	//�����λ���ϵ�9
		{
			printf("%d ", i);
			max++;
		}
		if (i / 10 == 9)	//����10λ���ĵ�9
		//�˴�Ϊif���������ǲ��й�ϵ����Ϊelse if����Ϊ���й�ϵ
		{
			printf("%d ", i);
			max++;
		}
	}
	printf("1-100�е�9�У�%d��\n", max);
	return 0;
}