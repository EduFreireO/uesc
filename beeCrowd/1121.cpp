#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, numb_inst, x, y;
    char command, direction_robot;
    bool valid;
    vector < vector <char> > m;
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
        {
            cin >> command;
            m[i][j] = command;
            valid = command != '.' || command != '*' || command != '#'; 
            
            if(valid)
            {    
                direction_robot = command;
                x = i;
                y = j;
            }
        }
    bool west, east, north, south;
    
    while(numb_inst)
    {   
        valid = (x < row) && (y < col);    
        if(command == 'F' && valid)
        
        
        
        
        
        west = (command == 'D' && direction_robot == 'N') || (command == 'E' && direction_robot == 'S');
        east = (command == 'E' && direction_robot == 'N') || (command == 'D' && direction_robot == 'S');
        north = (command == 'D' && direction_robot == 'O') || (command == 'E' && direction_robot == 'L');
        south = (command == 'E' && direction_robot == 'O') || (command == 'D' && direction_robot == 'L');
        
        if(west)
            direction_robot = 'O';
        else if(east)
            direction_robot = 'L';
        else if(north)
            direction_robot = 'N';
        else
            direction_robot = 'S';            
        
        cin >> command;
        numb_inst--; 
    }    
    
}