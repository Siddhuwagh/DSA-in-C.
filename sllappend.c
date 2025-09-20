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

        (*r) = newNode;
    else
    {
        Node *temp = (*r);
        while (temp->next != NULL)
            temp = temp->next;
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
int main()
{
    Node *head = NULL;
    
    while (1)
    {
        int data,pos,result,ch;
        printf("\n1.Append\n2.Insert First\n3.Display\n4.search\n5.Count\n6.Append\n7.Append\n9.Append\n9.Append\n10.Append\nEnter the choice ");        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter a data :");
            scanf("%d", &data);
            append(&head, data);
            break;
        case 2:
            
        case 3:
          printf("\nAdded Data is :\n");
            display(head);
            break;
        default :
            printf("Invald choice !!");
            break;
        }
    }
}
