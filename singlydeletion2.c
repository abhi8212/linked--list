//delete the data from the end;
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
struct node *newnode,*temp,*head;
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
            printf("do you want to continue(0,1?");
            scanf("%d",&choice);
        }
    }
}
//to printdata;
void print()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void delete()
{
    struct node *prevnode;
    temp=head;
    while(temp->next!=NULL)
    {
        prevnode=temp;
        temp=temp->next;
    }
    prevnode->next=NULL;
    free(temp);

}
int main()
{
    insert();
    printf("before deletion\n");
    print();
   delete();
    printf("after deletion\n");
    print();
    return 0;
}