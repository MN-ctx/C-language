//函数const的应用

#include<stdio.h>

int main()
{
	int num = 10;
	int n = 100;
	int* p = &num; //若const放在int*前面，则，*p不能改变num的值；
				   //如果const放在p前面（*后面），则可以通过*p修改num的值,但此时p不能接收n的地址了。
				   //const放在哪里，哪里就不能改变
	//*p = 0;
	p = &n;
	printf("%d\n", num);
	return 0;
}