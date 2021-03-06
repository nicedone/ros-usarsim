/*
  DISCLAIMER:
  This software was produced by the National Institute of Standards
  and Technology (NIST), an agency of the U.S. government, and by statute is
  not subject to copyright in the United States.  Recipients of this software
  assume all responsibility associated with its operation, modification,
  maintenance, and subsequent redistribution.

  See NIST Administration Manual 4.09.07 b and Appendix I. 
*/

/*!
  \file simware.cpp

  \brief Declarations of simware data structures exchanged between
  the superior and inferior skins.
*/

#include <stdio.h>		// sprintf
#include "simware.hh"

const char *
swRobotType (ROBOT_TYPE type)
{
  //  static char retstr[3 * sizeof (type)];    // not reentrant, just for debugging

  if (type == SW_ROBOT_UNKNOWN)
    return "SW_ROBOT_UNKNOWN";
  if (type == SW_ROBOT_GRD_VEH)
    return "SW_ROBOT_GRD_VEH";
  if (type == SW_ROBOT_AIR_VEH)
    return "SW_ROBOT_AIR_VEH";
  if (type == SW_ROBOT_STATIC_VEH)
    return "SW_ROBOT_STATIC_VEH";
  return "UNKNOWN_STRING";
}

const char *
swTypeToString (sw_type type)
{
  static char retstr[3 * sizeof (type)];	// not reentrant, just for debugging

  if (type == SW_SEN_ENCODER)
    return "SW_SEN_ENCODER";
  if (type == SW_SEN_SONAR)
    return "SW_SEN_SONAR";
  if (type == SW_SEN_RANGESCANNER)
    return "SW_SEN_RANGESCANNER";
  if (type == SW_SEN_RANGEIMAGER)
    return "SW_SEN_RANGEIMAGER";
  if (type == SW_SEN_TOUCH)
    return "SW_SEN_TOUCH";
  if (type == SW_SEN_CO2)
    return "SW_SEN_CO2";
  //  if (type == SW_SEN_GROUNDTRUTH)
  //    return "SW_SEN_GROUNDTRUTH";
  if (type == SW_SEN_INS)
    return "SW_SEN_INS";
  if (type == SW_SEN_GPS)
    return "SW_SEN_GPS";
  if (type == SW_SEN_ODOMETER)
    return "SW_SEN_ODOMETER";
  if (type == SW_SEN_VICTIM)
    return "SW_SEN_VICTIM";
  if (type == SW_SEN_TACHOMETER)
    return "SW_SEN_TACHOMETER";
  if (type == SW_SEN_ACOUSTIC)
    return "SW_SEN_ACOUSTIC";
  if (type == SW_EFF_GRIPPER)
    return "SW_EFF_GRIPPER";
  if (type == SW_EFF_TOOLCHANGER)
    return "SW_EFF_TOOLCHANGER";
  if (type == SW_ACT)
    return "SW_ACT";
  if (type == SW_ROBOT_FIXED)
    return "SW_ROBOT_FIXED";
  if (type == SW_ROBOT_GROUNDVEHICLE)
    return "SW_ROBOT_GROUNDVEHICLE";
  if (type == SW_ROBOT_AIRBOT)
    return "SW_ROBOT_AIRBOT";
  if (type == SW_DEVICE_BOXCHUTE)
    return "SW_DEVICE_BOXCHUTE";
  if (type == SW_DEVICE_CONVEYOR)
    return "SW_DEVICE_CONVEYOR";
  if (type == SW_OBJECT_CARGO)
    return "SW_OBJECT_CARGO";
  if (type == SW_SEN_OBJECTSENSOR)
    return "SW_SEN_OBJECTSENSOR";

  sprintf (retstr, "%d", (int) type);

  return retstr;
}
