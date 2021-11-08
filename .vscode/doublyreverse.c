//reverse the doubly linked list;
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *head,*temp,*newnode;
void insertion()
{
    int choice;
    head==NULL;
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
            printf("do u want to continue (0,1)?");
            scanf("%d",&choice);
        }

    }
}
//to print the data;
void print()
{
    temp=head;
    while (temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }    
}
//funtion for reverse print
void reverse()
{
    struct node* current;
    temp=NULL;
    current =head;
    while(current!=NULL)
    {
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }
    if(temp!=NULL)
    {
        head=temp->prev;
    }

}

//main funtion
int main()
{
    insertion();
    printf("before the reverse\n");

    print();
    reverse();
    printf("after the reverse\n");
    print();
    return 0;
}