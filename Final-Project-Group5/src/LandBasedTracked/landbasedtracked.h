/**
 * @file landbasedtracked.h
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
#include "../API/api.h"
#include "../LandBasedRobot/landbasedrobot.h"


namespace fp
{

	class LandBasedTracked : public LandBasedRobot
	{
	protected:
			std::string track_type;

	public:

			/**
			* @brief This is a 10 parameter constructor of the class named LandBasedTracked.
			* @param track_
			* @param name
			* @param speed
			* @param width
			* @param length
			* @param height
			* @param capacity 
			* @param x
			* @param y
			* @param direction
			* @return none
			*/
			LandBasedTracked(std::string track_= "track", std::string name = "MicroMouse", double speed = 0, double width = 0, double length = 0, double height = 0, double capacity = 0, int x = 0, int y = 0, char direction = 'o')
			:LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction), track_type{track_}{}
			
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
			* @brief It is a getter of class LandBasedTracked 
			* and it has no input parameter. It is used to obtain
			* the x-coordinate of the robot.
			* @param none
			* @return The x-coordinate of the robot.
			*/
			int get_x()
			{
				return x_;
			}
			/**
			* @brief It is a getter of class LandBasedTracked 
			* and it has no input parameter. It is used to obtain the 
			* y-coordinate of the robot.
			* @param none
			* @return The y-coordinate of the robot
			*/
			int get_y()
			{
				return y_;
			} 
			/**
			* @brief It is a virtual destructor of class LandBasedTracked 
			* that destroys the object created.
			* @param none
			* @return none
			*/
			virtual ~LandBasedTracked() {}
			
	};

}