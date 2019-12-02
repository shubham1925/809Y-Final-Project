/**
 * @file landbasedwheeled.h
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
* This is a concrete class that is derived from the base class (LandBasedRobot)
*
*/
#pragma once
#include <iostream>
#include <string>
#include "../LandBasedRobot/landbasedrobot.h"

namespace fp
{

	class LandBasedWheeled : public LandBasedRobot
	{
	protected:
			int wheel_number;

	public:
			/**
			* @brief It is a 3 parameter constructor of a class named LandBasedWheeled 
			* that initialises name_, x_, y_
			* @param name
			* @param x
			* @param y
			* @return none
			*/
			LandBasedWheeled(int wheel_num = 2, std::string name = "MicroMouse", double speed = 0, double width = 0, double length = 0, double height = 0, double capacity = 0, int x = 0, int y = 0, char direction = 'o' )
			:LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction), wheel_number{wheel_num}{}
			/**
			* @brief It is a virtual function of class LandBasedTracked 
			* and it has no parameter. It is used to obtain the current robot direction.
			* @param none
			* @return none
			*/
			virtual char GetDirection() override;
			/**
			* @brief It is a virtual function of class LandBasedTracked 
			* and it has no parameter. It is used to move the robot forward.
			* @param none
			* @return none
			*/
			virtual void MoveForward() override;
			/**
			* @brief It is a virtual function of class LandBasedTracked 
			* and it has no parameter. It is used to turn the robot in the 
			* left direction.
			* @param none
			* @return none
			*/
			virtual void TurnLeft() override;
			/**
			* @brief It is a virtual function of class LandBasedTracked 
			* and it has no parameter. It is used to turn the robot in the 
			* right direction.
			* @param none
			* @return none
			*/
			virtual void TurnRight() override;
			/**
			* @brief It is a virtual function of class LandBasedTracked 
			* and it has no parameter. It is used to turn the robot around.
			* @param none
			* @return none
			*/
			virtual void TurnAround() override;
			
			
			/**
			* @brief It is a function of class LandBasedTracked 
			* and it has no input parameter. It is used to obtain
			* the x-coordinate of the robot.
			* @param none
			* @return The x-coordinate of the robot.
			*/
			int get_x() const;
			/**
			* @brief It is a function of class LandBasedTracked 
			* and it has no input parameter. It is used to obtain the 
			* y-coordinate of the robot.
			* @param none
			* @return none
			*/
			int get_y() const; 
			virtual ~LandBasedWheeled() {}

	};

}