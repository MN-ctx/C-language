//有符号 - 例题理解

#include <stdio.h>

int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));//此处为打印有符号数，且要找\0
	//循环，由-1 -> -128，再减1就到了127，再一直到0，此时就停止，所以0前共有255个数字
	return 0;
}

