#include "linked_list.h"
#include "node.h"
#include <iostream>


LinkedList::LinkedList(){
    _root = nullptr;
}


Node* LinkedList::get_root()
{
    return _root;
}


void LinkedList::set_root(Node *node)
{
    _root = node;
}


void LinkedList::insert(Node *node)
{
    if (_root == nullptr) {
        _root = node;
    } else {
        node->set_next(_root->get_next());
        _root = node;
    }
}

void LinkedList::insert(int data) {
    Node *temp = new Node(data);
    if (_root == nullptr) {
        set_root(temp);
    } else {
        std::cout << "else\n";
        temp->set_next(_root);
        set_root(temp);
    }
}


void LinkedList::display()
{
    Node *current = _root;
    while (current != nullptr)
    {
        std::cout << current->get_data() << " ";
        current = current->get_next();
    }
}