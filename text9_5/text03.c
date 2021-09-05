//函数递归-把1234打印出1 2 3 4

#include<stdio.h>

void add(int num)
{
	if (num>9)
	{
		add(num/10);
	}
	printf("%d_", num%10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	add(num);
	return 0;
}