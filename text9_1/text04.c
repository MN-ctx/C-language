//求一个数组中的最大值

#include<stdio.h>
int main()
{
	int arr[] = { -1,-2,-3,-4,-5,-11,-7,-8,-9,-10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int max = arr[0];	//注意这里为什么不直接定义0，而是用下标，若为负数时，这里定义的0就是最大值，所以用下标
	for (int i = 1; i <= sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("最大值为：%d\n", max);
	return 0;
}