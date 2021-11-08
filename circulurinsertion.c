//implementation of circular linked list;
#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node* next;

};
struct node *newnode,*tail,*temp;
//implementation of circular linked list;
void implementation()
{
    tail==NULL;
    int choice;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        if(tail==NULL)
        {
            tail =newnode;
            tail->next=newnode;
            
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode; //to make the circular joint from last node to first node;

        }
        printf("do u want to continue(0,1)?\n");
        scanf("%d",&choice);

       
    }

}

//insertion of data at begning;
void insertionatbeg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("enter the data to insert\n");
    scanf("%d",&newnode->data);
    if(tail==NULL)
    {
        tail=newnode;
        tail->next=newnode;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
    }
}

//insertion at last ;
void insertionatlast()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("enter the data to insert at last\n");
    scanf("%d",&newnode->data);
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

    }

}
//insertion of data at specific position;
void insertionatpos()
{
    struct node *prevnode;
    int n,i=1;
    printf("enter the pos to insert data\n");
    scanf("%d",&n);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("enter the data to insert at pos\n");
    scanf("%d",&newnode->data);
    temp=tail->next;
    while(i<n-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;



}
//to print the data;
void print()
{
     //to print the data;
        temp=tail->next;
        while(temp->next!=tail->next)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        //to print the last data;
        printf("%d ",temp->data);

}


int main()
{
    implementation();
    print();
    //insertionatbeg();
    //insertionatlast();
    //print();
    insertionatpos();
    print();
    return 0;
    
    

}