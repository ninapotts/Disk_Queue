//
// Created by Nina Potts on 10/8/18.
//

#ifndef PROJECT2_SAMETRACKQUEUE_HPP
#define PROJECT2_SAMETRACKQUEUE_HPP

#include<iostream>
#include "Queue.hpp"
#include "SameTrackQueueNode.hpp"


class Request;

class SameTrackQueue: public Queue {

public:
    SameTrackQueue(): head(nullptr), tail(nullptr) {}

    virtual void addRequest(Request *request);

    virtual Request *getRequest();
    virtual bool isEmpty();
    virtual void print();
    virtual ~SameTrackQueue();

private:
    SameTrackQueueNode *head, *tail;
};



#endif //PROJECT2_SAMETRACKQUEUE_HPP
