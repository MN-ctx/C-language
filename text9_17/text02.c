//无符号 - 理解题

#include <stdio.h>
#include <Windows.h>

int main()
{
	unsigned int i;//有符号的char的范围：-127 -> 128   无符号的char的范围：0 -> 255
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);//%u打印十进制的无符号数字
		Sleep(100);//打印的时候停顿100毫秒
	}
	return 0;
}

