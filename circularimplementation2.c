#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*tail,*newnode;
void create()
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
        printf("do you want to continue(0,1)?");
        scanf("%d",&choice);


    }
}
//to diplay;
void print()
{
    struct node *temp;
    temp=head;
    while(temp!=tail)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",tail->data);
}
//main function
int main()
{
    create();
    print();
    return 0;

}