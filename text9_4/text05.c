//����-��ӡ100-200֮�������

#include<stdio.h>
#include<math.h>

int aaa(int pi)
{
		int j = 0;
		for (int j = 2; j <= sqrt(pi); j++)
		{
			if (pi % j == 0)
				return 0;
		}
		return 1;
}

int sum = 0;

int main()
{
	//��ӡ100-200֮�������
	int i = 0;
	for (int i = 100; i < 200; i++)
	{
		if (aaa(i) == 1)
		{
			printf("%d\n", i);
			sum++;
		}
	}
	printf("sum=%d\n", sum);
	return 0;
}