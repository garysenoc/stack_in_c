#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Stack s = createStack();
	push(s,1);
	push(s,2);
	push(s,3);
	pop(s);
	displayStack(s);
	return 0;
}
