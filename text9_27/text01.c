//冒泡排序实现整形数组排序

#include<stdio.h>

void test(int arr[], int sz)
{
	//趟数
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int max = 0;
				max = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = max;
			}
			
		}

	}
}

int main()
{
	int arr[] = { 1,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	test(arr, sz);

	int a = 0;
	for (a = 0; a < sz; a++)
	{
		printf("%d ", arr[a]);
	}
	return 0;
}