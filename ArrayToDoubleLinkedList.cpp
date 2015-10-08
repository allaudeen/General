#include <stdio.h>
#include <stdlib.h>

struct DoubleLL
{
	int Value;
	struct DoubleLL* Prev;
	struct DoubleLL* Next;
};


struct DoubleLL* ArrayToDoubleLL(int* Array, int ArraySize)
{
	if(ArraySize == 0)
		return NULL;

	struct DoubleLL* DLLNode = NULL;
	struct DoubleLL* tempNode = NULL;

	printf("Size of Array is %d\n",ArraySize);

	for(int i = ArraySize - 1; i >= 0; i--)
	{
		tempNode = (struct DoubleLL*) malloc(sizeof(struct DoubleLL));
		if(tempNode != NULL)
		{
			tempNode->Value = Array[i];
			tempNode->Prev = NULL;
			tempNode->Next = NULL;
		}

		if(DLLNode == NULL)
		{
			DLLNode = tempNode;		
		}
		else
		{
			DLLNode->Prev = tempNode;
			tempNode->Next = DLLNode;
			DLLNode = tempNode;
			
		}
	
	}
	
	return DLLNode;
}

void DisplayDoubleLL(struct DoubleLL* DoubleLLNode)
{
	struct DoubleLL* tempNode = DoubleLLNode;

	if(tempNode == NULL)
	{
		printf("Double Linked List is Empty\n");
		return;
	}

	printf("Displaying Double Linked List \n");
	while(tempNode != NULL)
	{
		printf("%d -> ",tempNode->Value);
		tempNode = tempNode->Next;
	}	
	printf("NULL\n");
}

void DisplayDoubleLLInReverse(struct DoubleLL* DoubleLLNode)
{
	
	struct DoubleLL* tempNode = DoubleLLNode;
	
	if(tempNode == NULL)
	{
		printf("Double Linked List is Empty\n");
		return;
	}

	printf("Displaying Double Linked List in Reverse \n");

	tempNode = DoubleLLNode;

	while(tempNode->Next != NULL)
	{
		tempNode = tempNode->Next;
	}

	while(tempNode != NULL)
	{
		printf("%d -> ",tempNode->Value);
		tempNode = tempNode->Prev;
	}	

	printf("NULL\n");

}

int main()
{

//	int Array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int Array[] = {};
	int Array[] = {4985, 46857, 1, 2, 3, 4, 5, 6, 7, 32, 45, 56, 65, 435, 436, 34, 345, 657, 436, 56734, 3454, 2341, 3454, 5654, 76845, 786, 546, 43543, 43543, 34543, 345, 345, 345, 234 ,324, 124345, 45, 6, 435, 345};
	int ArraySize = sizeof(Array)/sizeof(Array[0]);
	struct DoubleLL* DLLNode = ArrayToDoubleLL(Array, ArraySize);

	DisplayDoubleLL(DLLNode);	
	DisplayDoubleLLInReverse(DLLNode);
	
	return 0;
}
