// ����||   ����&&
//��Ŀ������ a>b?a:b

#include <stdio.h>

//// ����||   ����&&
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; //&&�����ң�����һ��Ϊ�٣���ȫΪ�٣�����治��Ҫ����
//	i = a++ || ++b || d++; //||�����ߣ�����һ��Ϊ�棬��ȫΪ��,����治��Ҫ����
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}


//��Ŀ������ a>b?a:b
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;

	/*if (a > b)
		max = a;
	else
		max = b;*/

	//����Ŀ��������ʾ����ѭ��
	max = (a > b ? a : b);

	printf("%d\n", max);
	return 0;
}