#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
 
int main()
{
    struct Node *first;
    struct Node *second;
    
    // Allocate memory for nodes in the linked list in Heap
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
 
    first->data = 7;
    first->next = second;
    
    second->data = 8;
    second->next = NULL;
 
    linkedListTraversal(first);
    return 0;
}


