#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;   
};
void insertBiginning(struct node **head,int value){

    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=*head;
    *head=newNode;
}
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    struct node* head=NULL;
    insertBiginning(&head,30);
    insertBiginning(&head,34);
    insertBiginning(&head,39);

    display(head);
    return 0;
}
