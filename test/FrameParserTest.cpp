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
 * @file      FrameParserTest.cpp
 * @author    Saimouli Katragadda (saimouli)
 * @author    Adarsh Jagan Sathyamoorthy
 * @copyright MIT License
 * Copyright (c) 2018 Saimouli Katragadda, Adarsh Jagan Sathyamoorthy
 * @brief     Implements tests for FrameParser class methods
 */

#include<gtest/gtest.h>
#include<gmock/gmock.h>
#include<vector>
#include"FrameParser.h"
#include"UserInterface.h"
#include<cmath>
#include<iostream>

using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

class MockUserInterface : public UserInterface {
 public:
  MOCK_METHOD0(returnDefaultChoice, std::string());
  MOCK_METHOD0(returnUserChoice, int());
  MOCK_METHOD0(returnInputLocation, std::string());
  MOCK_METHOD0(returnCameraID, int());
};

/**
 *@brief  Case to test if extractFrame functions executes successfully for image
 *@param  none
 *@return none
 */

TEST(extractFramesCheck, testProperReturnsAfterGoodRun1) {
  FrameParser f;
   MockUserInterface interface;

  EXPECT_CALL(interface, returnDefaultChoice()).Times(2).WillRepeatedly(
      Return("y"));
  EXPECT_CALL(interface, returnUserChoice()).Times(1).WillOnce(Return(0));

  EXPECT_CALL(interface, returnInputLocation()).Times(AtLeast(1)).WillRepeatedly(
      Return("../data/test.png"));

  std::cout << interface.returnDefaultChoice() << std::endl;
  int returnValue;
  returnValue = f.extractFrame(&interface, true);
  ASSERT_EQ(returnValue, 0);
}

/**
 *@brief  Case to test if extractFrame functions executes successfully for video
 *@param  none
 *@return none
 */
TEST(processImagecheck, testProperReturnsAfterGoodRun2) {
  FrameParser f;
  MockUserInterface interface;

  EXPECT_CALL(interface, returnDefaultChoice()).Times(2).WillRepeatedly(
      Return("y"));
  //EXPECT_CALL(interface, returnCameraID()).Times(1).WillOnce(Return(15));
  EXPECT_CALL(interface, returnUserChoice()).Times(1).WillOnce(Return(1));

  EXPECT_CALL(interface, returnInputLocation()).Times(AtLeast(1)).WillRepeatedly(
      Return("../data/testVideo.mp4"));

  std::cout << interface.returnDefaultChoice() << std::endl;
  int returnValue;
  returnValue = f.extractFrame(&interface, true);
  ASSERT_EQ(returnValue, 0);
}


