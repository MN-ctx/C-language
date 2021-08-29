//
// Created by 小陈同学 on 2021/6/9.
//
#include <stdio.h>
int main()
{
	int age = 25;
	if (age < 18)
	{
		printf("未成年\n");
		printf("未成年不能谈恋爱");
	}
	else
	{
		if (age >= 18 && age < 28)
		{
			printf("青年\n");
			printf("青年了，找对象没？");
		}
		else if (age >= 28 && age < 50)
			printf("壮年\n");
		else if (age >= 50)
			printf("老年\n");
	}
	//getchar();
	//while(1);
	return 0;
};
