#ifndef __LINKEDLIST__
#define __LINKEDLIST__

typedef struct __LinkedList* LinkedList; 

// Returns a pointer to a new empty list.
// It must be freed using "ll_free".
//
// Returns:
// New empty list.
LinkedList ll_new();

// Returns the length of the argument list.
//
// Arguments:
// * list - An instance of a LinkedList
//
// Returns:
// The length of the list.
unsigned int ll_len(LinkedList list);

// Adds a new value into the last position of the list.
//
// Arguments:
// * list - An instance of a LinkedList
// * value - The value to be added
//
// Returns:
// 0 on fail; 1 on success.
int ll_add(LinkedList list, int value);

// Returns a value in the list.
//
// Arguments:
// * list - An instance of a LinkedList
// * index - Position of the node
//
// Returns:
// Value of the node.
int ll_get(LinkedList list, unsigned int index);

// Removes a node in the list.
//
// Arguments:
// * list - An instance of a LinkedList
// * index - Position of the node
//
// Returns:
// Value of the removed node.
int ll_rm(LinkedList list, unsigned int index);

// Frees the LinkedList with all its nodes.
//
// Arguments:
// * list - An instance of a LinkedList
void ll_free(LinkedList list);

#endif

