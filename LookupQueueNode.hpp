//
// Created by Nina Potts on 10/9/18.
//

#ifndef PROJECT2_LOOKUPQUEUENODE_HPP
#define PROJECT2_LOOKUPQUEUENODE_HPP


#include "FCFSQueue.hpp"

class Request;

class LookupQueueNode {

public:
    LookupQueueNode(Request *req, LookupQueueNode *nextPtr);
    LookupQueueNode(Request *req);
    LookupQueueNode *next();
    void next(LookupQueueNode *node);
    Request *request();

private:
    //FCFSQueue *_next;
    LookupQueueNode *_next;
    Request *_request;
};


#endif //PROJECT2_LOOKUPQUEUENODE_HPP
