//�⺯��qsort��Ӧ��

#include<stdio.h>
#include<string.h>



struct Stu
{
	char name[20];
	float age;
};

//
//int Name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test1()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), Name);
//
//}

int Age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int test2()
{
	struct Stu a[3] = { { "zhangsan",20.0 },{ "lisi",30.0 },{ "wangwu",10.0 } };
	int sz = sizeof(a) / sizeof(a[0]);

	qsort(a, sz, sizeof(a[0]), Age);
	//��һ���������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С - ��λ���ֽ�
	//���ĸ�����������ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ���������ʹ�����Լ�ʵ��
	//            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ

}

int main()
{
	//test1();
	test2();
	return 0;
}