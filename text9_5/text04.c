//函数-递归-模拟实现求字符串长度

#include<stdio.h>

////方法一：创建临时变量求
//int add(char* arr) //取地址
//{
//	int a = 0;
//	while (*arr != '\0')
//	{
//		a++;
//		arr++;
//	}
//	return a;
//}

//方法二：不创建临时变量，用递归的方式求
//arr(aaa)
//1+arr(aa)
//1+1+arr(a)
//1+1+1+arr(\0)
int add(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + add(arr + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "aaa,ooo";
	/*int sr = strlen(arr); //求字符串长度
	printf("%d\n", sr);*/

	int i = add(arr); //arr是数组，数组传参，传过去的不是整个数组，而是数组第一个元素的地址
	printf("%d\n", i);

	return 0;
}

