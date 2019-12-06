/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: simulationFramework.h
Description:
  Header file for the simulation framework
*/


#ifndef SIMULATIONFRAMEWORK_H
#define SIMULATIONFRAMEWORK_H

using namespace std;

#include <vector>
#include <queue>

#include "priorityQueue.h"
#include "event.h"

//CLASS for the Simulation Framework
class SimulationFramework {
protected:
  //priority_queue<Event*, vector<Event*>, eventComparison> eventQueue;
  PriorityQueue<Event*> eventQueue;
public:
  SimulationFramework(){ //constructor
    currentTime = 0;
    beer.push_back(15);
    beer.push_back(60);
    beer.push_back(25);
  }
  //adds a new event to the priority queue
  void scheduleEvent(Event *newEvent){
    //eventQueue.push(newEvent);
    eventQueue.insert(newEvent); //adds it by using a min heap using the time
  }
  void run(); //function for running the simulation
  unsigned int currentTime; //variable for time in the simulation
  vector<unsigned int> beer;
  unsigned int weightedProbability(vector<unsigned int> v); //function for weighted probability
};

#endif
