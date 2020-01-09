//
// Created by Ali A. Kooshesh on 10/1/18.
//

#ifndef PROJECT2_FCFSQUEUENODE_HPP
#define PROJECT2_FCFSQUEUENODE_HPP



class Request;

class FCFSQueueNode {
public:
    FCFSQueueNode(Request *req, FCFSQueueNode *nextPtr);
    FCFSQueueNode(Request *req);
    FCFSQueueNode *next();
    void next(FCFSQueueNode *node);
    Request *request();

private:
    FCFSQueueNode *_next;
    Request *_request;
};


#endif //PROJECT2_FCFSQUEUENODE_HPP
