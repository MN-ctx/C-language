//利用goto语句实现电脑关机

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//system()执行系统命令的（cmd）   //shutdown -s -t 60 电脑将在60秒后关机
aaa://接受goto语句跳转的标识符aaa
	printf("请注意，你的电脑将在60秒后关机，输入“陈天笑是大帅哥”可取消关机。请输入：\n");
	scanf("%s", input);
	if (strcmp(input,"陈天笑是大帅哥") == 0)
	{
		system("shutdown -a");//shutdown -a 取消关机
	}
	else
	{
		goto aaa;//goto语句跳转回标识符aaa
	}
	return 0;
}