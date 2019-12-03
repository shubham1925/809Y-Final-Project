/**
 * @file api.h
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
* This class is used as an Application Programmable Interface between the 
* micromouse simulator and the used defined functions.
*                                                                                               
* 
*/
#pragma once
#include <string>

namespace fp
{

	class API
	{
		public:
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to obtain the 
		* width of the maze.
		* @param none
		* @return Width of the maze.
		*/
		static int mazeWidth();
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to obtain the 
		* height of the maze.
		* @param none
		* @return Height of the maze.
		*/
		static int mazeHeight();
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to check if a
		* wall is present in front of the robot.
		* @param none
		* @return Returns True if wall is present in front of the robot 
		* and False otherwise. 
		*/
		static bool wallFront();
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to check if a
		* wall is present on the right of the robot 
		* @param none
		* @return Returns True if wall is present on the right of the robot 
		* and False otherwise. 
		*/
		static bool wallRight();
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to check if a
		* wall is present on the left of the robot. 
		* @param none
		* @return Returns True if wall is present on the left of the robot 
		* and False otherwise. 
		*/
		static bool wallLeft();
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to move the robot forward.
		* @param none
		* @return none
		*/
		static void moveForward();
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to turn the robot right.
		* @param none
		* @return none
		*/
		static void turnRight();
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to turn the robot left.
		* @param none
		* @return none
		*/
		static void turnLeft();
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to turn the robot around.
		* @param none
		* @return none
		*/
		static void turnAround();
		/**
		* @brief It is a function of class API. It is used to set a wall 
		* at a given location.
		* @param x : x-coordinate of the robot.
		* @param y : y-coordinate of the robot.
		* @param Direction : Current direction of the wall.
		* @return none
		*/
		static void setWall(int x, int y, char direction);
		/**
		* @brief It is a function of class API. It is used to clear 
		* the wall at the given location.
		* @param x : x-coordinate of the robot.
		* @param y : y-coordinate of the robot.
		* @param Direction : Current direction of the wall.
		* @return none
		*/
		static void clearWall(int x, int y, char direction);
		/**
		* @brief It is a function of class API. It is used to set
		* the color of the coordinate block of the maze in the simulator.
		* @param x : x-coordinate of the robot.
		* @param y : y-coordinate of the robot.
		* @param color : color of the maze coordinate.
		* @return none
		*/
		static void setColor(int x, int y, char color);
		/**
		* @brief It is a function of class API. It is used to clear the set color of the 
		* maze coordinate block.
		* @param x : x-coordinate of the robot.
		* @param y : y-coordinate of the robot.
		* @return none
		*/
		static void clearColor(int x, int y);
		/**
		* @brief It is a function of class API. It is used to clear all the color
		* in the maze.
		* @param none
		* @return none
		*/
		static void clearAllColor();
		/**
		* @brief It is a function of class API. It is used to assign text to coordinate 
		* on the maze. (Max characters =10)
		* @param x : x-coordinate of the robot.
		* @param y : y-coordinate of the robot.
		* @param text : String value to be entered.
		* @return none
		*/
		static void setText(int x, int y, const std::string& text);
		/**
		* @brief It is a function of class API. It is used to clear the text present at 
		* any coordinate in the maze.
		* @param x : x-coordinate of the robot.
		* @param y : y-coordinate of the robot.
		* @return none
		*/
		static void clearText(int x, int y);
		/**
		* @brief It is a function of class API. It is used to clear all the text present in the maze.
		* @param none
		* @return none
		*/
		static void clearAllText();
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to check if reset was pressed.
		* @param none
		* @return Returns True if button was pressed and false otherwise.
		*/
		static bool wasReset();
		/**
		* @brief It is a function of class API
		* and it has no input parameter. It is used to move the robot back to start
		* once the reset button is pressed. It also acknowledges when the movement is completed.
		* @param none
		* @return none
		*/
		static void ackReset();
		/**
		* @brief It is a constructor of a class named API. It is a
		* no param constructor.
		* @param none
		* @return none
		*/
		API();
		/**
		* @brief It is a destructor of class API 
		* that destroys the object created.
		* @param none
		* @return none
		*/
		~API();
	};

}

