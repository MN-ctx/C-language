//���������������������������Լ��
//շת�����

#include<stdio.h>
int main()
{
	int a = 24;
	int b = 18;
	int r = 0;
	scanf("%d %d", &a, &b);
	while (a%b)
	{
		r = a%b;
		a = b;
		b = r;
	}
	printf("%d\n", b);
	return 0;
}