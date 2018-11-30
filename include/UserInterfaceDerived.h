/******************************************************************************
 *  MIT License
 *
 *  Copyright (c) 2018 Saimouli Katragadda, Adarsh Jagan Sathyamoorthy
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *******************************************************************************/

/**
 * @file      UserInterfaceDerived.h
 * @author    Adarsh Jagan Sathyamoorthy
 * @copyright MIT License
 * @brief     UserInterfaceDerived Class declaration
 * @detail    Declared Class that inherits from UserInterface class and 
 *            defines the virtual methods here. 
 *            
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
/**
   * @brief Default constructor UserInterface
   * @param none
   * @return none
   */
  UserInterfaceDerived();

/**
   * @brief destructor UserInterface
   * @param none
   * @return none
   */
  ~UserInterfaceDerived();

/**
   * @brief Function returnDefaultChoice
   * @param none
   * @return yes (y) or no (n) of type std::string 
   * The following function will prompt user if they want to test for
   * the default case
   */
  std::string returnDefaultChoice();

 /**
   * @brief Function returnUserChoice
   * @param none
   * @return userChoice of type int
   * The following function will access and return the private varible
   * userChoice, which contains the user input.
   */
  int returnUserChoice();

/**
   * @brief Function returnInputLocation
   * @param none
   * @return fileLocation of type std::string
   * The following function will access and return the private varible
   * fileLocation, which contains the user input file location.
   */
  std::string returnInputLocation();

/**
   * @brief Function returnCameraID
   * @param none
   * @return cameraID of type int
   * The following function will access and return the private varible
   * cameraID, which contains the user input for the camera number.
   */
  int returnCameraID();
};




#endif /* INCLUDE_USERINTERFACEDERIVED_H_ */
