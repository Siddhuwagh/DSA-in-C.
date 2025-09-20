#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
	int rno;
	char name[100];
	float marks;
}Student;

typedef struct NOde
{
	Student s;
	struct Node *next;
}Node;

void append(Node **r,Student data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode -> s = data;
	newNode -> NULL;
	
	if((*r) == NULL )
		(*r) = newNode;
	else
	{
		Node *temp = (*r);
		
		while(temp -> next != NULL)
		temp = temp -> next;
		temp -> next = newNode;
	}
}

void display(Node *head)
{
	while(head != NULL )
	{
		printf("\n Roll NO :%d",s.rno);
		printf("\n Name    :%d",s.name);
		printf("\n Marks   :%d",s.marks);
				
		head = head -> next;	
	}
}
void insertFirst(Node **r,Student data)
{
	Node *newNode  = (Node *)malloc(sizeof(Node));
	newNode  -> s = data;
	newNode -> next = (*r);
	(*r) = newNode;
}
int main();
{
	Node *head   = NULL;
	int ch;
	Student data;
	
	while(1)	
	{
		printf("1.Append \n2.Insert First \n 3.Display \n  4.Exit \n Enter A choice :		 ");
		scanf("%d",&ch);
		
	switch(ch)
	{
		case 1:
			printf("Enter a Student details :");
			printf("\n ID : ");
			scanf("%d",&data.rno);;
			printf("\nName :");
			scanf("%s",&data.name);
			printf("\n Marks :);
			scanf("%f",&data.marks):
				
			append(&head , data);
			break;
		
		case 2:
			printf("Enter a Student details :");
			printf("\n ID : ");
			scanf("%d",&data.rno);;
			printf("\nName :");
			scanf("%s",&data.name);
			printf("\n Marks :);
			scanf("%f",&data.marks):
			
			insertFirst(&head,data);
			break;
		
		case 3:
			display(head);	
			break;
		case 4:
			return 0;
		default :
			printf("INVVALID CHOICE " );
			break;	
	}
	
}
}