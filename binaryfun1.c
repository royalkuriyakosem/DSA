#include<stdio.h>
int search(int A[],int e,int num)
{	int low,high,flag,mid;
	low=0;
	high=num-1;
	flag=-1;
	while(low<=high)
	{
		mid=((low+high)/2);
		if (A[mid]==e)
		{
			flag=mid;
			
		}
		else if(A[mid]<e)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return flag;
}
void main()
{
	int A[50],low,high,i,ele,f,n,mid,index;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the sorted elements");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d element: ",i+1);
		scanf("%d",&A[i]);
	}
	printf("\nARRAY\n");
	for(i=0;i<n;i++)
	{
		printf("A[%d]:%d\t",i,A[i]);
	}
	printf("\nEnter the number to be searched: ");
	scanf("%d",&ele);
	f=search(A,ele,n);
	if(f==0)
	{
		printf("\nElement NOT found\n");
	}
	else
	{
		printf("\nElement is found at index %d\n",f);
	}
}
