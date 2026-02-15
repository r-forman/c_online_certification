
#include <stdio.h>

/*
 1-D:
 int grades[5];
 2-D:
 int mat[rows][columns];
*/

// Initialization:
int mat[2][3] = {{1,2,3}, {4,5,6}};
// Turns into:
// 1 2 3
// 4 5 6
 
 // Incomplete initialization:
 int mat[2][3] = {{5,6}, {7}};
 // Turns into:
 // 5 6 0
 // 7 0 0
 double mat[3][2] = {{}, {5.2, 1.0}, {3.3}};
 // Turns into:
 // 0.0  0.0
 // 5.2  1.0
 // 3.3  0.0

 // Excessive values in Internal Curly Brackets
 int mat[2][3] = {5, 2, 1, 6, 5};
 // Turns into: It wraps them around!
 // 5 2 1
 // 6 5 0 