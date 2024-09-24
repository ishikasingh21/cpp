#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;

const int width = 80;
const int height = 20;

// Snake head coordinates of snake (x-axis, y-axis)
int x, y;

// Food coordinates
int fruitCordX, fruitCordY;

// variable to store the score of the player
int playerScore;

// Array to store the coordinates of snake tail (x-axis, y-axis)
int snakeTailX[100], snakeTailY[100];

// variable to store the length of the snake's tail
int snakeTailLen;

// for storing snake's moving snakesDirection
enum snakesDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };

// snakesDirection variable
snakesDirection sDir;

// boolean variable for checking game is over or not
bool isGameOver;

// Variable to store the reason for losing
string loseReason;


void GameInit()
{
    isGameOver = false;
    sDir = STOP;
    x = width / 2;
    y = height / 2;
    fruitCordX = rand() % width;
    fruitCordY = rand() % height;
    playerScore = 0;
    snakeTailLen = 0;  // Initialize the snake's tail length
}
