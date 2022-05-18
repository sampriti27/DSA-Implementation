//creating a linkedlist and displaying all the ;elements;

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{

    struct node *head, *newnode, *temp, *insertnode;
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
    //insertion at the beginning
    //  insertnode = (struct node*)malloc(sizeof(struct node));
    //  printf("Enter the data you want to insert: \n");
    //  scanf("%d",&insertnode->data);
    //  insertnode->next=head;
    //  head= insertnode;
    //  Display(head);
    // x = Insert_at_begin(head);
    // Display(x);

    // insertion at the end:-
    // insertnode = (struct node*)malloc(sizeof(struct node));
    //  printf("\nEnter the data you want to insert: \n");
    //  scanf("%d",&insertnode->data);
    //  insertnode->next=0;
    //  //traverse till end;
    //  temp=head;
    //  while(temp->next!=0)
    //  {
    //      temp=temp->next;
    //  }
    //  temp->next=insertnode;
    //  Display(head);

    //insertion at a particular position
    int pos,count,i=1;
    count= Count(head);
    // printf("%d",count);
    insertnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the position you want to insert: \n");
    scanf("%d",&pos);
    if(pos>count)
    printf("Invalid position \n");
    else{
        temp=head;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
 printf("\nEnter the data you want to insert: \n");
    scanf("%d", &insertnode->data);
    insertnode->next=temp->next;
    temp->next=insertnode;
    }
    Display(head);
   
}

// struct node *Insert_at_begin(struct node *head)
// {
//     struct node *newnode, *temp;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     printf("Enter the data you want to insert in the beginning:\n");
//     scanf("%d", &newnode->data);
//     newnode->next = head;
//     head = newnode;
//     return head;
// }
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