#include<stdio.h>
#define max_size 5

int queue[max_size],rear=-1,front=-1;
void enqueuerear(int item)
{
    if(front==(rear+1)%max_size)
        printf("queue is full");
    else if(front==-1)
    {
        rear=0;
        front=0;
        queue[rear]=item;
    }
    else
    {
        rear=(rear+1)%max_size;
        queue[rear]=item;
    }
}
int dequeuefront()

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
            front=(front+1)%max_size;
        return del_item;
    }
}
void enqueuefront(int item)
{
    int temp;
    if(front==-1)
    {
        rear=0;
        front=0;
        queue[rear]=item;
    }
    else 
    {
        if(front==0)
        {
            temp=max_size-1;
        }
        else
        {
            temp=front-1;
        }
        if(temp==rear)
        {
            printf("Queue is full");
        }
        else
        {
            front=temp;
            queue[front]=item;
        }
    }
}
int dequeuerear()
{
    int temp,del_item;
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else 
    {
        del_item=queue[front];
        printf("%d is the deleted item",del_item);
        if(front==rear)
        {
            rear=-1;
            front=-1;
        }
        else if(rear==0)
        {
            rear=max_size-1;
        }
        else
        {
            rear=rear-1;
        }
        return del_item;
    }
}
#include<stdio.h>
void main()
{
	int n,choice,item1,item2,item,ch,i;
	do
	{
		printf("\n1.enqueuefront\t2.enqueuerear\t3.dequeuefront\t4.dequeuerear\t5.display");
		printf("\nEnter the choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("\nEnter the element to be inserted: ");
					scanf("%d",&item);
					enqueuefront(item);
					break;
            case 2:	printf("\nEnter the element to be inserted: ");
					scanf("%d",&item);
					enqueuerear(item);
					break;        
			case 3: item1=dequeuefront();
					break;
            case 4: item2=dequeuerear();
					break;
            case 5: for(i=0;i<=4;i++)
                    {   if(queue[i]!=0);
                            printf("%d",queue[i]);
                    }
					break;
			default:printf("\nINVALID OPTION");
		}
		printf("\nDo you want to Continue");
		printf("\n1.yes\t2.No: ");
		scanf("%d",&ch);
	}
	while(ch==1);
}