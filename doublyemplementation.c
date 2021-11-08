//emplementation of linked list doubly;
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*newnode;

void create()
{
    head=NULL;
    struct node *temp;
    //choice is included for linked the more than one data with each other;
    int choice;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        //when the first node is created if condition is applied;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
             printf("do you want to continue (0,1)?");
        scanf("%d",&choice);
        }
       
    }
}
//to print the data;
void display()
{
    struct node *temp;
    temp=head;
    printf("the data is :\n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

void main()
{
    create();
    display();

}
