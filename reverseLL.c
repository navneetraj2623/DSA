#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*newNode,*temp;
void create(){
    int choice=1;
    while(choice==1){
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data\n");
        scanf("%d",&newNode->data);
        if(head==NULL){
            head=temp=newNode;
        }
        else{
            temp->next=newNode;
            newNode->next=NULL;
            temp=newNode;
        }
        printf("continue(0/1)");
        scanf("%d",&choice);
    }
}

void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

void reverse(){
    struct node *back=NULL,*curr,*forward;
    curr=head;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=back;
        
        forward->next=curr;

    }
}




int main(){
    create();
    display();
    return 0;
}

