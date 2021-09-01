//求1-100中有多少个“9”（99算2个9）

#include<stdio.h>
int max = 0;
int main()
{
	int i = 0;
	for (int i = 1; i < 100; i++)
	{
		if (i % 10 == 9)	//计算个位数上的9
		{
			printf("%d ", i);
			max++;
		}
		if (i / 10 == 9)	//计算10位数的的9
		//此处为if，跟上面是并列关系，若为else if，则不为并列关系
		{
			printf("%d ", i);
			max++;
		}
	}
	printf("1-100中的9有：%d个\n", max);
	return 0;
}