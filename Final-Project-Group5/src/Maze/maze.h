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
#include <array>
#include <iostream>
#include "../API/api.h"

namespace fp
{
	class Maze
	{
		private:
			// Four 2-D arrays for four probable walls around a cell  
			/**
			* @brief 2D array of size 16*16 to store the North wall
			* @param none
			* @return none
			*/
			std::array<std::array<int, 16>, 16> NorthWall;
			/**
			* @brief 2D array of size 16*16 to store the East wall
			* @param none
			* @return none
			*/
			std::array<std::array<int, 16>, 16> EastWall;
			/**
			* @brief 2D array of size 16*16 to store the South wall
			* @param none
			* @return none
			*/
			std::array<std::array<int, 16>, 16> SouthWall;
			/**
			* @brief 2D array of size 16*16 to store the West wall
			* @param none
			* @return none
			*/
			std::array<std::array<int, 16>, 16> WestWall;
				
		public:
			Maze();
			
			// For updating wall arrays corresponding to a cell
			/**
			* @brief A fuction belonging to the maze class. This function is used to update the 
			* newly discovered walls
			* @param x coordinate of the wall
			* @param y-coordinate of the wall
			* @param direction of the wall.
			* @return none
			*/
			void UpdateWall(int, int, char); 
			
			// Whether there is a wall in north or not
			/**
			* @brief A fuction belonging to the maze class. This function is used to read the north wall.
			* @param x coordinate of the wall
			* @param y-coordinate of the wall
			* @return none
			*/
			int ReadWallNorth(int, int); 
			// Whether there is a wall in east or not
			/**
			* @brief A fuction belonging to the maze class. This function is used to read the East wall.
			* @param x coordinate of the wall
			* @param y-coordinate of the wall
			* @return none
			*/
			int ReadWallEast(int, int);
			// Whether there is a wall in west or not
			/**
			* @brief A fuction belonging to the maze class. This function is used to read the West wall.
			* @param x coordinate of the wall
			* @param y-coordinate of the wall
			* @return none
			*/
			int ReadWallWest(int, int);
			// Whether there is a wall in south or not
			/**
			* @brief A fuction belonging to the maze class. This function is used to read the South wall.
			* @param x coordinate of the wall
			* @param y-coordinate of the wall
			* @return none
			*/
			int ReadWallSouth(int, int);
			
			
			~Maze() {}

	};

}

