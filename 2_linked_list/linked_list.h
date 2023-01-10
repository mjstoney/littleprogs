#ifndef LINKED_LISint_H
#define LINKED_LISint_H

#include "node.h"


class LinkedList
{
private:
    Node *_root;

public:
    LinkedList();
    Node *get_root();
    void set_root(Node *node);
    void insert(Node *node);
    void insert(int data);
    void display();
};

#endif /* LINKED_LISint_H*/