cmake_minimum_required(VERSION 3.12)
project(Project2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project2 main.cpp EventNode.hpp FCFSQueue.hpp FCFSQueue.cpp FCFSQueueNode.hpp
        FCFSQueueNode.cpp Request.hpp Request.cpp Queue.hpp SameTrackQueue.cpp SameTrackQueue.hpp
        SameTrackQueueNode.cpp SameTrackQueueNode.hpp PickupQueue.cpp PickupQueue.hpp PickupQueueNode.cpp
        PickupQueueNode.hpp LookupQueue.cpp LookupQueue.hpp LookupQueueNode.cpp LookupQueueNode.hpp
        )