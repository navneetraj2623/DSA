#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void insertAtEnd(struct node **head, int value)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head = NULL)
    {
        *head = newNode;
    }

    struct node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *head = NULL;
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 7);
    insertAtEnd(&head, 23);
    insertAtEnd(&head, 6);

    display(head);
    return 0;
}
