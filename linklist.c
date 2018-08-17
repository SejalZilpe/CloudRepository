#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node 
{
    	int regno ; 
	char name[50];
//	char place[50];        
    	struct node *next; 
}*head;
struct node* 
void createList(int n);
void traverseList();
void insertbefore(int,char);
int main()
{
    	int n,regno;
	char name[50];
    	printf("Enter the total number of nodes: ");
    	scanf("%d", &n);
    	createList(n);
	printf("\nEnter data to insert at beginning of the list: ");
    	scanf("%d", &regno);
	gets(name);
    	insertbefore(regno,name);
      	printf("\nData in the list \n");
   	traverseList();
	return 0;
}
void createList(int n)
{
    	struct node *newNode, *temp;
    	int regno, i;
	char name[50],place[50];
   	head = (struct node *)malloc(sizeof(struct node));  
    	if(head == NULL)
    	{
      		
    	}
    	temp = head;
    	for(i=2; i<=n; i++)
    	{
        	newNode = (struct node *)malloc(sizeof(struct node));
		 if(newNode == NULL)
        	{
            		printf("Unable to allocate memory.");
            		break;
        	}
        printf("Enter the data of node %d: ", i);
        scanf("%d", &regno);
	gets(name);
        newNode->regno = regno;
	strcpy(newNode->name ,name);
        newNode->next = NULL; 
        temp->next = newNode; 
        temp = temp->next;    
    }
}

void traverseList()
{
	struct node *temp;
	if(head == NULL)
    	{
        	printf("List is empty.");
        	return;
    	}    
    	temp = head;
    	while(temp != NULL)
    	{
        	printf("Data = %d\n", temp->regno);
        	puts(temp->name);
		temp = temp->next;            
    	}
}

void insertbefore(int regno,char name)
{
	struct node *newNode;
    	newNode = (struct node*)malloc(sizeof(struct node));
    	if(newNode == NULL)
    	{
        	printf("Unable to allocate memory.");
    	}
    	else
    	{
        	newNode->regno = regno;
		strcpy(newNode->name,name); 
        	newNode->next = head;
        	head = newNode;          
        	printf("DATA INSERTED SUCCESSFULLY\n");
    	}
}

