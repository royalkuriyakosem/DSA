#include<stdio.h>
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
	low=0;
	high=n-1;
	flag=0;
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
	if(flag==0)
	{
		printf("\nElement NOT found\n");
	}
	else
	{
		printf("\nElement is found at index %d\n",index);
	}
}
	
