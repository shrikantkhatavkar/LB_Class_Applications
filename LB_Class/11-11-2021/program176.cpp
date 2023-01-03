#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE, **PPNODE;


class SinglyLL
{
	private:
		PNODE first;
		int size;
	
	public:
		SinglyLL()
		{
			first = NULL;
			size = 0;
		}

	void InsertFirst(int no)
	{
		PNODE newn = new NODE;  //newn = (PNODE)malloc(sizeof(NODE)) 
		
		newn->data = no;
		newn->next = NULL;

		if(first == NULL)
		{	
			first = newn;
		}
		else
		{
			newn->next = first;
			first = newn;
		}
		size++;
	}

	void InsertLast(int no)
	{
		PNODE newn = new NODE;  //newn = (PNODE)malloc(sizeof(NODE)) 
		
		newn->data = no;
		newn->next = NULL;

		if(first == NULL)
		{	
			first = newn;
		}
		else
		{
			PNODE temp = first;
		
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newn;
		}
		size++;
	}	

	void InsertAtPos(int no, int iPos)
	{
		int iSize = 0;
		iSize = Count();
		
		PNODE temp = first;	
		
		if(iPos < 1 || (iPos > (iSize+1)))
		{
			printf("Invalid position \n");
			return;
		}

		if(iPos == 1)
		{
			InsertFirst(no);			
		}

		else if(iPos == (iSize+1))
		{
			InsertLast(no);
		}
		else
		{
			PNODE newn = new NODE;
			newn->data = no;
			newn->next = NULL;
	
			for(int i = 1; i<iPos-1;i++)
			{
				temp = temp->next;
			}

			newn->next = temp->next;
			temp->next = newn;
			size++;
		}
	}

	void DeleteFirst()
	{
		PNODE temp = first;
	
		if(first != NULL)
		{
			first = first->next;
			delete temp;
		
			size--;
		}
	}

	void DeleteLast()
	{
		PNODE temp = first;

		if(first == NULL)
		{
			return;
		}		
		else if(first->next == NULL)
		{
			delete first;
			first = NULL;
			size--;
		}
		else
		{
			while(temp->next->next != NULL)
			{
				temp = temp->next;
			}

			delete temp->next;
			temp->next = NULL;
			size--;			
		}
	}

	void DeleteAtPos(int iPos)
	{
		int iSize = 0;
		iSize = Count();
		
		PNODE temp = first;
		PNODE targated = NULL;	
		
		if(iPos < 1 || (iPos > (iSize)))
		{
			printf("Invalid position \n");
			return;
		}

		if(iPos == 1)
		{
			DeleteFirst();			
		}

		else if(iPos == (iSize+1))
		{
			DeleteLast();
		}
		else
		{
			for(int i = 1; i<iPos-1;i++)
			{
				temp = temp->next;
			}
			targated = temp->next;
			temp->next = targated->next;
			free(targated);
			size--;
		}
	}



	void Display()
	{
		PNODE temp = first;
		
		while(temp != NULL)
		{
			cout<<temp->data<<"\t";
			temp = temp->next;
		}
		cout<<"\n";
	}	

	int Count()
	{
		return size;
	}
};


int main()
{
	int iRet = 0;

	SinglyLL obj; 

	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);

	obj.InsertLast(101);
	obj.InsertLast(111);

	obj.Display();

	iRet = obj.Count();
	cout<<"Number of elements are : "<<iRet<<"\n";

	obj.InsertAtPos(95, 2);

	obj.DeleteAtPos(3);

	obj.Display();

	iRet = obj.Count();
	cout<<"Number of elements are : "<<iRet<<"\n";

	return 0;
}