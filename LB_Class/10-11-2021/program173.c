#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}NODE, *PNODE, **PPNODE;

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head = Head->next;
	}
	printf("NULL\n");
}


int Count(PNODE Head)
{
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head->next;
	}
	return iCnt;
}

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
		
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{	
		*Head = newn;
	}
	else
	{
		newn->next=*Head;
		*Head = newn;
	}	
	
}

void InsertLast(PPNODE Head, int no)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	newn = (PNODE)malloc(sizeof(NODE));
		
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{	
		*Head = newn;
	}
	else
	{
		while(temp->next != NULL)
		{
		temp = temp->next;
		}
		temp->next = newn;
	}	
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp = *Head;
	
	if(*Head != NULL)
	{
		*Head = (*Head)->next;
		free(temp);
	}	

}

void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head == NULL)
	{			
		return;
	}
	else if((*Head)->next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		while(temp->next->next != NULL)
		{	
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void InsertAtPos(PPNODE Head, int no, int pos)
{
	int size = 0, i = 0;
	PNODE newn = NULL;
	PNODE temp = *Head;

	size = Count(*Head);
	
	if((pos < 1) || (pos >(size+1)) ) // Fliter for invalid position
	{
		printf("Invalid Position \n");
		return;	
	}
	
	if(pos == 1)           //First position
	{	
		InsertFirst(Head,no);
	}
	
	else if(pos == (size+1))    //Last position
	{
		InsertLast(Head, no);
	}

	else   // In Betwwen Position
	{
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
	
		for(i = 1; i<pos-1; i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
}


void DeleteAtPos(PPNODE Head, int pos)
{
	int size = 0, i = 0;
	PNODE temp = *Head;

	size = Count(*Head);
	PNODE targated = NULL;
	
	if((pos < 1) || (pos >(size)) ) // Fliter for invalid position
	{
		printf("Invalid Position \n");
		return;	
	}
	
	if(pos == 1)           //First position
	{	
		DeleteFirst(Head);
	}
	
	else if(pos == (size))    //Last position
	{
		DeleteLast(Head);
	}

	else   // In Betwwen Position
	{
		for(i = 1; i<pos-1; i++)
		{
			temp = temp->next;
		}
		targated = temp->next;
		temp->next = targated->next;
		free(targated);
	}
}

int main()
{
	PNODE first = NULL;

	int iChoice = 1, iValue = 0, iRet = 0, iPos = 0;
	
	while(iChoice != 0)
	{
		printf("\n_______________________________________________________________________\n");
		printf("Enter the desired operation that you want to perform on LinkedList \n");
		printf("1 : Insert the node at first position \n");
		printf("2 : Insert the node at last position \n");
		printf("3 : Insert the node at desired position \n");
		printf("4 : Delete the first node \n");
		printf("5 : Delete the last node \n");
		printf("6 : Delete the node at desired position \n");
		printf("7 : Display the contents of linked list \n");
		printf("8 : Count the number of nodes from linked list \n");
		printf("0 : Terminate the application \n");
		printf("_______________________________________________________________________\n");
		scanf("%d", &iChoice);
	
	
		switch(iChoice)
		{
		case 1:
			printf("Enter the data to insert \n");
			scanf("%d",&iValue);
			InsertFirst(&first, iValue);
			break;

		case 2:
			printf("Enter the data to insert \n");
			scanf("%d",&iValue);
			InsertLast(&first, iValue);
			break;

		case 3:
			printf("Enter the data to insert \n");
			scanf("%d",&iValue);
			printf("Enter the Position\n");
			scanf("%d",&iPos);
			InsertAtPos(&first, iValue, iPos);
			break;
		
		case 4:
			DeleteFirst(&first);
			break;

		case 5:
			DeleteLast(&first);
			break;
		
		case 6:
			printf("Enter the position \n");
			scanf("%d",&iPos);
			//DeleteAtPos(&first, iPos)
			break;

		case 7:
			printf("Element of linked list are \n");
			Display(first);
			break;

		case 8:
			iRet = Count(first);
			printf("Number of elements are : %d \n", iRet);
			break;
		
		case 0:
			printf("Thank you for using marvellous linked list \n");
			break;
		
		default:
			printf("Please enter proper choice \n");
			break;	
		}
	}
	return 0;
}