/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: arriveEvent.h
Description:
  Header file for the Arrive Event file.
  Includes "event.h"
*/


#ifndef ARRIVEEVENT_H
#define ARRIVEEVENT_H

#include "event.h"

using namespace std;

class ArriveEvent : public Event {
protected:
  unsigned int groupSize;
public:
  //constructor
  ArriveEvent(unsigned int time, unsigned int gs):Event(time){
    groupSize = gs;
  }
  void processEvent(); //virtual function
};

#endif
