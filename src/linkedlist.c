#include <malloc.h>
#include "linkedlist.h"

struct __LinkedList {
    unsigned int length;
    void *first;
};

LinkedList ll_new() {
    LinkedList list = malloc(sizeof(struct __LinkedList));
    if (list == NULL) {
        return NULL;
    }

    list->length = 0;
    list->first = NULL;

    return list;
}

void ll_add(LinkedList list, int value) {
    // TODO body
    
}

void ll_del(LinkedList list) {
    // TODO body
    
}
