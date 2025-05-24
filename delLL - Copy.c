#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL, *newNode,*temp;


void createLL(){
    newNode=(struct node*)malloc(sizeof(struct node));
    int choice=1;
    
    while(choice==1){
        printf("enter the data\n");
        scanf("%d",&newNode->data);
        if(head==0){
            head=temp=newNode;
        }
        else{
            temp=newNode;
            temp->next=newNode;
            newNode->next=NULL;

        }
        printf("continue(0\1)");
        scanf("%d",&choice);
    }
}
void displayLL(){
    temp=head;
    while(temp->next!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}


int main(){
    createLL();
    displayLL();
    return 0;
}