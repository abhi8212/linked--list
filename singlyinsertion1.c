//insert the new data at the begning in the singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head ,*newnode,*temp;

void printlist()
{
printf("the elements after the inserting of the new data is: \n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;

    }
}

//to creation;
void creation()
{
     int choice ;
   
    head=NULL;
    //for creation linked list list and implement the data;
    while(choice)
    {
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
        printf("do you want to continue(0,1)?");
        scanf("%d",&choice);
    }
    }

}

void insertionatfirst()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data which have to insert the data\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;

    
}

void main()
{
    creation();
    printf("the data before insertion\n");
    printlist();
    insertionatfirst();
    printf("the data is after insertion\n");
    printlist();
   
}