#include "lists.h"

/* Prints all the elements of a linked list */
size_t print_list(const Node *h)
{
    size_t count = 0;
    while (h != NULL)
    {
        printf("[%lu] %s\n", h->len, h->str);
        h = h->next;
        count++;
    }
    return count;
}

/* Returns the number of elements in a linked list */
size_t list_len(const Node *h)
{
    size_t count = 0;
    while (h != NULL)
    {
        h = h->next;
        count++;
    }
    return count;
}

/* Adds a new node at the beginning of a linked list */
Node *add_node(Node **head, const char *str)
{
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return NULL;

    new_node->str = strdup(str);
    new_node->len = strlen(str);
    new_node->next = *head;

    *head = new_node;
    return new_node;
}

/* Adds a new node at the end of a linked list */
Node *add_node_end(Node **head, const char *str)
{
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return NULL;

    new_node->str = strdup(str);
    new_node->len = strlen(str);
    new_node->next = NULL;

    if (*head == NULL)
        *head = new_node;
    else
    {
        Node *last = *head;
        while (last->next != NULL)
            last = last->next;
        last->next = new_node;
    }
    return new_node;
}

/* Frees a linked list */
void free_list(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        Node *next = current->next;
        free(current->str);
        free(current);
        current = next;
    }
}
