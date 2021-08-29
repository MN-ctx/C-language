//
// Created by 小陈同学 on 2021/6/17.
//循环训练：求n的阶乘（n!）
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("请输入n的值：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
	}
	printf("ret=%d", ret);
	return 0;
}
