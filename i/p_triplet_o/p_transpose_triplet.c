#include<stdio.h>
void main()
{
    int A[50][3],i,j,temp,nz,k;
    printf("Enter the number of non-zero elements: ");
    scanf("%d",&nz);
    printf("\nEnter the Triplet array");
    for(i=0;i<=nz;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<=nz;i++)
    {
        for(j=0;j<(nz-1);j++)
        {
            for(k=0;k<(nz);k++)
            {
                if((A[i][1])>(A[i][1]))
                {
                    temp=A[i][3];
                    A[i][3]=A[i+1][3];
                    A[i+1][3]=temp;
                }
            }
        }
    }
    for(i=0;i<=nz;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
}