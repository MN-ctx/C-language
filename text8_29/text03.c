//
// Created by С��ͬѧ on 2021/6/10.
//
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:                         //case��Ҫ�����γ������ʽ
		if (a == 1);
		printf("�����ɣ����꣡����\n");
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("��");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}