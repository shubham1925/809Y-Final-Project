#include "algorithm.h"
#include <stack> 
#include <array> 

//Check if the Goal is reached.
bool fp::Algorithm::CheckGoal(int x, int y) 
	{
		if((x == 7 && y == 7) || (x == 8 && y == 8) || (x == 7 && y == 8) || (x == 8 && y == 7))
			return true;
		return false;
	}

// Implementing the Depth First Search Algorithm.
void fp::Algorithm::SolveDFS(std::shared_ptr<fp::LandBasedRobot> robot) 
{
    
	//c is x
	//r is y

    if(fp::Algorithm::CheckGoal(c, r))
		{	
			
			
			while (!rs.empty()) 
				{ 
					fp::API::setColor(cs.top(), rs.top(), 'G');
					rs.pop(); 
					cs.pop();
				} 
			return;
		}
		
    maze.UpdateWall(c,r,dir);
	
	
	// Check South Direction
    if((maze.ReadWallSouth(c, r) == false)&&(visited[c][r-1]==false)&&(r>0))
    
		{
			
			rs.push(r-1);
			cs.push(c);
			fp::Algorithm::MoveRobot(robot,r-1,c);
			visited[c][r-1]=true;
			r=r-1;
			c=c;
			dir='S';
			fp::Algorithm::SolveDFS(robot);
		}
             
    // Check East Direction.         
    else if((maze.ReadWallEast(c, r) == false)&&(visited[c+1][r]==false)&&(c<15))

		{              
               
			rs.push(r);
			cs.push(c+1);
			fp::Algorithm::MoveRobot(robot,r,c+1);
			visited[c+1][r]=true;
			r=r;
			c=c+1;
			dir='E';
			fp::Algorithm::SolveDFS(robot);
		}
    // Check North Direction.         
    else if((maze.ReadWallNorth(c, r) == false)&&(visited[c][r+1]==false)&&(r<15))
           
		{
			
			rs.push(r+1);
			cs.push(c);
			fp::Algorithm::MoveRobot(robot,r+1,c);
			visited[c][r+1]=true;
			r=r+1;
			c=c;
			dir='N';
			fp::Algorithm::SolveDFS(robot);
		}
    // Check West Direction.         
    else if((maze.ReadWallWest(c, r) == false)&&(visited[c-1][r]==false)&&(c>0))
             
		{
			
			rs.push(r);
			cs.push(c-1);
			fp::Algorithm::MoveRobot(robot,r,c-1);
			visited[c-1][r]=true;
			r=r;
			c=c-1;
			dir='W';
			fp::Algorithm::SolveDFS(robot);
		}
	// Clear and update the robot coordinates.
    else 
		{
			rs.pop();
			cs.pop();
			fp::Algorithm::MoveRobot(robot,rs.top(),cs.top());
			r=rs.top();
			c=cs.top();
			dir=robot->GetDirection();
			fp::Algorithm::SolveDFS(robot);
        }
}
// Moving the robot through the maze.
void fp::Algorithm::MoveRobot(std::shared_ptr<fp::LandBasedRobot> robot,int r,int c) 
{
    
    int curr_x=robot->get_x();
    int curr_y=robot->get_y();
    int curr_dir=robot->GetDirection();
	fp::API::setColor(robot->get_x(),robot->get_y(),'Y');
    if(!((curr_y==r)&&(curr_x==c)))
    {	
		//Movement in North direction.
        if(r>curr_y)
        
			{
				if(curr_dir=='N')
					{robot->MoveForward();}
				if(curr_dir=='E')
					{  robot->TurnLeft();
					robot->MoveForward();}
				if(curr_dir=='W')
					{  robot->TurnRight();
					robot->MoveForward();}
				if(curr_dir=='S')
					{  robot->TurnRight();
					   robot->TurnRight();
					   robot->MoveForward();}
			}
		//Movement in South Direction.
        if(r<curr_y)
			
			{
				if(curr_dir=='S')
					{robot->MoveForward();}
				if(curr_dir=='W')
					{  robot->TurnLeft();
					robot->MoveForward();}
				if(curr_dir=='E')
					{  robot->TurnRight();
					robot->MoveForward();}
				if(curr_dir=='N')
					{  robot->TurnRight();
					   robot->TurnRight();
					   robot->MoveForward();}
			}
		//Movement in East Direction.
		if(c>curr_x)
			
			{
				if(curr_dir=='E')
					{robot->MoveForward();}
				if(curr_dir=='S')
					{  robot->TurnLeft();
						robot->MoveForward();}
				if(curr_dir=='N')
					{  robot->TurnRight();
						robot->MoveForward();}
				if(curr_dir=='W')
					{  robot->TurnRight();
					   robot->TurnRight();
					   robot->MoveForward();}
			}
        //Movement in West Direction.
		if(c<curr_x)
			{
				if(curr_dir=='W')
					{robot->MoveForward();}
				if(curr_dir=='N')
					{  robot->TurnLeft();
						robot->MoveForward();}
				if(curr_dir=='S')
					{  robot->TurnRight();
						robot->MoveForward();}
				if(curr_dir=='E')
					{  robot->TurnLeft();
					   robot->TurnLeft();
					   robot->MoveForward();}
			}
	}
	
}
	