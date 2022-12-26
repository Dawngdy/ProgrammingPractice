/*
题目：输入三个整数x,y,z，请把这三个数由小到大输出。
*/
//在不改变a,b,c的前提下，从小到大输出
#include <stdio.h>

int main(int arg, const char * argv[])
{
	int a,b,c;
	printf("输入3个数：\n");
	scanf("%d%d%d",&a,&b,&c);
	
	int sum = a+b+c;
	printf("min: %d\n",(a<b? a:b)<c ? (a<b? a:b):c);
	printf("middle: %d\n",sum - ((a<b? a:b)<c ? (a<b? a:b):c) - ((a>b? a:b)>c ? (a>b? a:b):c) );
	printf("max: %d\n",(a>b? a:b)>c ? (a>b? a:b):c);
}
