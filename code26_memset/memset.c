#include<stdio.h>
#include<string.h>

void function1(char x[], char z[])
{
	char y[12];
	strcpy(y, x);
	strcpy(x, z);
	strcpy(z, y);
}

void function2(int *pa, int *pb)
{
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

int main()
{
	int a = 2, b = 4;
	
	char arr1[12] = "sb";
	char arr2[12] = "hello world";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	memset(arr1+6, 'r', 3);//交换数组内部元素；
	printf("%s\n", arr1);
	function1(arr1, arr2);//交换数组内容；
	printf("arr1 = %s,\narr2 = %s\n", arr1, arr2);
	function2(&a, &b);//交换数字内容；
	printf("a = %d,\nb = %d", a, b);
	return 0;
}