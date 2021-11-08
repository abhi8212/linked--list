#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head,*newnode,*temp;
void creation()
{
     int choice;
     head=NULL;
    
     while(choice)
     {
         newnode =(struct node*)malloc(sizeof(struct node));
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
//to insertion of new data at last node;

void insertionatend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to insert at last");
    scanf("%d",&newnode->data);
    temp=head;
    newnode->next=NULL;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;

    
    

}

void printlist()
{
    // to print the data;
temp=head;
printf("the data is:");
while(temp!=0)
{
    printf("%d",temp->data);
    temp =temp->next;
}

}

void main()
{
    creation();
    insertionatend();
    printlist();
    
}