#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max1[10][10],max2[10][10],mulr[10][10],r,c,i,j,k;

	printf("Enter the number of row : ");
	scanf("%d",&r);
	printf("Enter the number of column : ");
	scanf("%d",&c);
	printf("Enter the first matrix element :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&max1[i][j]);
		}
	}
	printf("Enter the second matrix element :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&max2[i][j]);
		}
	}

	printf("Multiply the matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mulr[i][j]=0;
			for(k=0;k<c;k++)
			{
				mulr[i][j]+=max1[i][k]*max2[k][j];
			}
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mulr[i][j]);
		}
		printf("\n");
	}
	return 0;
}