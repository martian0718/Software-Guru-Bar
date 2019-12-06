/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: leaveEvent.CPP
Description:
  Source code for the leave event class.
  Includes "globalV.h" 
*/


#include "leaveEvent.h"
#include "globalV.h"

void LeaveEvent:: processEvent(){
  theBar.leave(groupSize); //adds available chairs based on groupSize
}
