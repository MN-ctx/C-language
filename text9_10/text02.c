//���� - ð������

#include<stdio.h>

void ADD(int arr[], int sz)
{
	//ȷ��ð�ݺ���������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1; //������һ��Ҫ����������Ѿ�����
		//һ��ð������
		int j = 0;
		int a = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]);
			{
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
				flag = 0; //����ð��������ʵ����ȫ����
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	ADD(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}