//��һ�������е����ֵ

#include<stdio.h>
int main()
{
	int arr[] = { -1,-2,-3,-4,-5,-11,-7,-8,-9,-10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int max = arr[0];	//ע������Ϊʲô��ֱ�Ӷ���0���������±꣬��Ϊ����ʱ�����ﶨ���0�������ֵ���������±�
	for (int i = 1; i <= sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("���ֵΪ��%d\n", max);
	return 0;
}