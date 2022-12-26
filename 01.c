/*
题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。
*/
/*
分析：三位数表示？个位十位百位分别用三个变量表示。
遍历、组合数字输出

*/

#include <stdio.h>
int main(void)
{
    int g,s,b;
	int count = 0;
	for(b=1; b<5; b++)
	{
		for(s=1; s<5; s++)
		{
			for(g=1; g<5; g++)
			{
				if(b!=s && b!=g && s!=g)
				{
					printf("%d%d%d\n",b,s,g);
					count++;
				}
			}
		}
	}
	printf("count = %d\n",count);

}