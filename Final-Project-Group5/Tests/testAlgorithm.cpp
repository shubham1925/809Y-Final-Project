#include "/home/shubham/809Y-Final-Project/Final-Project-Group5/src/Algorithm/algorithm.h"
#include "/home/shubham/809Y-Final-Project/Final-Project-Group5/src/LandBasedWheeled/landbasedwheeled.h"
#include "/home/shubham/809Y-Final-Project/Final-Project-Group5/src/LandBasedRobot/landbasedrobot.h"

#include <gtest/gtest.h>
#include <memory>
#include <iostream>

// fp::Algorithm algo;
// std::shared_ptr<fp::LandBasedRobot> MicroMouse = std::make_shared<fp::LandBasedWheeled>(2, "MicroMouse", 0, 5, 5, 5, 0, 0, 0, 'N');



TEST(testAlgorithm, testCheckGoal){
	fp::Algorithm algo;
	// std::shared_ptr<fp::LandBasedRobot> MicroMouse = std::make_shared<fp::LandBasedWheeled>(2, "MicroMouse", 0, 5, 5, 5, 0, 0, 0, 'N');
	ASSERT_EQ(true, algo.CheckGoal(7,7));
	ASSERT_EQ(false, algo.CheckGoal(10,11));
}

int main(int argc, char **argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

