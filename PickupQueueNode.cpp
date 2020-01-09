//
// Created by Nina Potts on 10/8/18.
//

#include "PickupQueueNode.hpp"

class Request;

PickupQueueNode::PickupQueueNode(Request *req, PickupQueueNode *nextPtr) : _request(req), _next(nextPtr) {}

PickupQueueNode::PickupQueueNode(Request *req) : _request(req), _next(nullptr) {}

PickupQueueNode *PickupQueueNode::next() {
    return _next;
}

void PickupQueueNode::next(PickupQueueNode *node) {
    _next = node;
}

Request *PickupQueueNode::request() {
    return _request;
}
