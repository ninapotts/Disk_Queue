//
// Created by Nina Potts on 10/11/18.
//

#include "IdleQueue.hpp"


IdleQueue::~IdleQueue() {
    while( head != nullptr ) {
        LookupQueueNode *node = head;
        head = node->next();
        delete node;
    }
}
