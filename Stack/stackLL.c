#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=0;
void push(){
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
     printf("Enter data:\n");
     scanf("%d",&new->data);
     new->link=top;
     top=new;
}
void display(){
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("List is empty.\n");
    }
    else{
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}
void pop(){
    struct node* temp;
    temp=top;
    if(top==0)
    {
        printf("Stack underflow.\n");

    }
    else{
        printf("the popped element is %d \n",temp->data);
        top=top->link;
        free(temp);
    }

}
void peek(){
    if(top==0){
        printf("Stack is empty.\n");
    }
    else{
        printf("The top most element is: %d \n",top->data);
    }
}
void main()
{
    int choice;
    do
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            choice=0;
            break;
        default :
            printf("Enter valid choice.\n");
        
        }
    } while (choice != 0);
}