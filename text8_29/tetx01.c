//
// Created by С��ͬѧ on 2021/6/9.
//
#include <stdio.h>
int main()
{
	int age = 25;
	if (age < 18)
	{
		printf("δ����\n");
		printf("δ���겻��̸����");
	}
	else
	{
		if (age >= 18 && age < 28)
		{
			printf("����\n");
			printf("�����ˣ��Ҷ���û��");
		}
		else if (age >= 28 && age < 50)
			printf("׳��\n");
		else if (age >= 50)
			printf("����\n");
	}
	//getchar();
	//while(1);
	return 0;
};
