//
// Created by Nina Potts on 10/11/18.
//

#ifndef PROJECT2_IDLEQUEUE_HPP
#define PROJECT2_IDLEQUEUE_HPP
#include<iostream>
#include "Queue.hpp"
#include "IdleQueueNode.hpp"

class IdleQueue: public Queue {

    public:
        IdleQueue(): head(nullptr), tail(nullptr){}
        virtual ~IdleQueue();
        virtual void addRequest(Request *request);
        virtual Request *getRequest();
        virtual bool isEmpty();
        virtual void print();
        virtual ~IdleQueue();


private:
        IdleQueueNode *head, *tail;
};


#endif //PROJECT2_IDLEQUEUE_HPP
