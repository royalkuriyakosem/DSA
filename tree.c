#include<stdio.h>
#include<math.h>
#define MAX_SIZE 5
int a[MAX_SIZE];
void buildtree(int a[],int i,int val)
{
	char ch;
	int lval,rval;
	if(i==0)
		return;
	else
	{
		a[i]=val;
		printf("Left Node of node %d ?(Y/N) :",i);
		scanf(" %c",&ch);
		if(ch=='y'||ch=='Y')
		{
			printf("Enter the value :");
			scanf("%d",&lval);
			buildtree(a,2*i,lval);
		}
		else
			buildtree(a,0,0);
		printf("Right Node of node %d ?(Y/N) :",i);
		scanf(" %c",&ch);
		if(ch=='y'||ch=='Y')
		{
			printf("Enter the value :");
			scanf("%d",&rval);
			buildtree(a,2*i+1,rval);
		}
		else
			buildtree(a,0,0);
	}
}

void display()
{
	int i;
	for(i=1;i<=MAX_SIZE;i++)
	{
		if(a[i] == 0)
		{
			printf("a[%d] = %d  ",i,-1);
		}
		else
		{
			printf("a[%d] = %d  ",i,a[i]);
		}
	}
	printf("\n");
}

void main()
{
		int rval,x,sval;
		printf("Enter the root value :");
		scanf("%d",&rval);
		buildtree(a,1,rval);
		display();
}
