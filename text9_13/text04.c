//递归 - 实现a的b次方

#include<stdio.h>

double Pow(int a, int b)
{
	//a^b = a* a^(b-1)
	if (b < 0)
	{
		return (1.0 / (Pow(a, -b)));
	}
	else if (b == 0)
	{
		return 1;
	}
	else
	{
		return a*Pow(a, b - 1);
	}
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	double num = Pow(a, b);
	printf("%lf\n", num);
	return 0;
}