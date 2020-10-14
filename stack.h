typedef struct node* Nodeptr;

typedef struct node{
	int data;
	Nodeptr next;
}STACK_NODE;

typedef struct{
	int count;
	Nodeptr top;
}STACK_HEAD;

typedef STACK_HEAD* Stack;

void push(Stack s,int item);
void pop(Stack s);
void displayStack(Stack s);
Stack createStack();
Nodeptr createNode(int item);
