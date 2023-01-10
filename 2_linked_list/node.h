#ifndef NODE_H
#define NODE_H


class Node
{

private:
    int _data;
    Node *_next;

public:
    Node(int data);
    int get_data();
    void set_data(int data);
    Node *get_next();
    void set_next(Node *next);
};

#endif /* NODE_H */