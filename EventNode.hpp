//
// Created by Nina Potts on 10/7/18.
//

#ifndef PROJECT2_EVENTNODE_HPP
#define PROJECT2_EVENTNODE_HPP


class TimerEvent;
class RequestEvent;
class DiskDoneEvent;


class EventNode {
public:
    EventNode(): timerEvent(nullptr), requestEvent(nullptr), ddoneEvent(nullptr),
                 isTimer(false), isRequest(false), isDDone(false) {}

    void addTimer(TimerEvent *timer) {
        timerEvent = timer;
        isTimer = true;
    }

    void addRequest(RequestEvent *request) {
        requestEvent = request;
        isRequest = true;
    }

    void addDiskDone(DiskDoneEvent *dDone) {
        ddoneEvent = dDone;
        isDDone = true;
    }

    TimerEvent *getTimer() { return timerEvent; }
    RequestEvent *getRequest() { return requestEvent; }
    DiskDoneEvent *getDiskDone() { return ddoneEvent; }

    bool isTimerEvent()    { return isTimer; }
    bool isRequestEvent()  { return isRequest; }
    bool isDiskDoneEvent() { return isDDone; }

private:
    TimerEvent *timerEvent;
    RequestEvent *requestEvent;
    DiskDoneEvent *ddoneEvent;
    bool isTimer, isRequest, isDDone;
};

#endif //PROJECT2_EVENTNODE_HPP
