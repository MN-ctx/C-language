//一维数组 - 连续的

#include<stdio.h>
#include<string.h>

int main()
{
	//创建一维数组 - 存放整形 - 十个
	int arr1[] = { 1,2,3 }; //不完全初始化，剩下的元素默认初始化为0
	char arr2[10] = { 'a','b' }; //不完全初始化，剩下的元素默认初始化为0
	char arr3[10] = "ab"; //与arr2结果一样
	char arr4[] = "abcdef";
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr4));
	printf("%d\n", strlen(arr4));
	int sz = sizeof(arr4) / sizeof(arr4[0]);
	printf("%d\n", sz);

	//理解以下代码
	char arr5[] = "abc";
	char arr6[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr5));
	printf("%d\n", sizeof(arr6));
	printf("%d\n", strlen(arr5));
	printf("%d\n", strlen(arr6)); //strlen在数组arr6中遇不到/0，所以生成一个随机数

	return 0;
}