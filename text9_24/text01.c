//指针详解
//看两个神奇的代码

(*(void (*)())0)();
//函数指针类型 - void(*)()
//把0强制类型转换成：void(*)()函数指针类型 - 0就是一个函数的地址
//调用0地址处的该函数

void(*signal(int, void(*)(int)))(int);
//signal是一个函数声明
//signal函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针：该函数指针指向的函数参数是int，返回类型是void
//该函数还可以写成以下形式：
//typedef void(*abc)(int);
//abc signal(int,abc);