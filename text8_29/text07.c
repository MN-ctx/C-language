//
// Created by С��ͬѧ on 2021/6/17.
//��1!+2!+3!֮��
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	//    printf("������n��ֵ��");
	//    scanf("%d",&n);

	//����һ��(����)
	//    for (n=1;n<=3;n++)
	//    {
	//        ret = 1;
	//        for (i=1;i<=n;i++)
	//        {
	//            ret = ret * i;
	//        }
	//        sum = sum + ret;
	//    }

	//��������
	for (i = 1; i <= 3; i++) 
	{
		ret = ret*i;
		sum = sum + ret;
	}
	//1+2+6
	printf("sun��ֵΪ��%d\n", sum);
	return 0;
}

