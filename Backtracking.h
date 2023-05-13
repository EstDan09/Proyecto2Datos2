//
// Created by esteban on 5/7/23.
//

#ifndef PROYECTO2DATOS2_BACKTRACKING_H
#define PROYECTO2DATOS2_BACKTRACKING_H

#include <bits/stdc++.h>
using namespace std;
#define N 4


class Backtracking {
public:
    Backtracking();
    static void printSolution(int sol[N][N]);
    static bool isSafe(int maze[N][N], int x, int y);
    bool solveMaze(int maze[N][N], int xS, int yS, int xE, int yE);
    bool solveMazeUtil(int maze[N][N], int xS, int yS, int sol[N][N], int xE, int yE);



};


#endif //PROYECTO2DATOS2_BACKTRACKING_H
