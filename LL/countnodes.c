#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    head =0;int choice=1,count=0;
    while(choice)
    {
        newnode= (struct node*)malloc(sizeof(struct node));
        printf("Enter Data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        head=temp=newnode;
        else{
            temp->next= newnode;
            temp=newnode;
        }
        printf("Do you want to continue?(yes=1,no=0)");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0){
        temp=temp->next;
        count++;
    }
    printf("\n The no. of nodes in the list are: %d",count);
}