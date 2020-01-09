//
// Created by Nina Potts on 10/9/18.
//

#include "LookupQueue.hpp"
#include "Request.hpp"

void LookupQueue::addRequest(Request *request) {
    LookupQueueNode *rNode = new LookupQueueNode(request);
    //if the working queue is empty switch the working queue and the idle queue
    if(isEmpty()) {
        if(isInward())
            isInward()= false;
        else if(!isInward())
            isInward() = true;
        if(idleQueue->isEmpty()){
            idleQueue->head = rNode;
            idleQueue->tail = rNode;
            head = idleQueue->head;
            tail = idleQueue->tail;
            return;
        }else{
            head = idleQueue->head;
            tail = idleQueue->tail;
        }

    }


    if(isInward()){

        if(rNode->request()->track() >= head->request()->track()) {
            for (auto inwardIter = head; inwardIter; inwardIter = inwardIter->next()) {
                //add the node to the inward queue in ascending order
                if (inwardIter->next() == nullptr) {
                    tail->next(rNode);
                    tail = rNode;
                    return;
                }
                if (rNode->request()->track() >= inwardIter->request()->track() &&
                    rNode->request()->track() < inwardIter->next()->request()->track()) {
                    rNode->next(inwardIter->next());
                    inwardIter->next(rNode);
                    return;
                }
            }
        }else{
                //add to the idle queue in descending order
                for(auto outwardIter = idleQueue->head; outwardIter; outwardIter = outwardIter->next() ) {
                    if(outwardIter->next() == nullptr){
                        tail->next(rNode);
                        tail = rNode;
                        return;

                    }else if(rNode->request()->track() <= outwardIter->request()->track() && rNode->request()->track() > outwardIter->next()->request()->track()){
                        rNode->next(outwardIter->next());
                        outwardIter->next(rNode);
                        return;
                    }
                }


         }
     }

    else if(!isInward()){
        if(rNode->request()->track() <= head->request()->track()){
            for (auto outwardIter = head; outwardIter; outwardIter = outwardIter->next()){
                if(outwardIter->next() == nullptr){
                    tail->next(rNode);
                    tail = rNode;
                    return;

                }else if(rNode->request()->track() <= outwardIter->request()->track() && rNode->request()->track() > outwardIter->next()->request()->track()){
                    rNode->next(outwardIter->next());
                    outwardIter->next(rNode);
                    return;
                }
            }

        }else{
            //add to the idle queue in asccending order
            //use the auto iter = idleQueue->head;
            for(auto inwardIter = idleQueue->head; inwardIter; inwardIter = inwardIter->next()){
                if (inwardIter->next() == nullptr) {
                    tail->next(rNode);
                    tail = rNode;
                    return;
                }
                if (rNode->request()->track() >= inwardIter->request()->track() &&
                    rNode->request()->track() < inwardIter->next()->request()->track()) {
                    rNode->next(inwardIter->next());
                    inwardIter->next(rNode);
                    return;
                }
            }

    }
}


}

Request *LookupQueue::getRequest() {
    if( isEmpty() ) {
        std::cout << "Calling LookupQueueNode::getRequest() on empty queue. Terminating...\n";
        exit(1);
    }
    LookupQueueNode *pNode = head;
    Request *request = pNode->request();
    head = head->next();
    if( head == nullptr )
        tail = nullptr;
    delete pNode;
    return request;
}

bool LookupQueue::isEmpty() {
    return head == nullptr;
}

void LookupQueue::print() {
    for(auto cur = head; cur; cur = cur->next() )
        cur->request()->print();
}

LookupQueue::~LookupQueue() {
    while( head != nullptr ) {
        LookupQueueNode *node = head;
        head = node->next();
        delete node;
    }
}

bool &LookupQueue::isInward(){
    return _inward;
}
