/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: softwareGurusBar.h
Description:
  Header file for the Software Guru's Bar
*/

#ifndef SOFTWAREGURUSBAR_H
#define SOFTWAREGURUSBAR_H

using namespace std;

class SoftwareGurusBar {
public:
  //you can play around with number of chairs
  unsigned int freeChairs;
  double profit;
  SoftwareGurusBar(){ //constructor
    freeChairs = 50;
    profit = 0.0;
  }
  bool canSeat(unsigned int numberOfPeople); //seating people
  void order(unsigned int beerType); //ordering drinks
  void leave(unsigned int numberOfPeople); //leaving and adding more available chairs
};

#endif
