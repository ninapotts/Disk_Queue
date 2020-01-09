//
// Created by Nina Potts on 10/8/18.
//

#include "SameTrackQueueNode.hpp"


class Request;

SameTrackQueueNode::SameTrackQueueNode(Request *req, SameTrackQueueNode *nextPtr) : _request(req), _next(nextPtr) {}

SameTrackQueueNode::SameTrackQueueNode(Request *req) : _request(req), _next(nullptr) {}

SameTrackQueueNode *SameTrackQueueNode::next() {
    return _next;
}

void SameTrackQueueNode::next(SameTrackQueueNode *node) {
    _next = node;
}

Request *SameTrackQueueNode::request() {
    return _request;
}
