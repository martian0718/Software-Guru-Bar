/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: leaveEvent.h
Description:
  Header file for the leave event class
  Includes "event.h"
*/


#ifndef LEAVEEVENT_H
#define LEAVEEVENT_H

#include "event.h"

using namespace std;

class LeaveEvent : public Event {
protected:
  unsigned int groupSize;
public:
  //constructor for leaveEvent
  LeaveEvent(unsigned int time, unsigned int gs):Event(time){
    groupSize = gs;
  }
  virtual void processEvent(); //virtual function
};

#endif
