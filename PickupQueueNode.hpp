//
// Created by Nina Potts on 10/8/18.
//

#ifndef PROJECT2_PICKUPQUEUENODE_HPP
#define PROJECT2_PICKUPQUEUENODE_HPP

class Request;

class PickupQueueNode {

    public:
        PickupQueueNode(Request *req, PickupQueueNode *nextPtr);
        PickupQueueNode(Request *req);
        PickupQueueNode *next();
        void next(PickupQueueNode *node);
        Request *request();

    private:
        PickupQueueNode *_next;
        Request *_request;

};


#endif //PROJECT2_PICKUPQUEUENODE_HPP
