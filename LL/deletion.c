#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{

    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("\n Do you wish to continue?(yes=1,no=0)");
        scanf("%d", &choice);
    }
    Display(head);
    //Deleting node from beginning:
//     printf("**********************\n");
//     temp=head;
//     head=temp->next;
//     free(temp);
//     Display(head);
//     Deleting from end:
//     printf("\n**********************\n");
//     struct node *prevnode;
//     temp=head;
//     while(temp->next!=0){
//         prevnode=temp;
//         temp=temp->next;
//     }
//     if(temp==head)
//     head=0;
//     else
//     prevnode->next=0;
//     free(temp);
// Display(head);

// delete from a specific position:
struct node *nextnode;
int pos,i=1,count;
count=Count(head);
temp=head;
printf("\n Enter the position:\n");
scanf("%d",&pos);
if(pos>count)
printf("Enter a valid position.\n");
else
{
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}

printf("\n**********************\n");
Display(head);

}






Display(struct node *head)
{
    //printing the list:-
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
} 

Count(struct node* head){
struct node* temp; int count;
temp=head;
while(temp!=0){
    count++;
    temp=temp->next;
}
return count;
}