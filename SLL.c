#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *new,*ptr,*head=NULL,*temp;
void insertfront(int data)
{	
	if(head==NULL)//linked list is empty
	{	
		head=new;
		head->data=data;
		head->link=NULL;
	}
	else
	{
		temp=head;
		head=new;
		head->data=data;
		head->link=temp;
	}
}
void insertrear(int data)
{
	if(head==NULL)//linked list is empty
	{	
		head=new;
		head->data=data;
		head->link=NULL;
	}
	else
	{
		ptr=head;
		while(ptr->link!=NULL)
			ptr=ptr->link;
		ptr->link=new;
        new->data=data;
		new->link=NULL;
	}
}
void main()
{	int data,choice,i,ch,del_item;
	do
	{
		printf("\n1.Insertion via front\t2.Insertion via end\t3.Display");
		printf("\nEnter the choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("\nEnter the data: ");
					scanf("%d",&data);
					new=(struct node *)malloc(sizeof(struct node));
					insertfront(data);
					break;
			case 2:	printf("\nEnter the data: ");
					scanf("%d",&data);
					new=(struct node *)malloc(sizeof(struct node));
					insertrear(data);
					break;
			case 3: printf("\nLINKED LIST\n");
                    if(head==NULL)
                        printf("Linked List is Empty");
                    else
                    {	
                        ptr=head;
                        while(ptr->link!=NULL)
                        {
                            printf("%d:%d\t",ptr->data,ptr->link);
                            ptr=ptr->link;
                        }
                        printf("%d:NULL\t",ptr->data);
                    }
                    break;
			default:printf("INVALID OPTION");
		}
		printf("\nDo you want to Continue\n");
		printf("1.Yes\t2.No\t:");
		scanf("%d",&ch);
	}
	while(ch==1);
}
