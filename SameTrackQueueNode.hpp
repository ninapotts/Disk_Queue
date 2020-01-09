//
// Created by Nina Potts on 10/8/18.
//

#ifndef PROJECT2_SAMETRACKQUEUENODE_HPP
#define PROJECT2_SAMETRACKQUEUENODE_HPP

class Request;

class SameTrackQueueNode {

public:
    SameTrackQueueNode(Request *req, SameTrackQueueNode *nextPtr);
    SameTrackQueueNode(Request *req);
    SameTrackQueueNode *next();
    void next(SameTrackQueueNode *node);
    Request *request();

private:
    SameTrackQueueNode *_next;
    Request *_request;
};


#endif //PROJECT2_SAMETRACKQUEUENODE_HPP
