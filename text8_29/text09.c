//
// Created by 小陈同学 on 2021/7/5.
//使数字前后逐渐显示
//chen tian xiao zhen shuai
//#########################
//chen#################huai
//......

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "chen tian xiao zhen shuai1";
	char arr2[] = "##########################";
	//int sz = sizeof(arr1)/sizeof(arr1[0]);
	int zuo = 0;
	//int you = sz-1;
	int you = strlen(arr1) - 1;//strlen用于计算元素个数，碰到第一个字符串结束符'\0'为止

	while (zuo <= you)//'='很重要
	{
		arr2[zuo] = arr1[zuo];
		arr2[you] = arr1[you];
		printf("%s\n", arr2);

		Sleep(1000);//Sleep - 休息，括号里1000的单位是毫秒
		system("cls");//systom - 执行系统命令的一个函数; cls - 清空屏幕;

		zuo++;
		you--;
	}

	return 0;
}