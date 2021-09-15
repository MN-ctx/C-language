//面试题 - 把字符串(arr1)拷贝到另一个字符串(arr2)里面去（包含\0）

#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src) //const用于限制，使其不能改变，但是不能限制char* dest，因为那是接收方，需要改变的
{
	char* ret = dest;//此时dest的值会随着下面*dest的改变而改变，且ret会改变
	assert(dest != NULL);//断言
	assert(src != NULL);//断言
	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	//实现将arr2拷贝到arr1当中
	char arr1[] = "#############";
	char arr2[] = "陈天笑";
	printf("%s\n", my_strcpy(arr1, arr2)); //补充：strcpy(接收的数组,源头数组) - 该函数用于拷贝字符串
	return 0;
}