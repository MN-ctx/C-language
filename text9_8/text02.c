//创建二维数组及应用二维数组 - 连续的

#include<stdio.h>

int main()
{
	////创建二维数组
	//char arr1[5][7] = { {'a','b','c'},{"1,2,3"} }; //此二维数组表示：5行7列
	//int arr2[][4] = { {"1,2,3"} , {"abc"} }; //二维数组，只能省略行，不能省略列
	//printf("%d %d\n", sizeof(arr1), sizeof(arr2));

	//应用二维数组
	int arr3[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr3[i][j]); //二维数组通过下标来访问
		}
		printf("\n");
	}

	return 0;
}