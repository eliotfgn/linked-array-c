# include <stdio.h>
#include "queue.h"

int main(int argc, char const *argv[])
{
    List * linkedList = initList(20);

    add(linkedList, 23);
    add(linkedList, 12);
    add(linkedList, 59);
    add(linkedList, 9);
    add(linkedList, 84);
    displayList(linkedList);
    sortList(linkedList);
    delete(linkedList, 9);
    displayList(linkedList);
    return 0;
}
