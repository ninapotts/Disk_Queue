//
// Created by Ali a. Kooshesh on 10/1/18.
//

#ifndef PROJECT2_QUEUE_HPP
#define PROJECT2_QUEUE_HPP

class Request;

class Queue {

public:
    virtual void addRequest(Request *request) = 0;
    virtual Request *getRequest() = 0;
    virtual bool isEmpty() = 0;
    virtual void print() = 0;
    virtual ~Queue() {}

};
#endif //PROJECT2_QUEUE_HPP
