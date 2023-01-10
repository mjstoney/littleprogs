#include "node.h"

Node::Node(int data)
{
    _data = data;
    _next = nullptr;
}


int Node::get_data() {
    return _data;
}


void Node::set_data(int data)
{
    _data = data;
}


Node* Node::get_next() {
    return _next;
}


void Node::set_next(Node *next) {
    _next = next;
}
