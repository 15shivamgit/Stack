#include <stdio.h>
//#include <stdlib.h>
#define MAXSIZE 5

int top = -1;
int stack[MAXSIZE];
void push();
void pop();
void display();

int main(){
    int choice;
    printf("1->Push\n2->Pop\n3->Display\n4->Exit\n");
    while(1){
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}

void push(){
    int item;
    if(top == MAXSIZE-1){
        printf("Stack is full\n");
    }else{
        printf("Enter the element to push: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
}

void pop(){
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Popped element is %d\n", stack[top]);
        top--;
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements are: ");
        for(int i = 0; i <= top; i++){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}