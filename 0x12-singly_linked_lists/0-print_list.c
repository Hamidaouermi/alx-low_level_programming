#include <stdio.h>
#include "lists.h"

/* Print all the elements of a linked list */
size_t print_list(const list_t *head)
{
    size_t count = 0;

    for (; head; head = head->next)
    {
        if (head->str)
            printf("[%u] %s\n", head->len, head->str);
        else
            printf("[0] (nil)\n");
        count++;
    }

    return count;
}
