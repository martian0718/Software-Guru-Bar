/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: globalF.CPP
Description:
  Source file for holding the global functions
  Includes "globalF.h"
*/

#include "globalF.h"

using namespace std;
//creates a random number between low and high
unsigned int randBetween(int low, int high){
  return low + randomizer(high-low);
}
