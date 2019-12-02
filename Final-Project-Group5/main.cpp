/**
 * @file landbasedrobot.h
 * @authors
 * Group 5 
* 
* Shubham Sonawane shubhams@umd.edu \n
* Sanket Goyal sanket193@gmail.com \n
* Dipam Patel dipu18@umd.edu \n
* Kartik Venkat kartik.venkat86@gmail.com \n
* Arjun Srinivasan arjunsrinivasan.a@gmail.com \n 
* Kulbir Singh Ahluwalia kulbir@umd.edu \n
* @version 3.0
*
* @section LICENSE
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* @section DESCRIPTION
* 
* This is an abstract class whose attributes and methods are used by 
* the derived classes, namely LandBasedWheeled and LandBasedTracked.
*                                                                                               
* 
*/
#include <iostream>
#include <memory>
#include "src/Algorithm/algorithm.h"
#include "src/API/api.h"
#include "src/Maze/maze.h"
#include "src/LandBasedWheeled/landbasedwheeled.h"


int main()
{
    // Land Based Wheeled robot smart pointer
    // Parameters wheel_number, name, speed, width, length, height, capacity, x, y, direction
	/**
	* @brief ------------------????
	* @param none
	* @return none
	*/
    std::shared_ptr<fp::LandBasedRobot> MicroMouse = std::make_shared<fp::LandBasedWheeled>(2, "MicroMouse", 0, 5, 5, 5, 0, 0, 0, 'N');
    
	// Algorithm class object
    fp::Algorithm algo;
    algo.SolveDFS(MicroMouse);
    std::cerr << "Goal Reached" << std::endl;
    return 0;
}
