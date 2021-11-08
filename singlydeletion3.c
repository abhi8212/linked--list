#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
//creation of linked list
struct node *head,*newnode;
void create()
{
    struct node*temp;
    int choice;
    head=NULL;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            printf("do you want to create next node(0,1)?\n");
            scanf("%d",&choice);
        }
    
    }
    
}
//deletion of node at specific position;
void deleteatpos()
{
    struct node *temp,*prevnode;
    temp=head;
    int i=1,pos;
    printf("enter the postion to delete the node\n");
    scanf("%d",&pos);
    while(i<pos)
    {
        prevnode=temp;
        temp=temp->next;
        i++;
    }
 //   printf("%d ",temp->data);
    prevnode->next=temp->next;
    free(temp);
}


void print()
{
    struct node* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    create();
    print();
    deleteatpos();
    print();
    return 0;

}