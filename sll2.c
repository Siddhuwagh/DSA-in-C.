// cccept a ll and insert append and firstnode menu driven and display;
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void append(Node **r, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if ((*r) == NULL)
    {
        (*r) = newNode;
    }
    else
    {
        Node *temp = (*r);
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(Node *head)
{
    while (head != NULL)
    {
        printf("%d \n", head->data);
        head = head->next;
    }
}

void insertFirst(Node **r, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = (*r);
    (*r) = newNode;
}

int main()
{
    Node *head = NULL;
    int data;
    int ch;
    while (1)
    {
        printf("\n1.Append \n2.Display\n3.Insert first \n10.Exit\nEnter the choice :\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter a data :");
            scanf("%d", &data);
            append(&head, data);
            break;
        case 2:
        printf("\nAdded Data is :\n");
            display(head);
            
            break;
        case 3:
            printf("Enter a data :");
            scanf("%d", &data);
            insertFirst(&head, data);

            break;
        case 10:
            return 0;
        default:
            printf("Invalid choice");
            break;
        }
    }
}
