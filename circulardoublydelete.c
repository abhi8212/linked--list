#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *newnode,*tail,*head;
void create()
{
     int choice;
     head=NULL;
     while(choice)
     {
         newnode=(struct node*)malloc(sizeof(struct node));
         printf("enter the data\n");
         scanf("%d",&newnode->data);
         newnode->next=NULL;
         newnode->prev=NULL;
         if(head==NULL)
         {
             head=tail=newnode;
             head->next=head;
             head->prev=head;
         }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;

        }
        printf("do u want to continue(0,1)?");
        scanf("%d",&choice);

     }
    

}
void deleteatfirst()
{

    struct node *temp;
    temp=head;
    if(head==NULL)
    {
        printf("the data is empty\n");
    }
    else
    {
    head=head->next;
    tail->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    }

}
void deleteatpos()
{
    int n,i=1;
    struct node *temp;
    printf("enter the pos\n");
    scanf("%d",&n);
    temp=head;
    while(i<n)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
void print()
{
    struct node *temp;
    temp=head;
    while(temp!=tail)
    {
        printf("%d ",temp->data);
        temp= temp->next;
    }
    printf("%d ",tail->data);
}

int main()
{
    create();
    print();
    deleteatfirst();
    print();
    deleteatpos();
    print();
    return 0;

}