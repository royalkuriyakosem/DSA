#include<stdio.h>
void main()
{
	int A[50],n,choice,ele,pos,index,ele1,flag,ch,i;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d element: ",i+1);
		scanf("%d",&A[i]);
	}
	do
	{
		printf("\n1.insertion\t2.Deletion");
		printf("\nEnter the choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("\nEnter the element to be inserted: ");
					scanf("%d",&ele);
					printf("\nEnter the position of the element: ");
					scanf("%d",&pos);
					index=pos-1;
					for(i=n;i>=pos;i--)
					{
						A[i]=A[i-1];
					}
					A[index]=ele;
					n++;
					break;
			case 2:	printf("\nEnter the element to be deleted: ");
					scanf("%d",&ele1);
					flag=0;
					for(i=0;i<n;i++)
					{
						if(A[i]==ele1)
						{
							flag=1;
							index=i;
							break;
						}
					}
					if(flag==0)
					{
						printf("\nElement NOT found: ");
						
					}
					else
					{
						for(i=index;i<(n-1);i++)
						{
							A[i]=A[i+1];
						}
					}
					n--;
					break;
			default:printf("\nINVALID OPTION");
		}
		printf("\nDo you want to Continue");
		printf("\n1.yes\t2.No: ");
		scanf("%d",&ch);
	}
	while(ch==1);
	printf("\nNEW ARRAY\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
		
}	
