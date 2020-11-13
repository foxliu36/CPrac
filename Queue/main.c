#include <stdio.h>
#include <stdlib.h>
void Enqueue(int [], int , int, int);
void Dequeue();

#define LENGTH 10


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a [LENGTH] = {0,0,0,0,0,0,0,0,0,0};
	int front = 0, rear = 0;
	
	Enqueue(a, 2, front, rear);
	
	printf("---------------rear----------------%d", rear);
	
	for(int i = 0; i < 10; i++) {
		
		printf("%d", a[i]);
	}
	
	return 0;
}

void Enqueue(int p[], int item, int front, int rear) {
	
	rear = (rear + 1) % LENGTH;
	if(rear == front){
		printf("QUEUEº¡¤F");
		return;
	}else{
		p[rear] = item;
	}
	
}
