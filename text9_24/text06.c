//库函数qsort的应用

#include<stdio.h>
#include<string.h>



struct Stu
{
	char name[20];
	float age;
};

//
//int Name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test1()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), Name);
//
//}

int Age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int test2()
{
	struct Stu a[3] = { { "zhangsan",20.0 },{ "lisi",30.0 },{ "wangwu",10.0 } };
	int sz = sizeof(a) / sizeof(a[0]);

	qsort(a, sz, sizeof(a[0]), Age);
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小 - 单位是字节
	//第四个参数：函数指针，比较两个元素的所用函数的地址，这个函数使用者自己实现
	//            函数指针的两个参数是：待比较的两个元素的地址

}

int main()
{
	//test1();
	test2();
	return 0;
}