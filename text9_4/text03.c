//函数-将ptr指向的内存块的前num个字节设置为指定值

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[] = "hello world";
	memset(arr, '#', 5);
	printf("%s\n", arr);
	return 0;
}

