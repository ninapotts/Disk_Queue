//
// Created by Nina Potts on 10/8/18.
//

#ifndef PROJECT2_PICKUPQUEUE_HPP
#define PROJECT2_PICKUPQUEUE_HPP

#include<iostream>
#include "Queue.hpp"
#include "PickupQueueNode.hpp"

class Request;

class PickupQueue: public Queue {


public:
    PickupQueue(): head(nullptr), tail(nullptr) {}

    virtual void addRequest(Request *request);

    virtual Request *getRequest();
    virtual bool isEmpty();
    virtual void print();
    virtual ~PickupQueue();

private:
    PickupQueueNode *head, *tail;
};






#endif //PROJECT2_PICKUPQUEUE_HPP
