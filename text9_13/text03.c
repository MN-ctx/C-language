//�ݹ� - ����һ���Ǹ��������������ǵ�����֮��
//���磺1729  ����1+7+2+9 = 19

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