//����-�ö��ֲ��ҷ���һ�����������в��Ҿ����ĳ����

//#include<stdio.h>
//#include<stddef.h>
//
//int aaa(int arr[], int k,int sz)
//{
//	int zuo = 0;
//	int you = sz - 1;
//
//	// 1 2 3 4 5 6 7 8 9 10
//	// 0 1 2 3 4 5 6 7 8 9
//
//	while (zuo<=you)
//	{
//		int zhong = (zuo + you) / 2;
//		if (arr[zhong]>k)
//		{
//			you = zhong - 1;
//		}
//		else if (arr[zhong] < k)
//		{
//			zuo = zhong + 1;
//		}
//		else
//		{
//			return zhong;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 10;
//	int ret = aaa(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("û�ҵ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


#include<stdio.h>
#include<stddef.h>
//         ������arr��ָ��
int aaa(int arr[], int k,int sz)
{
	int zuo = 0;
	int you = sz - 1;
	
	while (zuo<=you)
	{
		int zhong = (zuo + you) / 2;//ÿһ�β��Ҷ�Ҫ�����м����֣�����Ҫ��ѭ����
		if (arr[zhong] > k)
		{
			you = zhong - 1;
		}
		else if (arr[zhong] < k)
		{
			zuo = zhong + 1;
		}
		else
		{
			return zhong;
		}
	}
	return -1;
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 6;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//            ����ȥ���������һ�����ĵ�ַ
	int ret = aaa(arr,k,sz);
	if (ret == -1)
	{
		printf("�Ҳ�����");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
		
	return 0;

}