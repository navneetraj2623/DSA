#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* temp;
struct node* newnode;
void create(){
    int choice=1;
    
    while(choice){
        newnode=(struct node*) malloc (sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&newnode->data);
        if(head==NULL){
            head=temp=newnode;
           newnode->next=NULL;
        }
        else{
            temp->next=newnode;
            temp=newnode;
            newnode->next=NULL;
        }
        scanf("%d",&choice);

    }}

void print(){
    temp=head;
        while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main(){
    create();
    print();
    return 0;
};