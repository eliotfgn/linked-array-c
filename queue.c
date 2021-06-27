#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

List * initList(int first)
{
    List * list = malloc(sizeof(*list));
    Element * element = malloc(sizeof(*element));

    if (list == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->value = first;
    element->next = NULL;

    list->first = element;

    return list;
}

void add(List* list, int element)
{

    Element *new = malloc(sizeof(*new));
    Element *last = malloc(sizeof(*last));

    if (list == NULL || new == NULL || last == NULL)
    {
        exit(EXIT_FAILURE);
    }
    last = list->first;

    while (last->next != NULL)
    {
        last = last->next;
    }
    new->value = element;
    new->next = NULL;
    last->next = new;
}

void displayList(List* list)
{
    Element *current = malloc(sizeof(*current));

    if (list == NULL || current == NULL)
    {
        exit(EXIT_FAILURE);
    }

    current = list->first;

    while (current->next != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
        
    }
    printf("\n");
    
}

void sortList(List* list, int len)
{
    int i, j;
    Element *min_case = malloc(sizeof(*min_case));
    Element *tmp = malloc(sizeof(*tmp));

    for (min_case = list->first; min_case->next!=NULL; min_case = min_case->next)
    {
        for ( j = 0; j < len; j++)
        {
            if ()
        }
        
    }
    

}