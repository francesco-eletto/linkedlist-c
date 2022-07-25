#include <malloc.h>
#include "linkedlist.h"

struct __Node {
    int value;
    struct __Node *next;
};

struct __LinkedList {
    unsigned int length;
    struct __Node *first;
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

int ll_get(LinkedList list, unsigned int index) {
    // TODO body
}

int ll_rm(LinkedList list, unsigned int index) {
    // TODO body
}


void node_free(struct __Node *node) {
    while (node != NULL) {
        struct __Node *next = node->next;
        free(node);
        node = next;
    }
}

void ll_free(LinkedList list) {
    if (list->first) {
        node_free(list->first);
    }

    free(list);
}
