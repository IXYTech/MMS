#include "solver.h"
#include "API.h"

Action solver() {
    API_turnRight();
    return FORWARD;
    return RIGHT;
}

// This is an example of a simple left wall following algorithm.
Action leftWallFollower() {
    return FORWARD;
}


// Put your implementation of floodfill here!
Action floodFill() {
    return FORWARD;
}