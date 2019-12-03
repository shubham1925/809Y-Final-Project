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
#pragma once
#include <iostream>
#include <string>

namespace fp
{

	class LandBasedRobot
	{
	protected:
			std::string name_;
			double speed_;
			double width_;
			double length_;
			double height_;
			double capacity_;
			int x_;
			int y_;
			char direction_;

	public:
			/**
			* @brief It is a 9 parameter constructor of the class named LandBasedRobot
			* and it initialises name_, x_ and y_
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
			LandBasedRobot(std::string name = "mouse", double speed = 0, double width = 0, double length = 0, double height = 0, double capacity = 0, int x = 0, int y = 0, char direction = 'o')
			:name_{name}, speed_{speed}, width_{width}, length_{length}, height_{height}, capacity_ {capacity}, x_{x}, y_{y}, direction_{direction} {}
			/**
			* @brief It is a pure virtual function of class LandBasedTracked 
			* and it has no parameter. It is used to obtain the current robot direction.
			* @param none
			* @return none
			*/
			virtual char GetDirection() = 0;
			/**
			* @brief It is a pure virtual function of class LandBasedTracked 
			* and it has no parameter. It is used to move the robot forward.
			* @param none
			* @return none
			*/
			virtual void MoveForward() = 0;
			/**
			* @brief It is a pure virtual function of class LandBasedTracked 
			* and it has no parameter. It is used to turn the robot in the 
			* left direction.
			* @param none
			* @return none
			*/
			virtual void TurnLeft() = 0;
			/**
			* @brief It is a pure virtual function of class LandBasedTracked 
			* and it has no parameter. It is used to turn the robot in the 
			* right direction.
			* @param none
			* @return none
			*/
			virtual void TurnRight() = 0;
			/**
			* @brief It is a pure virtual function of class LandBasedTracked 
			* and it has no parameter. It is used to turn the robot around.
			* @param none
			* @return none
			*/
			virtual void TurnAround() = 0;
			/**
			* @brief It is a getter of class LandBasedTracked 
			* and it has no input parameter. It is used to obtain
			* the x-coordinate of the robot.
			* @param none
			* @return The x-coordinate of the robot.
			*/
			virtual int get_x()
			{
				return x_;
			}
			/**
			* @brief It is a getter of class LandBasedTracked 
			* and it has no input parameter. It is used to obtain the 
			* y-coordinate of the robot.
			* @param none
			* @return none
			*/
			virtual int get_y()
			{
				return y_;
			}
			/**
			* @brief It is a virtual destructor of class LandBasedRobot 
			* that destroys the object created.
			* @param none
			* @return none
			*/
			virtual ~LandBasedRobot() {}
	};

}