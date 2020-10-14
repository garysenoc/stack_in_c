#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


Stack createStack(){
	Stack s = (Stack)malloc(sizeof(STACK_HEAD));
	s->count = 0;
	s->top = NULL;
	s = NULL;
}
Nodeptr createNode(int item){
	Nodeptr create = (Nodeptr)malloc(sizeof(STACK_NODE));
	create->data = item;
	create->next = NULL;
	return create;
}
void push(Stack s,int item){
	Nodeptr temp = createNode(item);
	s->count++;
	temp->next = s->top;
	s->top = temp;	
}
void pop(Stack s){
	Nodeptr temp = s->top;
	s->top = temp->next;
	s->count--;
	free(temp);
}
void displayStack(Stack s){
	Nodeptr temp = s->top;
	
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}	
}

















