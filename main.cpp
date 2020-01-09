#include <iostream>
#include <fstream>
#include "Request.hpp"
#include "FCFSQueue.hpp"
#include "SameTrackQueue.hpp"
#include "PickupQueue.hpp"
#include "LookupQueue.hpp"

int main(int argc, char *argv[]) {

    if( argc != 2) {
        std::cout << "usage: " << argv[0] << " nameOfAnInputFile\n";
        exit(1);
    }

    std::ifstream inputStream;

    inputStream.open(argv[1], std::ios::in);
    if( ! inputStream.is_open()) {
        std::cout << "Unable top open " << argv[1] << ". Terminating...";
        perror("Error when attempting to open the input file.");
        exit(1);
    }

//    FCFSQueue *queue = new FCFSQueue();
//
//    int time, track, sector;
//    while(inputStream >> time && inputStream >> track && inputStream >> sector) {
//        Request *request = new Request(time, track, sector);
//        queue->addRequest(request);
//    }
//
//
//    while( ! queue->isEmpty() ) {
//        Request *request = queue->getRequest();
//        request->print();
//        delete request;
//    }
//
//
//    delete queue;
    int time, track, sector;
    LookupQueue *queue = new LookupQueue();

    while(inputStream >> time && inputStream >> track && inputStream >> sector) {
        Request *request = new Request(time, track, sector);
        queue->addRequest(request);
    }


    while( ! queue->isEmpty() ) {
        Request *request = queue->getRequest();
        request->print();
        delete request;
    }
    delete queue;





    return 0;
}
