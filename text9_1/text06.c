//猜数字游戏

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i = 0;
int input = 0;
int cai = 0;//接收猜的数字

void abc()
{
	printf("************************************\n");
	printf("*****     1.玩      2.不玩     *****\n");
	printf("************************************\n");
}

//RAND_MAX-32767

void game()
{
	//1.定义一个随机数
	int ret = 0;
	//时间戳
	ret = rand()%100+1;	//生成随机数,%100+1的作用是使结果控制在100以内
	//printf("%d\n", ret);

	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &cai);
		if (cai > ret)
			printf("猜大了\n");
		else if (cai < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));//srand不放在game中而是放在主函数中的原因是这里生成后后面直接可以用，到game中的话每运行一次都要进去才能生成生成，会导致时间戳生成的数值挨得近
	do
	{
		abc();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}