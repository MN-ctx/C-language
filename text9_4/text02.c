//拷贝的函数

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "陈天笑真帅";
	char arr2[20] = "#########";
	strcpy(arr2, arr1);// arr2是目的地，arr1是源头
	printf("%s\n", arr2);// \0也拷贝过去了，因此会结束打印，不会打印后面的东西
	return 0;
}