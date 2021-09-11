//结构体

#include<stdio.h>

//创建一个结构体类型 - struct Stu
struct aaa
{
	//成员变量
	char name[20];
	int age;
	char id[20];
};

int main()
{
	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
	struct aaa s1 = { "张三", 20, "201902140129" };

	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//结构体变量.成员名

	//struct Stu* ps = &s1;
	//printf("%s\n", (*ps).name);
	//printf("%s\n", ps->name);
	////结构体指针->成员名
	//printf("%d\n", (*ps).age);
	//printf("%d\n", ps->age);
	//printf("%s\n", (*ps).id);
	//printf("%s\n", ps->id);
	return 0;
}