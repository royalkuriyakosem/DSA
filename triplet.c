#include<stdio.h>
void main()
{
	int A[50][50],B[50][50],row,col,i,j,nz;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of columns: ");
	scanf("%d",&col);
	printf("\nEnter the SPARSE MATRIX\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("[%d,%d]:",i,j);
			scanf("%d",&A[i][j]);
		}		
	}
	printf("\nSPARSE MATRIX\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",A[i][j]);
			
		}		
		printf("\n");
	}
	nz=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(A[i][j]!=0)
			{
				nz++;
				B[nz][0]=i;
				B[nz][1]=j;
				B[nz][2]=A[i][j];
			}
		}		
	}
	B[0][0]=row;
	B[0][1]=col;
	B[0][2]=nz;
	printf("\nTRIPLET REPRESENTATION\n");
	for(i=0;i<=nz;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",B[i][j]);
			
		}		
		printf("\n");
	}
}
