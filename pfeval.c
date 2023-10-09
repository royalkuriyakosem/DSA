#include<stdio.h>
#include<string.h>
#include<math.h>
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
void eval(char symbol)
{
    int y,x,result;
    switch (symbol)
    {
    case'-':y=pop();
            x=pop();
            result=x-y;
            push(result);
    case'+':y=pop();
            x=pop();
            result=x+y;
            push(result);
    case'*':y=pop();
            x=pop();
            result=x*y;
            push(result);
    case'/':y=pop();
            x=pop();
            result=x/y;
            push(result);
    case'^':y=pop();
            x=pop();
            result=pow(x,y);
            push(result);
    }
}
void main()
{
    int i,max,j,result;
    char pf[50],post[50],symbol,op,a;
    printf("Enter the pfression: ");
    gets(pf);
    for(i=0;i<strlen(pf);i++)
    {
        symbol=pf[i];
        switch(symbol)
        {
            case'+':
            case'-':
            case'*':
            case'/':
            case'^':eval(symbol);
                    

            default:push(symbol);
                    break;
        }
        
    }
    result=pop();
    printf("%d",result);
}