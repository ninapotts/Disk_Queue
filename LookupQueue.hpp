//
// Created by Nina Potts on 10/9/18.
//

#ifndef PROJECT2_LOOKUPQUEUE_HPP
#define PROJECT2_LOOKUPQUEUE_HPP

#include<iostream>
#include "Queue.hpp"
#include "LookupQueueNode.hpp"
#include "IdleQueue.hpp"

class Request;

class LookupQueue: public Queue {


public:
    LookupQueue(): head(nullptr), tail(nullptr), _inward{false}{}

    virtual void addRequest(Request *request);

    virtual Request *getRequest();
    virtual bool isEmpty();
    virtual void print();
    virtual ~LookupQueue();
    bool &isInward();


private:
    IdleQueue *idleQueue = new IdleQueue();
    LookupQueueNode *head, *tail;
    bool _inward;
};


#endif //PROJECT2_LOOKUPQUEUE_HPP
