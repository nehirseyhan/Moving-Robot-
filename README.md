# Moving Robot
A robot is placed in a NxN grid. An example of 4x4 grid with axis indexes is given as following. <br />

A position in the grid is relative to its upper left corner, that is, x value increases in East direction and y value increases in South direction. The position of the robot will be given as x and y coordinates. <br />

The robot can only move in four directions as North, South, East and West where diagonal movements are forbidden. For example, <br />

- Movement from (3,2) to (3,3) is in the South direction. <br />

- Movement from (1,1) to (3,3) can be done as E,S,E,S . <br />

The code updates the position of the robot according to the given movement direction. If the robot's movement is blocked, the position of the robot will remain unchanged, that is the robot cannot move out of the grid. The code prints the final position of the robot.



### SPECIFICATIONS:

- The code reads 4 arguments as direction, the x coordinate of the robot, the y coordinate of the robot and N. <br />

- Direction should be an uppercase character as 'N', 'S', 'W', 'E'.

- The given position of the robot should be a valid position in the grid.

- The size of the grid (N) should be given as a positive integer.

- The code prints the final position of the robot as x and y coordinates.

 

### EXAMPLE:

./movement

E 4 5 7

5 5



./movement

E 6 5 7

6 5
