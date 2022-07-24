#ifndef __LINKEDLIST__
#define __LINKEDLIST__

typedef struct {
    int value;
    LinkedList *next;
} LinkedList;


LinkedList* ll_new();

void ll_add(LinkedList *list, int value);

void ll_del(LinkedList *list);

#endif