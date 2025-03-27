#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
node1:
	printf("你的电脑将在120秒后关机\n请输入“我是猪”解除\n");
	scanf("%s", input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shutdown -a");
	}
	else
	{
		goto node1;
	}
	return 0;
}