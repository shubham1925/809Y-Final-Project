cmake_minimum_required(VERSION 2.6)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(testAlgo /home/shubham/809Y-Final-Project/Final-Project-Group5/Tests/testAlgorithm.cpp src/Algorithm/algorithm.cpp src/API/api.cpp src/Maze/maze.cpp)
target_link_libraries(testAlgo ${GTEST_LIBRARIES} pthread)

add_executable(testAPI /home/shubham/809Y-Final-Project/Final-Project-Group5/Tests/testAPI.cpp src/API/api.cpp)
target_link_libraries(testAPI ${GTEST_LIBRARIES} pthread)

add_executable(testMaze /home/shubham/809Y-Final-Project/Final-Project-Group5/Tests/testMaze.cpp src/API/api.cpp src/Maze/maze.cpp)
target_link_libraries(testMaze ${GTEST_LIBRARIES} pthread)

add_executable(testTracked /home/shubham/809Y-Final-Project/Final-Project-Group5/Tests/testLandBasedTracked.cpp src/LandBasedTracked/landbasedtracked.cpp src/API/api.cpp src/LandBasedRobot/landbasedrobot.h)
target_link_libraries(testTracked ${GTEST_LIBRARIES} pthread)
