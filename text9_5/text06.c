//�����ݹ�-쳲��������� 1 1 2 3 5 8 13 21 34 55......

#include<stdio.h>

////����һ��
////�ݹ���쳲���������
//int c = 0;
//int add(int n)
//{
//	if (n == 3) //���Ե�����쳲��������ļ������
//	{
//		c++;
//	}
//	if (n<=2)
//		return 1;
//	else
//		return add(n - 2) + add(n - 1);
//}

//����������ѭ�����ٶȿ죬Ч�ʸ�
//
int add(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	//1 1 2 3 5 8 13 21 34 55......
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}return c;
}

int main()
{
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	sum = add(n);
	printf("sum = %d\n", sum);
	//printf("������쳲��������ļ������Ϊ��c=%d\n", c); //���ۣ��ݹ����Ч�ʵͣ��ٶ���
	return 0;
}
