//
// Created by Nina Potts on 10/9/18.
//

#include "LookupQueueNode.hpp"


class Request;

LookupQueueNode::LookupQueueNode(Request *req, LookupQueueNode *nextPtr) : _request(req), _next(nextPtr) {}

LookupQueueNode::LookupQueueNode(Request *req) : _request(req), _next(nullptr) {}

LookupQueueNode *LookupQueueNode::next() {
    return _next;
}

void LookupQueueNode::next(LookupQueueNode *node) {
    _next = node;
    //_next = FCFSQueue();
}

Request *LookupQueueNode::request() {
    return _request;
}