/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: reorderEvent.CPP
Description:
  source file for the re order event class

*/


#include "reorderEvent.h"
#include "leaveEvent.h" //for scheduling the next event
#include "globalF.h" //for randbetween()
#include "simulationFramework.h"//?


using namespace std;

void ReorderEvent:: processEvent(){

  for(int i = 0; i < groupSize; i++){
    theBar.order(randBetween(0,2));
  }
  unsigned int t = theSimulation.currentTime + randBetween(15,35);
  //all the group leaves together
  theSimulation.scheduleEvent(new LeaveEvent(t, groupSize));

}
