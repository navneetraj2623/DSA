#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=0,*newNode,*temp;

void createLL(){
    int choice=1;
    while(choice==1){
        newNode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newNode->data);
        newNode->next=0;
        newNode->prev=0;
        if(head==0){
            head=temp=newNode;
        }
        else{
            temp->next=newNode;
            newNode->prev=temp;
            temp=newNode;
        }
        printf("Enter the choice(0/1)");
        scanf("%d",&choice);
        
    }   
}
void display(){
    temp=head;
    while(temp->next!=0){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("->NULL");
}


int main(){
    createLL();
    display();
    return 0;
}