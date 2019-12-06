/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: main.CPP
Description:
  Holds the main and runs the entire Discrete event driven simulation.
  Includes "globalF.h", "globalV.h", "arriveEvent.h"
*/

#include <iostream> //for cout
#include <cstdlib> //for rand()
#include <ctime> //for time
#include "globalF.h" //for the randBetween function
#include "globalV.h" //for theSimulation and theBar
#include "arriveEvent.h" //for scheduling the new arrive event

using namespace std;

int main(){
  srand(time(NULL));
  //start out at time zero.
  unsigned int t = 0;
  //simulates four hours
  while(t < 240){
    //creates a random time between 2-5 minutes for people to arrive
    t+= randBetween(2,5);
    theSimulation.scheduleEvent(new ArriveEvent(t,randBetween(1,5)));
  }
  //runs the entire simulation
  theSimulation.run();
  //prints out the total profits
  cout<<"Total profits: "<< theBar.profit << endl;
  return 0;
}
