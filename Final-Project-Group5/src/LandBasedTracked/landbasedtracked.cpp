#include <iostream>
#include "../API/api.h"
#include "landbasedtracked.h"

char fp::LandBasedTracked::GetDirection() 
	{
		return direction_;
	}

void fp::LandBasedTracked::MoveForward()
	{	// Setting the x and y coordinates that define the current orientation of the robot ie.(N, E, S, W).
		if(fp::LandBasedTracked::GetDirection() == 'N') 
			{
				x_ = x_;
				y_ = y_ + 1;
			}
		else if(fp::LandBasedTracked::GetDirection() == 'E')
			{
				x_ = x_ + 1;
				y_ = y_ ; 
			}
		else if(fp::LandBasedTracked::GetDirection() == 'S')
			{
				x_ = x_ ;
				y_ = y_ - 1; 
			}
		else if(fp::LandBasedTracked::GetDirection() == 'W')
			{
				x_ = x_ - 1;
				y_ = y_ ; 
			}
		fp::API::moveForward();
	}

void fp::LandBasedTracked::TurnLeft()
	{
		if(fp::LandBasedTracked::GetDirection() == 'N')
			direction_ = 'W';
		else if(fp::LandBasedTracked::GetDirection() == 'E')
			direction_ = 'N';
		else if(fp::LandBasedTracked::GetDirection() == 'S')
			direction_ = 'E';
		else if(fp::LandBasedTracked::GetDirection() == 'W')
			direction_ = 'S';
		fp::API::turnLeft();
	}

void fp::LandBasedTracked::TurnRight()
	{
		if(fp::LandBasedTracked::GetDirection() == 'N')
			direction_ = 'E';
		else if(fp::LandBasedTracked::GetDirection() == 'E')
			direction_ = 'S';
		else if(fp::LandBasedTracked::GetDirection() == 'S')
			direction_ = 'W';
		else if(fp::LandBasedTracked::GetDirection() == 'W')
			direction_ = 'N';
		fp::API::turnRight();
	}

void fp::LandBasedTracked::TurnAround()
	{
		if(fp::LandBasedTracked::GetDirection() == 'N')
			direction_ = 'S';
		else if(fp::LandBasedTracked::GetDirection() == 'E')
			direction_ = 'W';
		else if(fp::LandBasedTracked::GetDirection() == 'S')
			direction_ = 'N';
		else if(fp::LandBasedTracked::GetDirection() == 'W')
			direction_ = 'E';
		fp::API::turnAround();
	}
