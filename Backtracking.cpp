//
// Created by esteban on 5/7/23.
//

#include "Backtracking.h"

using namespace std;

Backtracking::Backtracking()= default;

void Backtracking::printSolution(int (*sol)[N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            cout << " "<<sol[i][j]<< " ";
        }
        cout << endl;
    }
    cout<<endl;
}

bool Backtracking::isSafe(int (*maze)[N], int x, int y) {
    if( x >=0 and x < N and y >= 0 and y < N and maze[x][y] == 1){
        return true;
    }
    return false;
}

bool Backtracking::solveMaze(int (*maze)[N], int xS, int yS, int xE, int yE) {
    int sol[N][N] = { {0, 0, 0, 0},
                      {0, 0, 0, 0},
                      {0, 0, 0, 0},
                      {0, 0, 0, 0} };

    if (!solveMazeUtil(maze, xS, yS, sol, xE, yE)){
        cout << "Solution doesnt exist";
        return false;
    }
    printSolution(sol);
    return true;
}

bool Backtracking::solveMazeUtil(int (*maze)[N], int x, int y, int (*sol)[N], int xE, int yE) {
    if (x == xE and y == yE and maze[x][y] == 1) {
        sol[x][y] = 1;
        cout <<"un"<<endl;
        return true;
    }

    if (isSafe(maze, x, y)) {
        if (sol[x][y] == 1) {
            cout << "in" << endl;
            return false;
        }

        sol[x][y] = 1;

        if(solveMazeUtil(maze, x + 1, y, sol, xE, yE)){
            cout << "a" << endl;
            return true;
        }

        if(solveMazeUtil(maze, x - 1, y, sol, xE, yE)){
            cout << "b" << endl;
            return true;
        }

        if(solveMazeUtil(maze, x, y + 1, sol, xE, yE)){
            cout << "c" << endl;
            return true;
        }

        if(solveMazeUtil(maze, x, y - 1, sol, xE, yE)){
            cout << "d" << endl;
            return true;
        }

        sol[x][y] = 0;
        return false;
    }
    return false;
}


