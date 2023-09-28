#include<stdio.h>
void main()
{
	int A[50][50],B[50][50],i,j,q;
	int C[50][50],nz1,nz2;
	printf("Enter the number of non-zero elements: ");
	scanf("%d",&nz1);
	printf("\nEnter the TRIPLET  MATRIX 1\n");
	for(i=0;i<=nz1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d,%d]:",i,j);
			scanf("%d",&A[i][j]);
		}		
	}
    printf("\nTRIPLET  MATRIX 1\n");
	for(i=0;i<=nz1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",A[i][j]);
		}		
        printf("\n");
    }
    printf("Enter the number of non-zero elements: ");
	scanf("%d",&nz2);
	printf("\nEnter the TRIPLET  MATRIX 2\n");
	for(i=0;i<=nz2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d,%d]:",i,j);
			scanf("%d",&B[i][j]);
		}		
	}
    printf("\nTRIPLET  MATRIX 2\n");
	for(i=0;i<=nz1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",B[i][j]);
		}		
        printf("\n");
    }
    q=1;
    for(i=1;i<=nz1;i++)
    
}