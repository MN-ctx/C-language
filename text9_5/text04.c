//����-�ݹ�-ģ��ʵ�����ַ�������

#include<stdio.h>

////����һ��������ʱ������
//int add(char* arr) //ȡ��ַ
//{
//	int a = 0;
//	while (*arr != '\0')
//	{
//		a++;
//		arr++;
//	}
//	return a;
//}

//����������������ʱ�������õݹ�ķ�ʽ��
//arr(aaa)
//1+arr(aa)
//1+1+arr(a)
//1+1+1+arr(\0)
int add(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + add(arr + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "aaa,ooo";
	/*int sr = strlen(arr); //���ַ�������
	printf("%d\n", sr);*/

	int i = add(arr); //arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���������һ��Ԫ�صĵ�ַ
	printf("%d\n", i);

	return 0;
}

