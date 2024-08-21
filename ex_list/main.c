#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
	int data;
	struct node *next;
} Node;

typedef struct
{
	Node *ptr;
} List;

void printList(const List *pList)
{
	Node *p = pList->ptr->next;
	printf("[");
	while (p)
	{
		printf("%d, ", p->data);
		p = p->next;
	}
	printf("]\n");
}

void insertLastNode(List *pList, int data)
{
	Node *ptr1 = pList->ptr;
	while (ptr1)
	{
		if (ptr1->next == NULL)
		{
			Node *p = malloc(sizeof(Node));
			p->data = data;
			p->next = NULL;
			ptr1->next = p;
			
			printf("if \n");
			
		}
		break;
	}

}

void initList(List *pList)
{
	pList->ptr = malloc(sizeof(Node));		//dummy.
	//pList->ptr->data = ???;
	pList->ptr->next = NULL;
}

int main(void)
{
	List list;
	initList(&list);
	
	insertLastNode(&list, 1);
	printList(&list);			//1
	insertLastNode(&list, 2);
	printList(&list);			//12
	insertLastNode(&list, 3);
	printList(&list);			//123
	insertLastNode(&list, 4);
	printList(&list);			//1234
	
	return 0;
}	
