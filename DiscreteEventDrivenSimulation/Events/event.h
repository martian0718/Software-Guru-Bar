/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: event.h
Description:
  Header file for the Events classes. Also includes the
  eventComparison class.
*/
#ifndef EVENT_H
#define EVENT_H

using namespace std;

//CLASS for Events
class Event {
public:
  unsigned int time; //a public variable for time
  Event(unsigned int t){ //constructor for event
    time = t;
  }
  virtual void processEvent(){} //virtual function
};


//comparison for Events
class eventComparison {
public:
  bool operator () (Event *left, Event *right){
    return left->time > right->time;
  }
};


#endif
