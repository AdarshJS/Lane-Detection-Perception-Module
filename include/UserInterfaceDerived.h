/*
 * UserInterfaceDerived.h
 *
 *  Created on: Nov 30, 2018
 *      Author: root
 */
#include <iostream>
#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "UserInterface.h"
#ifndef INCLUDE_USERINTERFACEDERIVED_H_
#define INCLUDE_USERINTERFACEDERIVED_H_

class UserInterfaceDerived : public UserInterface {
 public:
  UserInterfaceDerived();
  ~UserInterfaceDerived();
  std::string returnDefaultChoice();
  int returnUserChoice();
  std::string returnInputLocation();
  int returnCameraID();
};




#endif /* INCLUDE_USERINTERFACEDERIVED_H_ */
