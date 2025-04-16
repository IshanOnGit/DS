#include <stdio.h>
#define SIZE 5

int top = 2;  // Simulate stack with 3 elements that is  0, 1, 2;
int input_array[SIZE] = {10, 20, 30};  // Pre-filled stack

void pop() {
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped element: %d\n", input_array[top]);
        top = top - 1;
    }
}

int main() {
    pop();  // Perform pop

    // Show remaining elements
    if (top == -1) 
    {
        printf("Stack is now empty.\n");
    } 
    else 
    {
        printf("Elements remaining in the stack:\n");
        for (int i = top; i >= 0; --i) 
        {
            printf("%d\n", input_array[i]);
        }
    }

    return 0;
}
