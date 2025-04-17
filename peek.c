#include <stdio.h>
#define SIZE 5

int stack[SIZE] = {10, 20, 30}; // Pre-filled stack elements
int top = 2; // Index of the topmost element (30)

void peek() {
    if (top == -1)
    {
        printf("Stack is empty. Nothing to peek.\n"); //print empty if stack is empty
    }
    else 
    {
        printf("Topmost element is: %d\n", stack[top]);//print the topmost data element of the stack using stack[top]
    }
}

int main() {
    peek(); // Call the peek function
    return 0;
}
