// stack implementation using array
#include <stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(){
    int x;
    printf("Enter data: \n");
    scanf("%d",&x);
    if(top==N-1){
        printf("Stack Overflow\n");

    }
    else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    int item;
    if(top==-1){
        printf("stack underflow.\n");
    }
    else{
        item=stack[top];
        top--;
        printf("The popped item is %d\n",item);
    }
}
void peek(){
    if(top==-1){
        printf("The stack is empty.\n");
    }
    else{
        printf("the topmost element is %d\n",stack[top]);
    }
}
void display(){
    int i;
    for(i=top;i>0;i--)
    {
        printf("%d ",stack[i]);
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