/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File:randomInteger.CPP
Description:
  Source file for the random integer class
*/

#include "randomInteger.h"
#include <cstdlib> //for rand()


using namespace std;

unsigned int randomInteger:: operator () (unsigned int max){
  //rand return random integer
  //convert to unsgined to make positive
  //take remainder to put in range
  //srand(time(0));
  unsigned int rval = rand();
  return rval % max;
}
