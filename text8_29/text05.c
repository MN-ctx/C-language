//
// Created by С��ͬѧ on 2021/6/11.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ret = 0;
	//int ch = 0;
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%d", password);
	while (getchar() != '\n'); //((ch = getchar()) != '\n');
	{
		;
	}
	printf("��ȷ�����루Y/N����");
	//ret = getchar();
	if (getchar() == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");

	}

	return 0;
}