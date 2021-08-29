//
// Created by 小陈同学 on 2021/6/10.
//
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:                         //case需要是整形常量表达式
		if (a == 1);
		printf("工作吧！少年！！！\n");
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}