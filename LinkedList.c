/* Each node in a singly linked list is a structure that contains i) A variable (e.g int data) to store the value you want to keep in that node
ii) A pointer to the next node (e.g., struct node *next) to store the address of the next structure(node) in the list

This self-refrential structure lets you build flexible, dynamic data structure, insert and delete nodes efficiently without shifting all elements(like in arrays)
|  data  |   next   |
|   10   |   addr → |
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

int main()
{ 
   one = malloc(sizeof(struct node));
   two = malloc(sizeof(struct node));
   three = malloc(sizeof(struct node));
    
    one-> data = 1;
    two->data = 2;
    three->data = 3;
/* 
+---------+       +---------+       +---------+
| data=1  |  -->  | data=2  |  -->  | data=3  |
| next    |       | next    |       | next=NULL|
+---------+       +---------+       +---------+
*/

    one->next = two;
    two->next = three;
    three->next=NULL;

    head = one;

    struct node *temp = head;
    printf("Linked list elements:\n");
    while(temp!= NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}