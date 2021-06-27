# include <stdio.h>
#include "queue.h"

int main(int argc, char const *argv[])
{
    List * linkedList = initList(2);

    add(linkedList, 23);
    add(linkedList, 12);
    add(linkedList, 2);
    add(linkedList, 1233);
    sortList(linkedList);
    displayList(linkedList);
    return 0;
}
