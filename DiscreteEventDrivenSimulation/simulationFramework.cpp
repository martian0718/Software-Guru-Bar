/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: simulationFramework.CPP
Description:
  Source file for the simulation framework and defines
  a couple functions including run(), and weightedProbability().
*/

#include "simulationFramework.h"
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

void SimulationFramework:: run(){
  while(!eventQueue.isEmpty()){ //isEmpty
    Event *nextEvent = eventQueue.deleteMin();
    //updating current time in Simulation
    currentTime = nextEvent->time;
    //process the next event
    nextEvent->processEvent();
    //cleanup nextEvent object
    delete nextEvent;
  }
}
//To find which beer the customer will drink using a weighted probability instead of just random
unsigned int SimulationFramework:: weightedProbability(vector<unsigned int> v){
  unsigned int max;
  for(int i = 0; i < v.size(); i++){
    max += v[i];
  }
  unsigned int random = rand() % max + 1; //random number between 1 and 100
  unsigned int comparer;
  unsigned int count = 0;
  for(int i = 0; i < v.size(); i++){
    comparer+=v[i];
    if(random <= comparer)
      return count;
    count++;
  }

}
