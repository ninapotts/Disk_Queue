//
// Created by Ali A. Kooshesh on 10/1/18.
//

#ifndef PROJECT2_FCFSQUEUE_HPP
#define PROJECT2_FCFSQUEUE_HPP

#include<iostream>
#include "Queue.hpp"
#include "FCFSQueueNode.hpp"

class Request;

class FCFSQueue: public Queue {

public:
    FCFSQueue(): head(nullptr), tail(nullptr) {}

    virtual void addRequest(Request *request);

    virtual Request *getRequest();
    virtual bool isEmpty();
    virtual void print();
    virtual ~FCFSQueue();

private:
    FCFSQueueNode *head, *tail;
};




#endif //PROJECT2_FCFSQUEUE_HPP
