#include "maze.h"
#include "../API/api.h"

fp::Maze::Maze()
{   //Initialize all 4 walls of a cell to zero.
    for(int col = 0; col < 16; col++) 
    { 
        for(int row = 0; row < 16; row++) 
        {           
            NorthWall[col][row] = 0;
            EastWall[col][row] = 0;
            SouthWall[col][row] = 0;
            WestWall[col][row] = 0;            
        }
    }
	//Mark the start nd goal position.
    fp::API::setColor(0,0,'G');
    fp::API::setText(0,0,"Start");
    fp::API::setColor(7,7,'G');
    fp::API::setText(7,7,"A");
    fp::API::setColor(7,8,'G');
    fp::API::setText(7,8,"G");
    fp::API::setColor(8,7,'G');
    fp::API::setText(8,7,"L");
    fp::API::setColor(8,8,'G');
    fp::API::setText(8,8,"O");  
    
}
//Updating the wall as the robot progresses through the maze.
void fp::Maze::UpdateWall(int x, int y, char d)
{
    switch(d)
    {	
		//When the current direction is North.
        case 'N':
				if(fp::API::wallFront()) 
					{
						fp::API::setWall(x, y, 'n');
						NorthWall[x][y] = 1;
					}
				if(fp::API::wallLeft()) 
					{
						fp::API::setWall(x, y, 'w');
						WestWall[x][y] = 1;
					}
				if(fp::API::wallRight()) 
					{
						fp::API::setWall(x, y, 'e');
						EastWall[x][y] = 1;
					}
				break;
		//When the current direction is East.
        case 'E':
				if(fp::API::wallFront())
					{
						fp::API::setWall(x, y, 'e');
						EastWall[x][y] = 1;
					}
				if(fp::API::wallLeft()) 
					{
						fp::API::setWall(x, y, 'n');
						NorthWall[x][y] = 1;
					}
				if(fp::API::wallRight()) 
					{
						fp::API::setWall(x, y, 's');
						SouthWall[x][y] = 1;
					}
				break;
		//When the current direction is South.
        case 'S':
				if(fp::API::wallFront())
					{
						fp::API::setWall(x, y, 's');
						SouthWall[x][y] = 1;
					}
				if(fp::API::wallLeft())
					{
						fp::API::setWall(x, y, 'e');
						EastWall[x][y] = 1;
					}
				if(fp::API::wallRight())
					{
						fp::API::setWall(x, y, 'w');
						WestWall[x][y] = 1;
					}
				break;
		//When the current direction is West.
        case 'W':
				if(fp::API::wallFront()) 
					{
						fp::API::setWall(x, y, 'w');
						WestWall[x][y] = 1;
					}
				if(fp::API::wallLeft()) 
					{
						fp::API::setWall(x, y, 's');
						SouthWall[x][y] = 1;
					}
				if(fp::API::wallRight()) 
					{
						fp::API::setWall(x, y, 'n');
						NorthWall[x][y] = 1;
					}
				break;
    }
}


int fp::Maze::ReadWallNorth(int x, int y)
	{
		return NorthWall[x][y];
	}

int fp::Maze::ReadWallEast(int x, int y)
	{
		return EastWall[x][y];
	}

int fp::Maze::ReadWallWest(int x, int y)
	{
		return WestWall[x][y];
	}

int fp::Maze::ReadWallSouth(int x, int y)
	{
		return SouthWall[x][y];
	}

