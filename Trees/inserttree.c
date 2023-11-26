#include<stdio.h>
#include<math.h>
#define MAX_SIZE 3
int a[MAX_SIZE+1];
void buildtree(int a[],int i,int val)
{
	char ch;
	int lval,rval;
	a[i]=val;
	if (2*i<=MAX_SIZE)
	{
		printf("Do you want a left node at %d position (y/n): ",2*i);
		scanf(" %c",&ch);
		if(ch=='y' || ch=='Y')
		{
			printf("Enter the value of left node at %d position: ",2*i);
			scanf("%d",&lval);
			buildtree(a,2*i,lval);
		}
			
	}
	if(2*i+1<=MAX_SIZE)
	{
		printf("Do you want a right node at %d position (y/n): ",2*i+1);
		scanf(" %c",&ch);
		if(ch=='y' || ch=='Y')
		{
			printf("Enter the value of right node at %d position: ",2*i+1);
			scanf("%d",&rval);
			buildtree(a,2*i+1,rval);
		}
	}
}
void display()
{
	int i;
	printf("The array representation corresponding to the tree is\n");
	for(i=1;i<=MAX_SIZE;i++)
	{
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}
		else
		{
			printf("_ ");
		}
	}
	printf("\n");
}
int search(int a[],int i,int val)
{
    int x;
    if(a[i]=val)
        return i;
	if (2*i<=MAX_SIZE)
	{
        x=search(a,2*i,val);
	}
	if(2*i+1<=MAX_SIZE)
	{
		x=search(a,2*i+1,val);
	}
    if(i==MAX_SIZE)
        return 0;
}
void main()
{
	int root_val,index,val;
	printf("Enter the value of root node: ");
	scanf("%d",&root_val);
	buildtree(a,1,root_val);
	display();
    printf("Enter the element to be searched: ");
	scanf("%d",&val);
    index=search(a,1,val);
    if(index==0)
        printf("\nElement NOT found");
    else
        printf("\nElement found at %d",index);

}        