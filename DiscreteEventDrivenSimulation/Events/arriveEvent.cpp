
/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: arriveEvent.cpp
Description:
  Source File for the Arrive Event class and contains the processEvent()
*/


#include "arriveEvent.h"
#include "orderEvent.h"
#include "simulationFramework.h"
#include "globalF.h"
#include "globalV.h"

using namespace std;

SimulationFramework theSimulation;
SoftwareGurusBar theBar;
randomInteger randomizer;


void ArriveEvent:: processEvent(){
  if(theBar.canSeat(groupSize)){
    //place an order within 2 & 10 minutes
    theSimulation.scheduleEvent(new OrderEvent
      (theSimulation.currentTime + randBetween(2,10),groupSize));
  }
}
