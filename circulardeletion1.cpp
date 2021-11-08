//deletion of linked list;
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data ;
    struct node *next;

};
struct node *newnode,*tail,*temp;
void creation()
{
     int choice,count=0;
    tail=NULL;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
       
        printf("enter the data\n");
        scanf("%d",&newnode->data);
         newnode->next=NULL;
        if(tail==NULL)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
            printf("do u want to continue(0,1)?\n");
            scanf("%d",&choice);
            count++;
        }
    }
  //  printf("the size of node is %d ",count);
}
//to print
void print()
{
    temp=tail->next;
    while(temp->next!=tail->next)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d \n",temp->data);
}

//delete data from first node;
void deletefirst()
{
    if(tail==NULL)
    {
        printf("the node is empty\n");

    }
    else
    {
        temp=tail->next;
        tail->next=temp->next;
        free(temp);       
    }
}
// delete from last;
//this is wrong;
void deletelast()
{
    struct node *prevnode;
    if(tail==NULL)
    {
        printf("node is empty");
    }
    else
    {
        temp=tail->next;
        while(temp->next!=tail->next)
        {
            prevnode=temp;
            temp=temp->next;
        }
        prevnode->next=tail->next;
        tail=prevnode;
        free(temp);
    }
}
int main()
{
    creation();
    print();
    deletefirst();
    print();
    deletelast();
    print();
    return 0;
}