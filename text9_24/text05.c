//函数的应用

#include<stdio.h>

void Print(char* str)
{
	printf("%s\n", str);
}

int main()
{
	int a;
	int * pa;
	void(*p)(char*) = Print;

	(*p)("hello bit!");
	p("hello word!");
	return 0;
}