#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
node1:
	printf("��ĵ��Խ���120���ػ�\n�����롰���������\n");
	scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
	{
		goto node1;
	}
	return 0;
}