#include <stdio.h>
#include <stdlib.h>

int *stack;
int top = -1;
int maxSize = 0;

// function declaration
void push(int data);
int pop();
void display();
void stackResize(int ns);

int main() {
	int choice, data;
	
	printf("Enter initial size of stack: ");
	scanf("%d", &maxSize);
	
	stack = (int*) malloc(maxSize * sizeof(int));
	
	if (stack == NULL) {
		printf("Memory allocation failed.\n");
		return -1;
	}
	
	while(1) {
		printf("\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. display\n");
		printf("4. exit\n");
		
		printf("Enter choice: ");
		scanf("%d", &choice);
		
		switch (choice) {
			case 1:
				printf("Enter the element to push: ");
				scanf("%d", &data);
				push(data);
				break;
				
			case 2:
				data = pop();
				if (data != -1) {
					printf("Popped out data: %d\n", data);
				}
				break;
			
			case 3:
				display();
				break;
				
			case 4:
				free(stack);
				exit(0);
				break;
			
			default:
				printf("Enter valid choice.\n");
		}
	}
	return 0;
}


// PUSH Operation

void push(int data) {
	if (top == maxSize - 1) {
		printf("Stack overflow.\n");
		stackResize(maxSize * 2);
		printf("Stack has been resized by twice of its current size.\n");
	}
	top += 1;
	stack[top] = data;
}


// POP Operation

int pop() {
	if (top == -1) {
		printf("Stack underflow.\n");
		return -1;
	}
	int popped = stack[top];
	top -= 1;
	
	return popped;
}


// StackResize Operation

void stackResize(int ns) {
	stack = (int *) realloc(stack, ns * sizeof(int));
	if (stack == NULL) {
		printf("Memory allocation failed.\n");
		return;
	}
	maxSize = ns;
	
}


// DISPLAY Operation

void display() {
	if (top == -1) {
		printf("Stack is empty.\n");
		return;
	}
	
	printf("Stack elements: ");
	
	for (int i = top; i >= 0; i--) {
		printf("%d ", stack[i]);
	}
	
	printf("\n");
}
