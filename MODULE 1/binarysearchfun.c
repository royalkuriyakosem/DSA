#include<stdio.h>
int search(int A[],int ele,int n)
{
	int low,high,i,flag,mid,index;
    low=0;
	high=n-1;
	flag=0;
    index=-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(A[mid]==ele)
		{
			flag=1;
			index=mid;
			break;
		}
		else if(A[mid]<ele)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
    return index;
}
void main()
{
	int A[50],low,high,i,ele,flag,n,mid,index;
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
    index=search(A,ele,n);
	if(index==-1)
	{
		printf("\nElement NOT found\n");
	}
	else
	{
		printf("\nElement is found at index %d\n",index);
	}
}