//
// Created by С��ͬѧ on 2021/7/4.
//��������һ������
#include <stdio.h>
#include <string.h>

//����һ������Ч�ʵ�
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int k = 15;
//    int i = 0;
//    for (i=0;i<sz;i++) {
//        if (k == arr[i])
//        {
//            printf("�ҵ��ˣ��±��ǣ�%d\n",i);
//            break;
//        }
//    }
//    if (i == sz)
//    {
//        printf("û�ҵ�");
//    }
//    return 0;
//}

//�����������ֲ��ҷ�
int main()
{
	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;//���±�

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid]>k)
		{
			right = right - 1;
		}
		else if (arr[mid]<k)
		{
			left = left + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Ҳ���");
	}
	return 0;
}