#include <stdio.h>

#define SIZE 5
int top = -1, input_array[SIZE];

void push() {
    int x;
    if (top == SIZE - 1) {
        printf("Stack Overflow (full)\n");
    }
    else 
    {
        printf("Enter the element to be added onto the stack: ");
        scanf("%d", &x);  
        top = top + 1;
        input_array[top] = x;
    }
}

int main() 
{
    int j;
    for( j=0; j<5; j++)
    { 

        push();
    }

    if (top == -1) {
        printf("Underflow\n");
    } else {
        printf("Elements present in the stack:\n");
        for (int i = top; i >= 0; --i) {
            printf("%d\n", input_array[i]);
        }
    }

    return 0;
}
