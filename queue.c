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

void push(List* list, int element)
{

    Element *new = malloc(sizeof(*new));

    if (list == NULL || new == NULL)
    {
        exit(EXIT_FAILURE);
    }
    new->value = element;
    new->next = list->first;
    list->first = new;
}

void displayList(List* list)
{
    Element *current = malloc(sizeof(*current));

    if (list == NULL || current == NULL)
    {
        exit(EXIT_FAILURE);
    }

    current = list->first;

    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
        
    }
    printf("\n");
    
}

void sortList(List* list)
{
    Element *min_cell = malloc(sizeof(*min_cell));
    Element *cell = malloc(sizeof(*cell));
    int tmp;

    for (min_cell = list->first; min_cell != NULL; min_cell = min_cell->next)
    {
        for (cell = min_cell; cell->next != NULL; cell = cell->next)
        {
            if (cell->value < min_cell->value)
            {
                tmp = min_cell->value;
                min_cell->value = cell->value;
                cell->value = tmp;
            }
        }
        
    }
}

void delete(List* list, int element)
{
    Element *current = malloc(sizeof(*current));
    Element *prec = malloc(sizeof(*prec));

    current = list->first;
    prec->value=0;
    prec->next=list->first;
    while (current!=NULL)
    {
        if (current->value == element)
        {
            if (current == list->first)
            {
                list->first = current->next;
            }
            else
            {
                prec->next = current->next;
            }
            break;
        }
        current = current->next;
        prec = prec->next;
    }
    
}

void delete_(Element* list, int element)
{
    Element *current = malloc(sizeof(*current));
    Element *prec = malloc(sizeof(*prec));

    current = list;
    prec->value=0;
    prec->next=list;
    while (current!=NULL)
    {
        if (current->value == element)
        {
            if (current == list)
            {
                list = current->next;
                printf("%d ", current->value);
            }
            else
            {
                prec->next = current->next;
            }
        }
        current = current->next;
        prec = prec->next;
    }
    
}


List* invert(List* list)
{
    List* inverted = initList(list->first->value);
    Element* cell = malloc(sizeof(*cell));

    for (cell = list->first->next; cell!=NULL; cell = cell->next)
    {
        push(inverted, cell->value);
    }

    return inverted;
}

int ispalindrome(List* list)
{
    Element* cell = malloc(sizeof(*cell));
    Element* reverted_cell = malloc(sizeof(*reverted_cell));
    List* inverted = invert(list);
    reverted_cell = inverted->first;

    for (cell = list->first; cell!=NULL; cell = cell->next)
    {
        if (cell->value == reverted_cell->value)
        {
            reverted_cell = reverted_cell->next;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}

void set(List* list)
{
    int val;
    Element* cell = malloc(sizeof(*cell));
    Element* cell_ = malloc(sizeof(*cell_));

    for (cell = list->first; cell!=NULL; cell = cell->next)
    {
        for (cell_ = cell->next; cell_!=NULL; cell_ = cell_->next)
        {
            if (cell->value == cell_->value)
            {
                delete_(cell->next, cell_->value);
            }
            
        }
    }
}