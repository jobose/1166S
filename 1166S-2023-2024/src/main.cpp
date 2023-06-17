/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\josep                                            */
/*    Created:      Fri Jun 16 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "autonomous1166S.h"
#include "drivercontrol1166S.h"
#include <iostream>

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  vex::competition comsw;
  // Register the autonomous1166Z function so that it is placed on a new thread
  // when the autonomous period starts. That thread is interrupted when the
  // autonomous period ends.
  comsw.autonomous(autonomous1166S);

  //Brain.Screen.print("%d %s:%d", vex::timer::system(), __FILE__, __LINE__);
  //Brain.Screen.newLine();

  

  // register the drivercontrol1166Z function so that it is placed on a new
  // thread when the driver control period starts. That thread is interrupted
  // when the driver control period ends.
  comsw.drivercontrol(drivercontrol1166S);
}
