#ifndef __LINKEDLIST__
#define __LINKEDLIST__

typedef struct __LinkedList* LinkedList; 

typedef struct {
    int value;
    void *next;
} Node;

LinkedList ll_new();

void ll_add(LinkedList list, int value);

void ll_free(LinkedList list);

#endif
