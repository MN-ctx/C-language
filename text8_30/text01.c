//将三个数从大到小输出
#include<stdio.h>

main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a<b)
	{
		int max = a;
		a = b;
		b = max;
	}
	if (a<c)
	{
		int max = a;
		a = c;
		c = max;
	}
	if (b<c)
	{
		int max = b;
		b = c;
		c = max;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}