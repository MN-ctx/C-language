// 或者||   并且&&
//三目操作符 a>b?a:b

#include <stdio.h>

//// 或者||   并且&&
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; //&&（并且）中有一项为假，则全为假，则后面不需要算了
//	i = a++ || ++b || d++; //||（或者）中有一项为真，则全为真,则后面不需要算了
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}


//三目操作符 a>b?a:b
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;

	/*if (a > b)
		max = a;
	else
		max = b;*/

	//用三目操作符表示上面循环
	max = (a > b ? a : b);

	printf("%d\n", max);
	return 0;
}