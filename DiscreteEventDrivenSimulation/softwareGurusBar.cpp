/*

Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: softwareGurusBar.CPP
Description:
  Source file for Software Guru Bar which contains the
  canSeat(), order(), and leave() functions

*/

#include <iostream>
#include "softwareGurusBar.h"
#include "simulationFramework.h"
#include "globalV.h"
#include <cstdlib>

using namespace std;

bool SoftwareGurusBar:: canSeat(unsigned int numberOfPeople){
  //if sufficient room, then seat customers
  cout<<"Time: "<<theSimulation.currentTime;
  cout<<"Group of " << numberOfPeople << " customers arrives";
  if(numberOfPeople < freeChairs){
    cout<<" Group is seated." <<endl;
    freeChairs -= numberOfPeople;
    return true;
  } else {
    cout<<" No room, group leaves the bar." << endl;
    return false;
  }
}

void SoftwareGurusBar:: order(unsigned int beerType){
  //serve the beer
  cout<<"Time: "<< theSimulation.currentTime;
  cout<<". Serviced order for "<< beerType <<endl;
  //update profit based on this beerType
  if(beerType == 0){
    profit += 2;
  } else if(beerType == 1){
    profit += 3;
  } else if(beerType == 2){
    profit += 4;
  } else {
    profit += 0.0;
  }
}

void SoftwareGurusBar:: leave(unsigned int numberOfPeople){
    //people leave, free up chairs
    cout<<"Time: "<< theSimulation.currentTime;
    cout<<". Group of size "<< numberOfPeople << " leaves."<<endl;
    freeChairs+= numberOfPeople;
}
