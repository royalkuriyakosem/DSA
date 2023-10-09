#include<stdio.h>
void main()
{
	int A[50][50],B[50][50],i,j,q;
	int C[50][50],nz1,nz2,k;
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
    if(A[0][0]==B[0][0] && A[0][1]==B[0][1])
    {
        i=1,j=1,k=0;
        while(i<=nz1 && j<=nz2)
        {
            if(A[i][0]==B[j][0])
            {
                if(A[i][1]==B[j][1])
                {   
                    k++;
                    C[k][0]=A[i][0];
                    C[k][1]=A[i][1];
                    C[k][2]=A[i][2] + B[j][2];
                    i++,j++;
                }
                else if(A[i][1]<B[j][1])
                {   
                    k++;
                    C[k][0]=A[i][0];
                    C[k][1]=A[i][1];
                    C[k][2]=A[i][2];
                    i++;
                    k++;
                    C[k][0]=B[j][0];
                    C[k][1]=B[j][1];
                    C[k][2]=B[j][2];
                    j++;   
                }
                else if(A[i][1]>B[j][1])
                {   
                    k++;
                    C[k][0]=B[j][0];
                    C[k][1]=B[j][1];
                    C[k][2]=B[j][2];
                    j++;
                    k++;
                    C[k][0]=A[i][0];
                    C[k][1]=A[i][1];
                    C[k][2]=A[i][2];
                    i++;    
                        
                }
            }
            else if(A[i][0]<B[j][0])
            {
                k++;
                C[k][0]=A[i][0];
                C[k][1]=A[i][1];
                C[k][2]=A[i][2];
                i++; 
            }
            else if(A[i][0]>B[j][0])
            {
                k++;
                C[k][0]=B[j][0];
                C[k][1]=B[j][1];
                C[k][2]=B[j][2];
                j++;
            }
        }
    }
    C[0][0]=B[0][0];
    C[0][1]=B[0][1];
    C[0][2]=k;
    printf("\nResultant TRIPLET  MATRIX \n");
	for(i=0;i<=k;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",C[i][j]);
		}		
        printf("\n");
    }
}
    
    
	