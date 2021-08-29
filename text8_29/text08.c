//
// Created by 小陈同学 on 2021/7/4.
//数组中找一个数字
#include <stdio.h>
#include <string.h>

//方法一：运行效率低
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int k = 15;
//    int i = 0;
//    for (i=0;i<sz;i++) {
//        if (k == arr[i])
//        {
//            printf("找到了，下标是：%d\n",i);
//            break;
//        }
//    }
//    if (i == sz)
//    {
//        printf("没找到");
//    }
//    return 0;
//}

//方法二：二分查找法
int main()
{
	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标

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
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到");
	}
	return 0;
}