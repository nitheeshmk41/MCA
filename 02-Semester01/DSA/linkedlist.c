#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node *head = NULL;

void display(){
    struct node *temp;
    temp = head;
    if(temp == NULL) {
        printf("Linkedlistt is empty!!");
        return;
    }
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insertBegin(){
    struct node * newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter data at begining: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(head == NULL) {
        head = newnode;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
}

void insertEnd(){
    struct node * newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    printf("Enter data to insert at the end : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;

    if(head == NULL) head = newnode;
    else{
        struct node *temp = head;
        while(temp->next != NULL){
            temp= temp->next;
        }
        temp->next = newnode;
    }
}

void insertAtSpecificPos(int pos){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value to insert on %d-position : ");
    scanf("%d",newnode->data);
    newnode->next = NULL;

    if(pos == 0){
        newnode->next = head;
        head = newnode;
        return;
    }
    
    struct node *temp = head;
        for(int i = 0; i < pos - 1; i++){
        if(temp == NULL){
            printf("Position out of bounds!\n");
            free(newnode);
            return;
        }
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

int main(){
    insertBegin();
    display();
    insertEnd();
    display();
    insertAtSpecificPos(0);
    display();
}