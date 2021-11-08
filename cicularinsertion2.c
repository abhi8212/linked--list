#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
    
};
struct node *newnode,*head,*tail;
void create()
{
    int choice ;
    head==NULL;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        newnode->prev=NULL;
        printf("enter the data\n");
        scanf("%d",&newnode->data);
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
        printf("do u want to continue\n?");
        scanf("%d",&choice);
    }
}
//print the data;
void print()
{
    struct node *temp;
    temp=head;
    while(temp!=tail)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",tail->data);
}
//insertion of data at front;
void insertatfirst()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=tail;
    tail->next=newnode;
    head=newnode;

}
//insertion of data at last;
void insertatlast()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->prev=tail;
    newnode->next=head;
    head->prev=newnode;
    tail=newnode;
}
//insertion at specific position
void insertatpos()
{
    int n,i=1;
    printf("enter the pos");
    scanf("%d",&n);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to insert at pos %d ",n);
    scanf("%d",&newnode->data);
    struct node *temp;
    temp=head;
    while(i<n)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp;
    temp->prev->next=newnode;
    newnode->prev=temp->prev;
    temp->prev=newnode;


}
int main()
{
    create();
    print();
    insertatfirst();
    print();
    insertatlast();
    print();
    insertatpos();
    print();
    return 0;

}