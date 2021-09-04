//函数-用二分查找法在一个有序数组中查找具体的某个数

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
//		printf("没找到！");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


#include<stdio.h>
#include<stddef.h>
//         本质上arr是指针
int aaa(int arr[], int k,int sz)
{
	int zuo = 0;
	int you = sz - 1;
	
	while (zuo<=you)
	{
		int zhong = (zuo + you) / 2;//每一次查找都要更新中间数字，所以要在循环内
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
	//            传过去的是数组第一个数的地址
	int ret = aaa(arr,k,sz);
	if (ret == -1)
	{
		printf("找不到！");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
		
	return 0;

}