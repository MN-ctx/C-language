//检测系统大小端

#include <stdio.h>

int check_sys()
{
	int a = 1;
	
	//最简单
	return *(char*)&a;

	//第二复杂
	//char* p = (char*)&a;
	////返回1，小端
	////返回0，大端
	//return *p;

	//最复杂
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
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}