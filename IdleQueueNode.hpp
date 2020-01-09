//
// Created by Nina Potts on 10/11/18.
//

#ifndef PROJECT2_IDLEQUEUENODE_HPP
#define PROJECT2_IDLEQUEUENODE_HPP

class Request;

class IdleQueueNode {

public:
    IdleQueueNode(Request *req);
    IdleQueueNode *next();
    void next(IdleQueueNode *node);
    Request *request();

private:
    IdleQueueNode *_next;
    Request *_request;
};


#endif //PROJECT2_IDLEQUEUENODE_HPP
