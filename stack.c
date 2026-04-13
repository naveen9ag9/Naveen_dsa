#include<stdio.h>
#include<stdlib.h>
#define MS 6
typedef struct stack
{
    int top;
    int arr[MS];
    int size;
}stack;
void init(stack*s)
{
    s->size=0;
    s->top=-1;
}
void push(stack*s,int x)
{
    if(s->top==MS-1)
    {
        printf("Not possible\n");
        return;
    }
    s->size++;
    s->arr[++s->top]=x;
}
void display(stack*s)
{
    for(int i=0;i<=s->top;i++)
    {
        printf("%d\n",s->arr[i]);
    }
    printf("\n");
}
void pop(stack*S)
{
    if(s->top==-1)
    {
        printf("underflow condition\n");
        return;
    }
    --s->top;
}
int getsize(stack*s)
{
    int size=-s->top+1;
    return size;
}
int getpeek(stack*s)
{
    return s->arr[s->top];
}
int main()
{
    stack s;
    init(&s);
    push(&S,10);
    push(&S,20);
    push(&S,30);
    push(&S,40);
    push(&S,50);
    push(&S,60);
    display(&s);
    printf("Size---> %d\n", getSize(&s));
    printf("Top---> %d\n", getPeek(&s));
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    printf("Size---> %d\n", getSize(&s));
    printf("Top---> %d\n", getPeek(&s));


}
    