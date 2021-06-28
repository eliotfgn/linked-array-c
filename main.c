# include <stdio.h>
#include "queue.h"

int main(int argc, char const *argv[])
{
    List * linkedList = initList(20);

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
    displayList(linkedList);
    set(linkedList);
    displayList(linkedList);
    return 0;
}
