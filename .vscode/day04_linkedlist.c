#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

int main()
{
    int n;
    if (scanf("%d", &n) != 1 || n < 0)
    {
        return 1;
    }

    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int value;
        if (scanf("%d", &value) != 1)
        {
            goto cleanup;
        }

        Node* newNode = (Node*)malloc(sizeof(Node));
        if (newNode == NULL)
        {
            goto cleanup;
        }

        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    // Print the linked list
    Node* current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

cleanup:
    current = head;
    while (current != NULL)
    {
        Node* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}