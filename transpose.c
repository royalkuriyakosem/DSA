#include<stdio.h>
void main()
{
	int A[50][50],B[50][50],i,j,q;
	int C[50][50],row,col,nz;
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
	C[0][0]=B[0][1];
	C[0][1]=B[0][0];
	C[0][2]=nz;
	q=1;
	for(i=0;i<B[0][1];i++)
	{
		for(j=1;j<=nz;j++)
		{
			if(B[j][1]==i)
			{
				C[q][0]=B[j][1];
				C[q][1]=B[j][0];
				C[q][2]=B[j][2];
				q++;
			}
		}		
	}
	printf("\nTRIPLET REPRESENTATION OF TRANSPOSE\n");
	for(i=0;i<=nz;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",C[i][j]);
			
		}		
		printf("\n");
	}
}
