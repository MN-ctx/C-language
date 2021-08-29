//
// Created by 小陈同学 on 2021/6/11.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ret = 0;
	//int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%d", password);
	while (getchar() != '\n'); //((ch = getchar()) != '\n');
	{
		;
	}
	printf("请确认密码（Y/N）：");
	//ret = getchar();
	if (getchar() == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");

	}

	return 0;
}