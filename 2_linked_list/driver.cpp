#include <iostream>
#include "linked_list.h"

int main() {

auto ll = new LinkedList();
ll->insert(5);
ll->insert(6);
ll->insert(2);
ll->insert(1);

ll->display();

}