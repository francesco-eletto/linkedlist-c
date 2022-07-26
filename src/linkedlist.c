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

struct __Node *node_new(int value) {
    struct __Node *node = malloc(sizeof(struct  __Node));
    if (node == NULL) {
        return NULL;
    }

    node->value = value;
    node->next = NULL;
    return node;
}

int ll_add(LinkedList list, int value) {
    struct __Node *new = node_new(value);
    if (new == NULL) {
        return 0;
    }

    if (list->first == NULL) {
        list->first = new;
    } else {
        struct __Node *ptr = list->first;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }

        ptr->next = new;
    }

    list->length += 1;
    return 1;
}

int ll_get(LinkedList list, unsigned int index) {
    if (index + 1 > list->length) {
        return 0;
    }

    struct __Node *node = list->first;
    for (unsigned int i = 0; i < index - 1; i++) {
        node = node->next;
    }
    
    return node->value;
}

int ll_rm(LinkedList list, unsigned int index) {
    if (index + 1 > list->length) {
        return 0;
    }

    int val = 0;
    struct __Node *to_del = list->first;

    if (index == 0) {
        list->first = to_del->next;
    }
    else {
        struct __Node *node = list->first;
        for (unsigned int i = 0; i < index - 1; i++) {
            node = node->next;
        }

        to_del = node->next;
        node->next = to_del->next;
    }

    val = to_del->value;
    free(to_del);
    list->length -= 1;
    return val;
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
