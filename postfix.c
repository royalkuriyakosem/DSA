#include<stdio.h>
#include<string.h>
int top=-1,max=50;
char S[50];
void push(char item)
{
    if(top>=max-1)
    {
        printf("Stack overflow");
    }
    else
    {
        top=top+1;
        S[top]=item;
    }
}
char pop()
{
    char item;
    if(top<0)
    {
        printf("Stack underflow");
    }
    else
    {
        item=S[top];
        top=top-1;
        return item;
    }
}
int precedence(char op)
{
    switch (op)
    {
    case'-':
    case'+':return 1;
            break;
    case'*':
    case'/':return 2;
            break;

    case'^':return 3;
            break;
    }
    return 0;
}
void main()
{
    int i,max,j;
    char exp[50],post[50],symbol,op,a;
    printf("Enter the expression: ");
    gets(exp);
    j=0;
    for(i=0;i<strlen(exp);i++)
    {
        symbol=exp[i];
        switch(symbol)
        {
            case'(':push(symbol);
                    break;
            case')':while(S[top]!='(')
                    {
                        post[j]=pop();
                        j++;
                    }
                    a=pop();
                    break;
            case'+':
            case'-':
            case'*':
            case'/':
            case'^':while(precedence(S[top])>=precedence(symbol))
                    {
                        op=pop();
                        post[j]=op;
                        j++;
                    }
                    push(symbol);
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