#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char arr[10] = { 0 };
	for (i = 0; i < 3; i += 1)
	{
		printf("请输入密码->");
		scanf("%s", arr);
		if (strcmp(arr, "123456") == -1|| strcmp(arr, "123456") == 1)
			printf("密码错误！\n");
		else
		{
			printf("密码正确\n");
			break;
		}
	}
	if (3 == i)
	printf("三次全部输入错误，已退出\n");
	//scanf("%s", arr);
	//i = strcmp(arr, "123456");
	//printf("%s\n%d", arr, i);
	return 0;
}