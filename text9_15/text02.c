//����const��Ӧ��

#include<stdio.h>

int main()
{
	int num = 10;
	int n = 100;
	int* p = &num; //��const����int*ǰ�棬��*p���ܸı�num��ֵ��
				   //���const����pǰ�棨*���棩�������ͨ��*p�޸�num��ֵ,����ʱp���ܽ���n�ĵ�ַ�ˡ�
				   //const�����������Ͳ��ܸı�
	//*p = 0;
	p = &n;
	printf("%d\n", num);
	return 0;
}