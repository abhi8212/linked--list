#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *head,*newnode,*temp;
//creation of node
void creation()
{
    int choice;
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
        head=temp=newnode;

    }
    else
    {
        newnode->prev=temp;
        temp->next=newnode;
        temp=newnode;
    }
    printf("do u want to continue(0,1)?\n");
    scanf("%d",&choice);

}

}
//deletion of node at first;
void deleteatfirst()
{

    temp=head;
    if(head==NULL)
    {
        printf("the list empty\n");
    }
    else
    {
    head=head->next;
    head->next->prev=NULL;
    free(temp);
    }
}
//delete at last;
void deleteatlast()
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->prev->next=NULL;
    free(temp);
}
//delete at specific postion;
void deleteatpos()
{
    int n,i=1;
    printf("enter the postion to delete\n");
    scanf("%d",&n);
    temp=head;
    while(i<n)
    {
        temp=temp->next;
        i++;

    }
    //assume first point the next pointer and then try to back using their prevnode;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}

//print;
void print()
{
    temp=head;
    if(head==NULL)
    {
        printf("the list is empty\n");

    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;   
        }
    }
}
int main()
{
    creation();
    printf("first create\n");
    print();
    printf("first delete\n");
   deleteatfirst();
   
    print();
    printf("last delete\n");
    deleteatlast();
    print();
    deleteatpos();
    printf("delete at pos\n");
    print();
    return 0;
}