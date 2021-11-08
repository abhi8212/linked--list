#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *temp,*newnode,*head;
//creation of the node;
void creation()
{
    int choice;
    head=NULL;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        newnode->prev=NULL;
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("do you want to continue(0,1)?");
        scanf("%d",&choice);


    }

}

//insertiong the elements at first ;
void insertatfirst()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the element for insert at first\n");
    scanf("%d",&newnode->data);
    newnode->next==NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        head->next=newnode;

    }
    else
    {
        head->prev=newnode;
        newnode->next=head;
        head=newnode;


    }

}
//insertion of the elements at last;
void insertatlast()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the last data to insert\n");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
     newnode->next=NULL;
    temp->next=newnode;
    newnode->prev=temp;
   
}

//insertion of the element at given position;
void insertatpos()
{
    int n,i=1;
    printf("enter the pos to insert the data\n");
    scanf("%d\n",&n);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to insert at given pos\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(n==1)
    {
        insertatfirst();
    }
    else
    {
   
    temp=head;
    while(i<n-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    }
}
//to print the data;
void print()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
}
int main()
{
    creation();
    print();
    insertatfirst();
    print();
    insertatlast();
    print();
    insertatpos();
    print();
    return 0;


}