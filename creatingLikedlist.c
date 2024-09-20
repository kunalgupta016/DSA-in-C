#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;

// node* createNode(int new_data){
//     node *newnode;
//     newnode=(node*)malloc(sizeof(node));
//     if(!newnode){
//         printf("Memory is not allocated ");
//         exit(0);
//     } 
//     newnode->data=new_data;
//     newnode->next=NULL;
//     return newnode;
// }

// void insertNodeFromHead(node **head,int data){
//     node* newnode = createNode(data);
//     if(!newnode){
//         printf("NODE IS NOT CREATED");
//     }
//     if(*head==NULL){
//         *head= newnode;
//     }
    
//     newnode->next = *head;
//     *head = newnode;
    
    
// }

void push(node** head,int ndata){
    node* new=(node*)malloc(sizeof(node));
    new->data = ndata;
    new->next = *head;
    *head = new;
    
}

void deleteNode(node** head){
    node* temp;
    temp = *head;

    *head = (*head)->next;    
    free(temp);

}

// void push(node **stack,int Data){
//     insertNodeFromHead(stack,Data);
// }

void pop(node **stack){
    if(*stack==NULL){
        printf("Underflow");
    }
    else{
        deleteNode(stack);
    }
}

void printStack(node *stack) {
    node *x = stack;
    if(x!=NULL){
    while (x!= NULL) {
        printf("%d\t", x->data);
        x = x->next;
    }
    }

    else{
        printf("Stack is empty");
    }

}

void peek(node *stack){
    printf("%d\n",stack->data);
}

int main(){
node *head = NULL;
for(int i=0;i<5;i++){
    push(&head,i*10);
}

peek(head);   
pop(&head);
printStack(head);

}