/*
题目：
请编写一个程序，输入一个M行N列的二维数组，要求打印出该二维数组的转置
*/
/*
思路：
原先按行打印，转置后按列输出
*/
#include<stdio.h>
#include<string.h>
void main()
{
	int n[4][4],i,j;
	printf("请输入4*4矩阵:\n");
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&n[i][j]);
	printf("转置后的数组:\n");	
	for(i=4;i>0;i--)
	{
		for(j=0;j<4;j++)
			printf("%d ",n[j][i-1]);
		printf("\n");
	}
}
