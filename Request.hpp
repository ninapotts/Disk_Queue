
//
// Created by Ali A. Kooshesh on 10/1/18.
//

#ifndef PROJECT2_REQUEST_HPP
#define PROJECT2_REQUEST_HPP


class Request {
public:
    Request(double rTime, int rTrack, int rSector);

    int track();
    int sector();
    double time();
    void print();

private:
    double _time;
    int _track, _sector;

};

#endif //PROJECT2_REQUEST_HPP
