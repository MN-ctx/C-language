//�ṹ��

#include<stdio.h>

//����һ���ṹ������ - struct Stu
struct aaa
{
	//��Ա����
	char name[20];
	int age;
	char id[20];
};

int main()
{
	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
	struct aaa s1 = { "����", 20, "201902140129" };

	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//�ṹ�����.��Ա��

	//struct Stu* ps = &s1;
	//printf("%s\n", (*ps).name);
	//printf("%s\n", ps->name);
	////�ṹ��ָ��->��Ա��
	//printf("%d\n", (*ps).age);
	//printf("%d\n", ps->age);
	//printf("%s\n", (*ps).id);
	//printf("%s\n", ps->id);
	return 0;
}