//һά���� - ������

#include<stdio.h>
#include<string.h>

int main()
{
	//����һά���� - ������� - ʮ��
	int arr1[] = { 1,2,3 }; //����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	char arr2[10] = { 'a','b' }; //����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	char arr3[10] = "ab"; //��arr2���һ��
	char arr4[] = "abcdef";
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr4));
	printf("%d\n", strlen(arr4));
	int sz = sizeof(arr4) / sizeof(arr4[0]);
	printf("%d\n", sz);

	//������´���
	char arr5[] = "abc";
	char arr6[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr5));
	printf("%d\n", sizeof(arr6));
	printf("%d\n", strlen(arr5));
	printf("%d\n", strlen(arr6)); //strlen������arr6��������/0����������һ�������

	return 0;
}