//�Զ��庯��-��ָ��ȡ��ַ��������

#include<stdio.h>

////���ܴ�ֵ
////�β���ʵ��ʵ�ε�һ����ʱ����
////���βε��޸��ǲ���ı�ʵ�ε�
//void aaa(int x, int y)
//{
//	int q = 0;
//	q = x;
//	x = y;
//	y = q;
//}

//���Դ�ֵ
//���ﴫ���ַ�������׼ȷ�ҵ�ʵ��
void abc(int* pa, int* pb)
{
	int max = 0;
	max = *pa;
	*pa = *pb;
	*pb = max;
}


int main()
{
	int a = 100;
	int b = 200;
	printf("a=%d b=%d\n", a, b);
	abc(&a, &b); //��ַ����
	//aaa(a, b); //��ֵ����
	printf("a=%d b=%d\n", a, b);
	return 0;
}