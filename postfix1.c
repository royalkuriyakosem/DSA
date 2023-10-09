#include<stdio.h>
#include<string.h>
#define max_size 50
char S[max_size];
int top=-1;
void push(char item)
{
	if(top>=max_size-1)
	{
		printf("\nStack overflow");
	}
	else
	{
		top++;
		S[top]=item;
	}
}
char pop()
{
	char item;
	if(top<0)
	{
		printf("\nStack underflow");
	}
	else
	{
		item=S[top];
		top--;
		return item;
	}
}
int precedence(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-':return 1;
				 break;
		
		case '*':
		case '/':return 2;
				 break;
		case '^':return 3;
			     break;
	}
	return 0;
}
void main()
{
	int n,choice,item,i,ch,j;
	char in[50],post[50],op,a,symbol;
	printf("\nEnter the infix expression: ");
	gets(in);
    j=0;
	for(i=0;i<strlen(in);i++)
	{
		symbol=in[i];
		switch(symbol)
		{
			case '+':
			case '-':
			case '*':
			case '/':while(precedence(symbol)<=precedence(S[top]))
					{
						op=pop();
						post[j]=op;
						j++;
					}	
					push(symbol);
					break;
			case '^':while(precedence(symbol)<precedence(S[top]))
					{
						op=pop();
						post[j]=op;
						j++;
					}	
					push(symbol);
					break;
			case '(':push(symbol);
					 break;
			case ')':while(S[top]!='(')
					{
						op=pop();
						post[j]=op;
						j++;
					}
					a=pop();
					break;
			default:post[j]=symbol;
					j++;
                    break;
					
		}
	}
	while(top>=0)
	{
		op=pop();
		post[j]=op;
	    j++;
	}
	post[j]='\0';
	for(i=0;i<strlen(post);i++)
    {
        printf("%c",post[i]);
    }
	
}