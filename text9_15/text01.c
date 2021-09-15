//结构体

#include <stdio.h>

struct T
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};

typedef struct Stu	//typedef是修改结构体的名字，在本结构体后面修改
{
	//成员变量
	char name[20];
	short age;
	struct T t; //结构体的成员可以是标量、数组、指针甚至是其它结构体
	char sex[5];
	char *pc;
} Stu;//修改后的名字

//s1, s2, s3;//s1，s2，s3是三个全局的结构体变量，一般尽量不创建全局变量

//实现方式
void Print1(Stu n1, Stu n2)
{
	printf("%s\n", n1.t.name);
	printf("%s\n", n2.pc);
}

void Print2(Stu* a1, Stu* a2) //当下面是取地址时，这里记得加*号
{
	printf("%s\n", a1->t.name);
	printf("%s\n", a2->pc);
}

int main()
{
	char arr[] = "hello,bit";
	struct Stu s1 = {"张三",20,{ "旺财",30,"12345678910","保密" },"男"};//局部变量
	Stu s2 = { "李四",30,{ "二狗",50,"98765432101","你猜" },"女" ,arr };//初始化成员变量
	printf("%s\n", s1.name);
	printf("%s\n", s2.t.name);
	Print1(s1, s2);
	Print2(&s1, &s2);//传结构体的地址效果好一些，避免空间浪费
	return 0;
}