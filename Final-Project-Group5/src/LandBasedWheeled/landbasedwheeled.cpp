#include <iostream>
#include "../API/api.h"
#include "landbasedwheeled.h"

char fp::LandBasedWheeled::GetDirection() 
	{
		return direction_;
	}

int fp::LandBasedWheeled::get_x() const 
	{
		return x_;
	}

int fp::LandBasedWheeled::get_y() const 
	{
		return y_;
	}

void fp::LandBasedWheeled::MoveForward()

	{	// Setting the x and y coordinates that define the current orientation of the robot ie.(N, E, S, W).
		if(fp::LandBasedWheeled::GetDirection() == 'N') 
			{
				x_ = x_;
				y_ = y_ + 1;
			}
		else if(fp::LandBasedWheeled::GetDirection() == 'E')
			{
			   x_ = x_ + 1;
			   y_ = y_ ; 
			}
		else if(fp::LandBasedWheeled::GetDirection() == 'S')
			{
			   x_ = x_ ;
			   y_ = y_ - 1; 
			}
		else if(fp::LandBasedWheeled::GetDirection() == 'W')
			{
			   x_ = x_ - 1;
			   y_ = y_ ; 
			}
		fp::API::moveForward();
	}

void fp::LandBasedWheeled::TurnLeft()
	{
		if(fp::LandBasedWheeled::GetDirection() == 'N')
			direction_ = 'W';
		else if(fp::LandBasedWheeled::GetDirection() == 'E')
			direction_ = 'N';
		else if(fp::LandBasedWheeled::GetDirection() == 'S')
			direction_ = 'E';
		else if(fp::LandBasedWheeled::GetDirection() == 'W')
			direction_ = 'S';
		fp::API::turnLeft();
	}

void fp::LandBasedWheeled::TurnRight()
	{
		if(fp::LandBasedWheeled::GetDirection() == 'N')
			direction_ = 'E';
		else if(fp::LandBasedWheeled::GetDirection() == 'E')
			direction_ = 'S';
		else if(fp::LandBasedWheeled::GetDirection() == 'S')
			direction_ = 'W';
		else if(fp::LandBasedWheeled::GetDirection() == 'W')
			direction_ = 'N';
		fp::API::turnRight();
	}

void fp::LandBasedWheeled::TurnAround()
	{
		if(fp::LandBasedWheeled::GetDirection() == 'N')
			direction_ = 'S';
		else if(fp::LandBasedWheeled::GetDirection() == 'E')
			direction_ = 'W';
		else if(fp::LandBasedWheeled::GetDirection() == 'S')
			direction_ = 'N';
		else if(fp::LandBasedWheeled::GetDirection() == 'W')
			direction_ = 'E';
		fp::API::turnAround();
	}

