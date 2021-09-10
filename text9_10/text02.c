//数组 - 冒泡排序

#include<stdio.h>

void ADD(int arr[], int sz)
{
	//确定冒泡函数的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1; //假设这一趟要排序的数字已经有序
		//一次冒泡排序
		int j = 0;
		int a = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]);
			{
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
				flag = 0; //本趟冒泡排序其实不完全有序
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