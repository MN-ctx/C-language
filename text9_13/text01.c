//指针 - 类型的意义
//野指针

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//数组名 - 首元素的地址    int类型一下访问4个字节
	//char* p = arr;//char一下只访问1个字节
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + 1) = 1;
	}
	return 0;
}


//野指针
int main()
{
	//1.未初始化的指针变量
	int* p;//局部变量不初始化，里面默认放的是一个随机值
	*p = 20;

	return 0;
}

//2.指针越界访问
int main()
{
	int a[10] = { 0 };
	int i = 0;
	int* p = a;
	for (i = 0; i <=12; i++)
	{
		*p = i;
		p++;
	}
	return 0;
}

//3.指针指向的空间释放
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();//返回后此处地址是给到了，但是地址所在空间却不能访问了，所以不能编译
	printf("%f\n", *p);
	return 0;
}