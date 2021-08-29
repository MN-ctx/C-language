//
// Created by 小陈同学 on 2021/6/17.
//求1!+2!+3!之和
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	//    printf("请输入n的值：");
	//    scanf("%d",&n);

	//方法一：(复杂)
	//    for (n=1;n<=3;n++)
	//    {
	//        ret = 1;
	//        for (i=1;i<=n;i++)
	//        {
	//            ret = ret * i;
	//        }
	//        sum = sum + ret;
	//    }

	//方法二：
	for (i = 1; i <= 3; i++) 
	{
		ret = ret*i;
		sum = sum + ret;
	}
	//1+2+6
	printf("sun的值为：%d\n", sum);
	return 0;
}

