#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node*next;
}node;
node*create(int x)
{
    node*temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void display(node*head)
{
    node*c=head;
    do
    {
         printf("%d",c->data);
         c=c->next;
    }
     while(c!=head);
     {
        printf("\n");
     }
}
node*insert_beg(node*head,int x)
{
    node*temp=create(x);
    node*last=head;
    while(last->next!=head)
    {
        last=last->next;
    }
    temp->next=head;
    last->next=head;
    return temp;
}
node*insert_l(int x,node*head)
{
    node*temp=create(x);
    node*c=head;
    while(c->next!=head)
    {
        c=c->next;
    }
    c->next=temp;
    temp->next=head;
    return head;
}
node*pos(node*head,int x,int pos)
{
    node*temp=create(x);
    node*c=head;
    for(int i=i;i<=pos-2;i++)
    {
        c=c->next;
    }
    temp->next=c->next;
    c->next=temp;
    return head;

}
node*delete_pos(node*head,int pos)
{
    node*c=head;
    for(int i=1;i<=pos-2;i++)
    {
        c=c->next;
    }
    node*temp=c->next;
    c->next=c->next->next;
    free(temp);
    return head;
}
int main()
{
    node*head=create(10);
    node*first=create(20);
    node*second=create(30);
    node*third=create(30000);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=head;
    display(head);
    head=delete_pos(head,2);
    printf("after deletion");
    display(head);
    return 0;

}