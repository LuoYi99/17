/*
��Ŀ��
���дһ����������һ��M��N�еĶ�ά���飬Ҫ���ӡ���ö�ά�����ת��
*/
/*
˼·��
ԭ�Ȱ��д�ӡ��ת�ú������
*/
#include<stdio.h>
#include<string.h>
void main()
{
	int n[4][4],i,j;
	printf("������4*4����:\n");
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&n[i][j]);
	printf("ת�ú������:\n");	
	for(i=4;i>0;i--)
	{
		for(j=0;j<4;j++)
			printf("%d ",n[j][i-1]);
		printf("\n");
	}
}
