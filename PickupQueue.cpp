//
// Created by Nina Potts on 10/8/18.
//

#include "PickupQueue.hpp"
#include "Request.hpp"

void PickupQueue::addRequest(Request *request) {
    PickupQueueNode *rNode = new PickupQueueNode(request);
    if( isEmpty() ) {
        head = tail = rNode;
    } else {

        for(auto cur = head; cur; cur = cur->next() ){
            if(cur->next() == nullptr){
                tail->next(rNode);
                tail = rNode;
                break;
            }if(cur->next()->request()->track()<= cur->request()->track()){
                if(rNode->request()->track() <= cur->request()->track() && rNode->request()->track() > cur->next()->request()->track()){
                    rNode->next(cur->next());
                    cur->next(rNode);
                    return;
                }


            }else if(cur->next()->request()->track()>= cur->request()->track()){
                if(rNode->request()->track()>= cur->request()->track() && rNode->request()->track() < cur->next()->request()->track()){
                    rNode->next(cur->next());
                    cur->next(rNode);
                    return;
                }
            }

        }

    }
}

Request *PickupQueue::getRequest() {
    if( isEmpty() ) {
        std::cout << "Calling PickupQueueNode::getRequest() on empty queue. Terminating...\n";
        exit(1);
    }
    PickupQueueNode *pNode = head;
    Request *request = pNode->request();
    head = head->next();
    if( head == nullptr )
        tail = nullptr;
    delete pNode;
    return request;
}

bool PickupQueue::isEmpty() {
    return head == nullptr;
}

void PickupQueue::print() {
    for(auto cur = head; cur; cur = cur->next() )
        cur->request()->print();
}

PickupQueue::~PickupQueue() {
    while( head != nullptr ) {
        PickupQueueNode *node = head;
        head = node->next();
        delete node;
    }
}
