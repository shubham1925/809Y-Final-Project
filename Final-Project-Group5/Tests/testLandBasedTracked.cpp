#include <gtest/gtest.h>
#include <iostream>
#include "/home/shubham/809Y-Final-Project/Final-Project-Group5/src/LandBasedTracked/landbasedtracked.h"
#include "/home/shubham/809Y-Final-Project/Final-Project-Group5/src/LandBasedRobot/landbasedrobot.h"

class LandBasedTrackedTest : public ::testing::Test{
	// LandBasedTrackedTest(char direction){
	// 	fp::LandBasedRobot *tracked = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,direction);
	// }
	// ~LandBasedTrackedTest(){

	// }
public:
	char north = 'N';
	char south = 'S';
	char east = 'E';
	char west = 'W';

};

TEST_F(LandBasedTrackedTest, testGetDirection){
	fp::LandBasedRobot *tracked = new fp::LandBasedTracked();
	char direction_null = tracked->GetDirection();
	fp::LandBasedRobot *tracked2 = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,north);
	char direction_north = tracked2->GetDirection();
	EXPECT_EQ('o', direction_null);	
	ASSERT_EQ('N', direction_north);
}

TEST_F(LandBasedTrackedTest, testMoveForward){
	fp::LandBasedRobot *tracked = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,north);
	tracked->MoveForward();
	ASSERT_EQ(0, tracked->x_);
	ASSERT_EQ(1, tracked->y_);
	fp::LandBasedRobot *tracked2 = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,south);
	tracked2->MoveForward();
	ASSERT_EQ(0, tracked2->x_);
	ASSERT_EQ(-1, tracked2->y_);
	fp::LandBasedRobot *tracked3 = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,east);
	tracked3->MoveForward();
	ASSERT_EQ(1, tracked3->x_);
	ASSERT_EQ(0, tracked3->y_);
	fp::LandBasedRobot *tracked4 = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,west);
	tracked4->MoveForward();
	ASSERT_EQ(-1, tracked4->x_);
	ASSERT_EQ(0, tracked4->y_);
}

TEST_F(LandBasedTrackedTest, testTurnLeft){
	fp::LandBasedRobot *tracked = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,north);
	tracked->TurnLeft();
	ASSERT_EQ('W', tracked->direction_);
	fp::LandBasedRobot *tracked2 = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,south);
	tracked2->TurnLeft();
	ASSERT_EQ('E', tracked2->direction_);
	fp::LandBasedRobot *tracked3 = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,east);
	tracked3->TurnLeft();
	ASSERT_EQ('N', tracked3->direction_);
	fp::LandBasedRobot *tracked4 = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,west);
	tracked4->TurnLeft();
	ASSERT_EQ('S', tracked4->direction_);
}

TEST_F(LandBasedTrackedTest, testTurnRight){
	fp::LandBasedRobot *tracked = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,north);
	tracked->TurnRight();
	ASSERT_EQ('E', tracked->direction_);
}

TEST_F(LandBasedTrackedTest, testTurnAround){
	fp::LandBasedRobot *tracked = new fp::LandBasedTracked("track", "Micromouse", 0,0,0,0,0,0,0,north);
	tracked->TurnAround();
	ASSERT_EQ('S', tracked->direction_);
}

int main(int argc, char** argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

