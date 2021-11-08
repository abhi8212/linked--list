//insertion the node at the specific position;
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
void create()
{
    head=NULL;
    int choice;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        
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
            printf("if you want to contiue(0,1)?\n");
            scanf("%d",&choice);
        }

    }

}
void insertionatpos()
{
    int i=1,pos;
    printf("enter the position\n");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data which you want to insert");
    scanf("%d",&newnode->data);
    temp=head;
    while(i<pos-1)
    {
          temp=temp->next;
          i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
}
//to display the data;
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
    create();
    insertionatpos();
    printlist();
    return 0;
}

