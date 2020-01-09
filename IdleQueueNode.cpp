//
// Created by Nina Potts on 10/11/18.
//

#include "IdleQueueNode.hpp"

class Request;



IdleQueueNode::IdleQueueNode(Request *req) : _request(req), _next(nullptr) {}

LookupQueueNode *LookupQueueNode::next() {
    return _next;
}

void LookupQueueNode::next(LookupQueueNode *node) {
    _next = node;
}

Request *LookupQueueNode::request() {
    return _request;
}