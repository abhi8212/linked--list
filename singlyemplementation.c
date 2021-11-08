#include<stdio.h>
#include<stdlib.h>
//to assign nodes which contains data and adress;

struct node
{
    int data;
    struct node *next;
};
struct node *head ,*newnode,*temp;
void create()
{

    //head stores the adress of the initial nodes


int choice;
head=NULL;
while(choice)
{
    // this pointer is store the adress of node;
    //initialize the node with pointer;
newnode = (struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
//data can not be access directly;
                                                                                                                                                                  
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)

    head=temp=newnode;

else

 temp->next=newnode;
    temp=newnode;
printf("do you want to continue(0,1)?");
scanf("%d",&choice);


}
}
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
    printlist();
}







