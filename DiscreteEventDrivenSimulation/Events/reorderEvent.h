/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: reorderEvent.h
Description:
  Header file for the reorder event class 
*/

#ifndef REORDEREVENT_H
#define REORDEREVENT_H

#include "event.h"
#include "globalV.h"
using namespace std;

class ReorderEvent : public Event {
protected:
  unsigned int groupSize;
public:
  //constructor
  ReorderEvent(unsigned int time, unsigned int gs):Event(time){
    groupSize = gs;
  }
  virtual void processEvent(); //virtual function
};

#endif
