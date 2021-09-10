//操作符详解 - 移动操作符

#include<stdio.h>

////右移操作符1
//int main()
//{
//	int a = 16;
//	//>>右移操作符
//	//移动的是二进制位
//	//00000000000000000000000000010000
//	//1.算术右移：右边丢弃一位，左边补符号位（正整数补0，负整数补1）
//	//2.逻辑右移：右边丢弃，左边补0
//	int b = a >> 1;//右移一位
//	printf("%d\n", b);
//	return 0;
//}


////右移操作符2
//int main()
//{
//	int a = -1;
//	//整数的二进制表示有：原码、反码、补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001 - 源码
//	//11111111111111111111111111111110 - 反码（符号位不变，其它位按位取反）
//	//11111111111111111111111111111111 - 补码（反码加1）
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
////注意事项：
////移动负数位是标准的未定义行为


//左移操作符
int main()
{
	int a = 5;
	int b = a << 1;//左移操作符
	//00000000000000000000000000000101
	//直接左边丢掉一位，右边补0（*2的效果）
	printf("%d\n", b);
	return 0;
}