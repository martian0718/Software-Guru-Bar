/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: orderEvent.CPP
Description:
  Source file for the order event class.
*/

#include <cstdlib>
#include <ctime>
#include "orderEvent.h"
#include "reorderEvent.h" //for scheduling the reorder event
#include "leaveEvent.h" //for scheduling the leave event
#include "globalF.h" //for using randBetween()
//#include "globalV.h"
#include "simulationFramework.h"


void OrderEvent:: processEvent(){

  //each memeber of the group orders a beer (type 0,1,2)
  for(int i = 0; i < groupSize; i++){
    theBar.order(theSimulation.weightedProbability(theSimulation.beer)); //weighted probability
    //theBar.order(randBetween(0,2)); //this can be used for 33%
  }
  unsigned int r = rand() % 5 + 1; //1-5 finding the chances of someone reordering
  if(r <= 2){
    unsigned int a = theSimulation.currentTime + randBetween(10,20);
    theSimulation.scheduleEvent(new ReorderEvent(a,groupSize));
  } else {
    unsigned int t = theSimulation.currentTime + randBetween(15,35);
    //all the group leaves together
    theSimulation.scheduleEvent(new LeaveEvent(t, groupSize));
  }
}
