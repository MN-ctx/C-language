//ָ�� - ���͵�����
//Ұָ��

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//������ - ��Ԫ�صĵ�ַ    int����һ�·���4���ֽ�
	//char* p = arr;//charһ��ֻ����1���ֽ�
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + 1) = 1;
	}
	return 0;
}


//Ұָ��
int main()
{
	//1.δ��ʼ����ָ�����
	int* p;//�ֲ���������ʼ��������Ĭ�Ϸŵ���һ�����ֵ
	*p = 20;

	return 0;
}

//2.ָ��Խ�����
int main()
{
	int a[10] = { 0 };
	int i = 0;
	int* p = a;
	for (i = 0; i <=12; i++)
	{
		*p = i;
		p++;
	}
	return 0;
}

//3.ָ��ָ��Ŀռ��ͷ�
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();//���غ�˴���ַ�Ǹ����ˣ����ǵ�ַ���ڿռ�ȴ���ܷ����ˣ����Բ��ܱ���
	printf("%f\n", *p);
	return 0;
}