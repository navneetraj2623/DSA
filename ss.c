#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;
struct node* temp;
struct node* newnode;
void create(){
    int choice=1;
    head=NULL;
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
            newnode->next=NULL;
            temp=newnode;
        }
        printf("enter 1 to continue and 0 to exit");
        scanf("%d",&choice);

    }
    temp=head;
        while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main(){
    create();
    return 0;
};