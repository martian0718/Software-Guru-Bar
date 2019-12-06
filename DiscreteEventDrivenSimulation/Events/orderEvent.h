/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: orderEvent.h
Description:
  the header file for the order event class
  Includes "event.h"
*/


#ifndef ORDEREVENT_H
#define ORDEREVENT_H

#include "event.h"
using namespace std;

class OrderEvent : public Event {
protected:
  unsigned int groupSize;
public:
  //constructor for the orderEvent class 
  OrderEvent(unsigned int time, unsigned int gs):Event(time){
    groupSize = gs;
  }
  virtual void processEvent(); //virtual function
};

#endif
