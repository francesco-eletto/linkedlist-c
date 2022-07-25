#ifndef __LINKEDLIST__
#define __LINKEDLIST__

typedef struct __LinkedList* LinkedList; 

LinkedList ll_new();

int ll_add(LinkedList list, int value);

int ll_get(LinkedList list, unsigned int index);

int ll_rm(LinkedList list, unsigned int index);

void ll_free(LinkedList list);

#endif

