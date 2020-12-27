#include <gtest/gtest.h>
#include <iostream>
#include "/home/shubham/809Y-Final-Project/Final-Project-Group5/src/Maze/maze.h"

fp::Maze maze;

TEST(testMaze, testUpdateWall){
	
	maze.UpdateWall(1, 1, 'N');
	ASSERT_EQ(1, maze.NorthWall[1][1]);	
}

TEST(testMaze, testReadWallNorth){
	// fp::Maze maze;
	ASSERT_EQ(1, maze.NorthWall[1][1]);
}

int main(int argc, char** argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}