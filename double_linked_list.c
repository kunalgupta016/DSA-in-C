#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    struct node* pre;
    int data;
    struct node* next;

}node;

node* createNode(int data){
    node* newNode = (node*)malloc(sizeof(node));
    if(!newNode){
        printf("jagah nahi mili");
    }
    else{
        newNode->pre = NULL;
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }
}

void insertB(node** head , int data){
    node* newnode = createNode(data);
    // if(head == NULL){
    //     newnode->pre = NULL;
    //     newnode->data = data;
    //     newnode->next = NULL;
    //     *head = newnode;
    // }
    
        newnode->pre = NULL;
        newnode->next = *head;
        *head = newnode;
    

}

void insertE(node** head , int data){
    node* newnode = createNode(data);
    if(*head==NULL){
        newnode->pre = NULL;
        newnode->data = data;
        newnode->next = NULL; 
        *head = newnode;
    }
    else{
        node* temp = *head;
        while(temp->next!=NULL){
            temp = temp->next;

        }
        temp->next = newnode;
        newnode->pre = temp;
    }
}

void insertSp(node** head , int data , int pos){
    node* newnode = createNode(data);
    if(pos==0){
        newnode->data = data;
        newnode->next = NULL;
        newnode->pre = NULL;
        *head = newnode;
    }
    else{
        node* temp = *head;
        for(int i=0;i<pos-1;i++){
            temp = temp->next;
            if(temp==NULL){
                printf("Postion glt hai");
                return;
            }
        }
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->pre = temp;

    }
}


void print(node *s){
    node* x=s;
    while(x!=NULL){
        printf("%d\t",x->data);
        x = x->next;
    }
    printf("\n");
    printf("Success\n");
}

int main(){
    node* head = NULL;
    insertB(&head,10);
    insertB(&head,20);
    insertE(&head,30);
    insertE(&head,40);
    insertSp(&head,25,3);
    print(head);

}