# include <stdio.h>
#include "queue.h"

int main(int argc, char const *argv[])
{
    List * linkedList = initList(20);
    List* list = initList(50);

    add(linkedList, 23);
    add(linkedList, 12);
    add(linkedList, 15);
    add(linkedList, 12);
    add(linkedList, 23);
    add(linkedList, 20);
    add(linkedList, 20);
    add(linkedList, 2);
    add(linkedList, 20);
    add(linkedList, 20);
    add(list, 13);
    add(list, 103);
    add(list, 32);
    add(list, 59);
    add(list, 16);
    add(list, 89);
    add(list, 2986);
    add(list, 13);
    add(list, 13);
    add(list, 13);
    linkedList = concat(linkedList, list);
    displayList(linkedList);
    set(linkedList);
    displayList(linkedList);
    return 0;
}
