#include <gtest/gtest.h>
#include <iostream>
#include "/home/shubham/809Y-Final-Project/Final-Project-Group5/src/LandBasedTracked/landbasedtracked.h"
#include "/home/shubham/809Y-Final-Project/Final-Project-Group5/src/LandBasedRobot/landbasedrobot.h"

TEST(testTracked, testGetDirection){
	fp::LandBasedRobot *tracked = new fp::LandBasedTracked();
	char direction = tracked->GetDirection();
	ASSERT_EQ('o', direction);	
}

TEST(testTracked, testMoveForward){
	fp::LandBasedRobot *tracked = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,'N');
	tracked->MoveForward();
	ASSERT_EQ(0, tracked->x_);
	ASSERT_EQ(1, tracked->y_);
}

TEST(testTracked, testTurnLeft){
	fp::LandBasedRobot *tracked = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,'N');
	tracked->TurnLeft();
	ASSERT_EQ('W', tracked->direction_);
}

TEST(testTracked, testTurnRight){
	fp::LandBasedRobot *tracked = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,'N');
	tracked->TurnRight();
	ASSERT_EQ('E', tracked->direction_);
}

TEST(testTracked, testTurnAround){
	fp::LandBasedRobot *tracked = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,'N');
	tracked->TurnAround();
	ASSERT_EQ('S', tracked->direction_);
}

int main(int argc, char** argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

