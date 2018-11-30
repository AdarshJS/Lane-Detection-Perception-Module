/*
 * UserInterfaceDerived.cpp
 *
 *  Created on: Nov 30, 2018
 *      Author: root
 */


#include "UserInterfaceDerived.h"

UserInterfaceDerived::UserInterfaceDerived() {
  std::cout<<"Derived Default constructor"<<std::endl;
}

UserInterfaceDerived::~UserInterfaceDerived() {
}

std::string UserInterfaceDerived::returnDefaultChoice() {
  if (defaultChoice == "n" || defaultChoice == "N") {
    std::cout << "Do you want to test for default case? (enter y/n)"
              << std::endl;
    std::cin >> defaultChoice;
  }
  return defaultChoice;
}

int UserInterfaceDerived::returnUserChoice() {
  return userChoice;
}

std::string UserInterfaceDerived::returnInputLocation() {
  return fileLocation;
}

int UserInterfaceDerived::returnCameraID() {
  return cameraID;
}
