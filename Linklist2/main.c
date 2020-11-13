#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct node * NODE;


struct node{
	int x;
	NODE next;
};

void printall(struct node *);
void push(struct node** , int );
void printmiddle(NODE head);
void splitone(NODE *, NODE *, NODE *);
void splitoddeven(NODE *, NODE *, NODE *);
NODE reverse(NODE);

int main(int argc, char *argv[]) 
{
	NODE root;
	NODE oddlist;
	NODE evenlist;
	
	root = 0;
	oddlist = 0;
	evenlist = 0;
	
	push(&root, 1);
	push(&root, 2);
	push(&root, 4);
	push(&root, 3);
	push(&root, 12);
	push(&root, 23);
	push(&root, 43);
	push(&root, 32);
	push(&root, 320);
	
	insertbeforeY(&root, 123, 320);
	
	printall(root);
	//printmiddle(root);
	
	//splitoddeven(&root, &oddlist, &evenlist);
	
	root = reverse(root);
	printf("\nprintall(root)-----\n");
	printall(root);
	printf("\nprintall(oddlist)-----\n");
	splitoddeven(root, oddlist, evenlist);
	printall(oddlist);
	printf("\nprintall(evenlist)-----\n");
	printall(evenlist);
	
	return 0;
}

void printall(struct node* p)
{
	struct node *start;
	start = p;
	
	while(start)
	{
		printf("->%d", start->x);
		start = start->next;
	}
}

void push(struct node** head_ref, int new_data)
{
	struct node* newnode = (struct node *)malloc(sizeof(struct node));
	newnode->x = new_data;
	newnode->next = (*head_ref);	
	
	(*head_ref) = newnode;
}

void printmiddle(NODE head)
{
	NODE slow_ptr = head;
	NODE fast_ptr = head;
	
	if(head)
	{
		while(fast_ptr && fast_ptr->next)
		{
			fast_ptr = fast_ptr -> next -> next;
			slow_ptr = slow_ptr -> next;
		}
		printf("The middle element is[%d]\n\n", slow_ptr->x);
	}
}

void splitone(NODE *root, NODE *one, NODE *rest)
{
	(*one) = (*root);
	(*rest) = (*root)->next;
	(*one)->next = 0;
}

//案计 膀计だ秨
void splitoddeven(NODE *root, NODE *odd, NODE *even)
{
	NODE oddlast;
	NODE evenlast;
	
	while(*root)
	{
		//案计 
		if((*root)->x % 2 == 0 )
		{
			if(*even) {
				//ぃ琌材
				evenlast->next = (*root);
				evenlast = (*root);
				(*root) = (*root)->next;
				evenlast->next = 0;
				
			}else{
				(*even) = (*root);
				(*root) = (*root)->next;
				(*even)->next = 0;
				evenlast = (*even);
			}
		}else{
			if(*odd) {
				//ぃ琌材
				oddlast->next = (*root);
				oddlast = (*root);
				(*root) = (*root)->next;
				oddlast->next = 0;
				
			}else{
				(*odd) = (*root);
				(*root) = (*root)->next;
				(*odd)->next = 0;
				oddlast = (*odd);
			}
		}
	}
}
 
NODE reverse(NODE root)
{
	NODE new_root = 0;
	NODE next = 0;
	while(root)
	{
		next = (root)->next;
		(root)->next = new_root;
		new_root = root;
		root = next;
	}
	return new_root;
}

//础Y玡 
void insertbeforeY(NODE *root, int item, int y)
{
	NODE temp, p, q;
	
	temp = (NODE) malloc(sizeof(struct node));
	temp->x = item;
	
	p = *root; q = NULL;
	
	if(p == NULL)
	{
		printf("data %d not found \n", y);
		return;
	}
	
	if(p->x == y)
	{
		temp->next = p;
		*root = temp;
		return;
	}
	
	while(p)
	{
		if(p->x == y)break;
		q = p;
		p = p->next;
	}
	
	if(p == NULL) printf("data %d not found\n", y);
	else {
		temp->next = p;
		q->next = temp;
	}
}
