#include<stdio.h>
#define max_size 5

int queue[max_size],rear=-1,front=-1;
void enqueue(int item)
{
    if(rear==max_size-1)
        printf("queue is full");
    else
    {
        if(front==-1)
            front=0;
        rear++;
        queue[rear]=item;
    }
    
}
int dequeue()

{
    if(front==-1)
    {
        printf("Deletion NOT possible");
        return -1;
    }
    else
    {
        int del_item;
        del_item=queue[front];
        printf("%d is the deleted item",del_item);
        if(front==rear)
            front=-1,rear=-1;
        else    
            front++;
        return del_item;
    }
}
#include<stdio.h>
void main()
{
	int n,choice,item,ch,i;
	do
	{
		printf("\n1.insertion\t2.Deletion\t3.Display");
		printf("\nEnter the choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("\nEnter the element to be inserted: ");
					scanf("%d",&item);
					enqueue(item);
					break;
			case 2: item=dequeue();
					break;
            case 3: for(i=front;i<=rear;i++)
                        printf("%d",queue[i]);
					break;
			default:printf("\nINVALID OPTION");
		}
		printf("\nDo you want to Continue");
		printf("\n1.yes\t2.No: ");
		scanf("%d",&ch);
	}
	while(ch==1);
}