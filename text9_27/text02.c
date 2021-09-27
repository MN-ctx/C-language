//冒泡排序 - 指针用库函数qsort排序

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2) //int和括号内格式固定的
{
	return *(int*)e1 - *(int*)e2;
}

//排序整形数组
void test1()
{
	int arr1[] = { 1,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, sz, sizeof(arr1[0]), cmp_int);//qsort函数的固定句式

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
}


int cmp_float(const void* e1, const void* e2)
{
	//方法一：
	/*if (*(float*)e1 > *(float*)e2)
		return 1;
	else if (*(float*)e1 == *(float*)e2)
		return 0;
	else
		return -1;*/

	//return *(float*)e1 - *(float*)e2; //（方法二：一步到位的方法，只是返回的时候因为是返回int类型所以可能报错）
	return ((int)(*(float*)e1 - *(float*)e2));//方法二的改进(备注：float的*需要，但是float前面的*可以不要)
}

//排序浮点型数组
void test2()
{
	float arr2[] = { 1.0,3.0,5.0,7.0,9.0,2.0,4.0,6.0,8.0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr2, sz, sizeof(arr2[0]), cmp_float);
	int j = 0;
	for ( j = 0; j < sz; j++)
	{
		printf("%f ", arr2[j]);
	}
}

struct Stu
{
	char name[20];
	int age;
};


int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//按年龄（age）排序
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用><=来比较，应该用strcmp函数来比较
	return strcmp (((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//按名字（name）排序
}

//排序结构体
void test3()
{
	struct Stu arr3[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(arr3) / sizeof(arr3[0]);
	//qsort(arr3, sz, sizeof(arr3[0]), cmp_stu_by_age);//按年龄（age）排序
	qsort(arr3, sz, sizeof(arr3[0]), cmp_stu_by_name);//按名字（name）排序
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}