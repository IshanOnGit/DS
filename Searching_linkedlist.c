#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int search(struct node *head, int key) 
/* A function that takes a pointer to the head of the list and a key(value) we want to search*/
{
    int position = 1; //Keeps track of the current position
    struct node *current = head;
     /*A temporary pointer used to traverse the list. Starts at the head node */

    while (current != NULL) {
        if (current->data == key) {
            return position; // value found
        }
        current = current->next;
        position++;
    }

    return -1; // value not found
}

int main() {
    // Creating nodes
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *second = NULL;

    // Allocating memory
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));

    // Assigning values
    first->data = 10; //Sets the value of the first node to 10
    first->next = second;

    second->data = 20; //Sets the value of the second node to 20
    second->next = NULL;

    // Linking head
    head = first; 
    //Points head to the first node so that the list can be accessed from the beginning.

    // Searching
    int key;
    printf("Enter value to search: ");
    scanf("%d", &key);

    int result = search(head, key);

    if (result != -1)
        printf("Element %d found at position %d.\n", key, result);
    else
        printf("Element %d not found in the list.\n", key);

    return 0;
}
