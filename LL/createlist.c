//creating a linkedlist and displaying all the elements.

#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node{
    int data;
    struct node* next;
};
struct node* head,*newnode,*temp;
 head=0;
int choice=1;

while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
   
if(head==0)
{
head=temp=newnode;
}
else
{
    temp->next=newnode;
    temp = newnode;
}
printf("\n Do you wish to continue?(yes=1,no=0)");
scanf("%d",&choice);


}
//printing the list:-
temp=head;
while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;

}

}