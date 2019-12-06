/*
Author: Martin Wu
Class: MWF 10:30 Data Structures and Algorithms class
File: globalV.h
Description:
  Header file for the global variables.
  Includes "randomInteger.h", "softwareGurusBar.h", and
  "simulationFramework.h"
*/

#ifndef GLOBALV_H
#define GLOBALV_H

#include "randomInteger.h"
#include "softwareGurusBar.h"
#include "simulationFramework.h"

using namespace std;

extern randomInteger randomizer;
extern SoftwareGurusBar theBar;
extern SimulationFramework theSimulation;

#endif
