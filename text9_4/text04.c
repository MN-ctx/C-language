//自定义函数-用指针取地址传输数据

#include<stdio.h>

////不能传值
////形参其实是实参的一份临时拷贝
////对形参的修改是不会改变实参的
//void aaa(int x, int y)
//{
//	int q = 0;
//	q = x;
//	x = y;
//	y = q;
//}

//可以传值
//这里传输地址，则可以准确找到实参
void abc(int* pa, int* pb)
{
	int max = 0;
	max = *pa;
	*pa = *pb;
	*pb = max;
}


int main()
{
	int a = 100;
	int b = 200;
	printf("a=%d b=%d\n", a, b);
	abc(&a, &b); //传址调用
	//aaa(a, b); //传值调用
	printf("a=%d b=%d\n", a, b);
	return 0;
}