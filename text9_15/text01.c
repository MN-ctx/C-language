//�ṹ��

#include <stdio.h>

struct T
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};

typedef struct Stu	//typedef���޸Ľṹ������֣��ڱ��ṹ������޸�
{
	//��Ա����
	char name[20];
	short age;
	struct T t; //�ṹ��ĳ�Ա�����Ǳ��������顢ָ�������������ṹ��
	char sex[5];
	char *pc;
} Stu;//�޸ĺ������

//s1, s2, s3;//s1��s2��s3������ȫ�ֵĽṹ�������һ�㾡��������ȫ�ֱ���

//ʵ�ַ�ʽ
void Print1(Stu n1, Stu n2)
{
	printf("%s\n", n1.t.name);
	printf("%s\n", n2.pc);
}

void Print2(Stu* a1, Stu* a2) //��������ȡ��ַʱ������ǵü�*��
{
	printf("%s\n", a1->t.name);
	printf("%s\n", a2->pc);
}

int main()
{
	char arr[] = "hello,bit";
	struct Stu s1 = {"����",20,{ "����",30,"12345678910","����" },"��"};//�ֲ�����
	Stu s2 = { "����",30,{ "����",50,"98765432101","���" },"Ů" ,arr };//��ʼ����Ա����
	printf("%s\n", s1.name);
	printf("%s\n", s2.t.name);
	Print1(s1, s2);
	Print2(&s1, &s2);//���ṹ��ĵ�ַЧ����һЩ������ռ��˷�
	return 0;
}