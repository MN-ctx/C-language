//���ϵͳ��С��

#include <stdio.h>

int check_sys()
{
	int a = 1;
	
	//���
	return *(char*)&a;

	//�ڶ�����
	//char* p = (char*)&a;
	////����1��С��
	////����0�����
	//return *p;

	//���
	/*char* p = (char*)&a;
	if (*p == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}*/
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}