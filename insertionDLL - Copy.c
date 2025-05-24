#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=0,*newNode,*temp,*tail;

void createLL(){
    int choice=1;
    while(choice==1){
        newNode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newNode->data);
        newNode->next=0;
        newNode->prev=0;
        if(head==0){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
        printf("Enter the choice(0/1)");
        scanf("%d",&choice);
        
    }   
}
void display(){
    temp=head;
    while(temp!=0){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

void insertionBeggining(){
    newNode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data u want to insert at the beggining:");
    scanf("%d",&newNode->data);
    newNode->prev=0;
    newNode->next=head;
    head=newNode;
}

void insertionAtEnd(){
    newNode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data u want to insert at the end:");
    scanf("%d",&newNode->data);
    newNode->next=0;
    tail->next=newNode;
    tail=newNode;
}
void insertAtPosition(){
    
}


int main(){
    createLL();
    display();
    insertionBeggining();
    display();
    insertionAtEnd();
    display();
    return 0;
}