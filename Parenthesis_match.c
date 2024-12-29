#include<stdio.h>
#include<stdlib.h>

struct stack {
int top;
int size;
char *arr;
};
int isEmpty(struct stack *s) {
    if(s->top==-1)
    return 1;
    else
    return 0;
}
int isFull(struct stack *s) {
    if(s->top==s->size-1)
    return 1;
    else 
    return 0;
}
void push(struct stack *s,char ch)
{
if(isFull(s))
{
    printf("Stack Overflow");
} else{
    s->top++;
    s->arr[s->top]=ch;
}
}
int pop(struct stack *s)
{
if(isEmpty(s))
{
    printf("Stack Underflow");
    return -1;
} else {
char ch=s->arr[s->top];
s->top--;
return ch;
}
}
int parenthesis(char * str)
{
struct stack *s;
s->size=100;
s->top=-1;
s->arr=(char *)malloc(s->size * sizeof(char));

for(int i=0;str[i]!='\0';i++)
{
    if(str[i]=='(')
    {
    push(s,'(');
    }

else if(str[i]==')')
{
    if(isEmpty(s))
    {
    return 0;
    }
    pop(s);
}
}
if(isEmpty(s))
{
return 1;
} else{
return 0;
}
}
void main()
{
char * str="514821479*(4141414)";
if(parenthesis(str))
{
    printf("Parenmthesis matched\n");
} 
else{
printf("Parenthesis didn't match\n");
}
}