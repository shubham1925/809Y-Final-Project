/**
 * @file algorithm.h
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
* This class is used to implement the Depth First Search 
* algorithm and navigate the robot through the maze. 
*                                                                                               
* 
*/
#pragma once
#include <iostream>
#include <utility>
#include <algorithm> 
#include <memory>
#include <vector>
#include <map> 
#include "../LandBasedWheeled/landbasedwheeled.h"
#include "../LandBasedTracked/landbasedtracked.h"
#include "../Maze/maze.h"
#include "../API/api.h"
#include <array> 
#include <stack> 


namespace fp
{

class Algorithm
{
    private:

        fp::Maze maze;
        int r ;    //y
        int c ;    //x
        char dir = 'N';
        std::stack<int> rs; 
        std::stack<int> cs; 

        std::array<std::array<bool, 16>, 16> visited;

        
    public:
		/**
		* @brief This is a no parameter constructor of Algorithm class. 
		* It is used to initialize the required stacks and arrays.
		* @param none
		* @return none
		*/
        Algorithm(){
			r =0;//y
			c=0;//x
			dir = 'N';
			visited={0};
			visited[r][c]=true;
			rs.push(r);
			cs.push(c);
				
		}
        
		/**
		* @brief -This is a boolean function to check if the Goal is reached.
		* @param x-coordinate of the robot.
		* @param y-coordinate of the robot.
		* @return It returns True if the goal is reached and False otherwise.
		*/
        bool CheckGoal(int, int);
        
		/**
		* @brief This is a function that implements Depth First Search Algorithm.
		* @param Shared pointer to the robot class.
		* @return none
		*/
        void SolveDFS(std::shared_ptr<fp::LandBasedRobot>);
        

		/**
		* @brief This function is used to move the robot through the maze.
		* @param Shared pointer to the robot class.
		* @param Robot x-coordinate.
		* @param Robot y- coordinate.
		* @return none
		*/
        void MoveRobot(std::shared_ptr<fp::LandBasedRobot> robot,int r,int c);

};

}
