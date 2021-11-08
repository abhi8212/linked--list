//delete data of the front of the data;
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode,*head,*temp;
void insert()
{
    int choice;
    head=NULL;
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
            printf("do you want to continue(0,1)?\n");
            scanf("%d",&choice);
        }
   }
}
void printdata()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void delete()
{
    temp=head;
    head=head->next;
    free(temp);
}
int main()
{
   insert();
   prinf("the data before deletion\n");
   printdata();
   printf("the data after deletion\n ");
   delete();
   printdata();
   return 0;
}