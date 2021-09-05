//函数-没调用一次函数，num就增加1

#include<stdio.h>

void aaa(int* num)
{
	(*num)++;//++的优先级比较高，只会自增num，不会自增*num，所有要把（*num）括起来
}

int main()
{
	int num = 0;
	aaa(&num);
	printf("num=%d\n", num);
	aaa(&num);
	printf("num=%d\n", num);
	aaa(&num);
	printf("num=%d\n", num);
	return 0;
}