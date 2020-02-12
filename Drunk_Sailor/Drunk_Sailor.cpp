// Drunk_Sailor.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>       
using namespace std;
#define Array_WIDTH 20
#define Array_HEIGHT 20
#define max_STEPS 1000

enum DIRECTION{NORTH, EAST, SOUTH, WEST};
int nMapArray[Array_WIDTH][Array_HEIGHT];

int main()
{
   
    int x = Array_WIDTH / 2;
    int y = Array_HEIGHT / 2;
    srand(time(NULL));
    int stepCount = 0;

    while (stepCount < max_STEPS)
    {
        
        DIRECTION nextStep = static_cast <DIRECTION> (rand() % 4);

        switch (nextStep)
        {
        case NORTH:
            if (y > 0)
                y--;
            break;
        case EAST:
            if (x < Array_WIDTH - 1)
                x++;
            break;
        case SOUTH:
            if (y < Array_HEIGHT- 1)
                y++;
            break;
        case WEST:
            if (x > 0)
                x--;
            break;
        }
        stepCount++;
        nMapArray[x][y] = nMapArray[x][y]++;
       

    }
    //Printing out the drunk steps
    for (int a = 0; a < Array_WIDTH; a++)
    {
        for (int b = 0; b < Array_HEIGHT; b++)
        {
            std::cout << nMapArray[a][b] << "  ";
        }
        std::cout << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
