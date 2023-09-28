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
    {
        for(j=1;j<=nz2;j++)
            if(A[i][0]==B[j][0] && A[i][1]==B[j][1])
            {
                C[q][0]=A[i][0];
                C[q][1]=A[i][1];
                C[q][2]=A[i][2]+B[i][2];
                q++;
            }
            else if(A[i][0]==B[j][0])
            {
                if (A[i][1]<B[j][1])
                {   
                    C[q][0]=A[i][0];
                    C[q][1]=A[i][1];
                    C[q][2]=A[i][2]+B[i][2];
                    q++;
                    C[q][0]=B[i][0];
                    C[q][1]=B[i][1];
                    C[q][2]=B[i][2]+B[i][2];
                    q++;
                }
                else
                {
                    C[q][0]=B[i][0];
                    C[q][1]=B[i][1];
                    C[q][2]=B[i][2]+B[i][2];
                    q++;
                    C[q][0]=A[i][0];
                    C[q][1]=A[i][1];
                    C[q][2]=A[i][2]+B[i][2];
                    q++;
                }
            }
            else if(A[i][0]>B[j][0])
            {
                continue;
            }

        
    }
}
    
	