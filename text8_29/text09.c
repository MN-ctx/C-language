//
// Created by С��ͬѧ on 2021/7/5.
//ʹ����ǰ������ʾ
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
	int you = strlen(arr1) - 1;//strlen���ڼ���Ԫ�ظ�����������һ���ַ���������'\0'Ϊֹ

	while (zuo <= you)//'='����Ҫ
	{
		arr2[zuo] = arr1[zuo];
		arr2[you] = arr1[you];
		printf("%s\n", arr2);

		Sleep(1000);//Sleep - ��Ϣ��������1000�ĵ�λ�Ǻ���
		system("cls");//systom - ִ��ϵͳ�����һ������; cls - �����Ļ;

		zuo++;
		you--;
	}

	return 0;
}