//
// Created by esteban on 5/7/23.
//

#ifndef PROYECTO2DATOS2_PATHFINDINGASTAR_H
#define PROYECTO2DATOS2_PATHFINDINGASTAR_H

#include <bits/stdc++.h>
using namespace std;

#define N 4

class PathfindingAStar {
public:
// Creating a shortcut for int, int pair type
    typedef pair<int, int> Pair;

// Creating a shortcut for pair<int, pair<int, int>> type
    typedef pair<double, pair<int, int> > pPair;

// A structure to hold the necessary parameters
    struct cell {
        // Row and Column index of its parent
        // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
        int parent_i, parent_j;
        // f = g + h
        double f, g, h;
    };

    PathfindingAStar();

    void printFOL();
    void printFCL();

    bool isValid(int row, int col);
    bool isUnBlocked(int grid[][N], int row, int col);
    bool isDestination(int row, int col, Pair dest);
    double calculateHValue(int row, int col, Pair deststatic );
    void tracePath(cell cellDetails[][N], Pair dest);
    void aStarSearch(int grid[][N], Pair src, Pair dest);

    set<Pair> finalOpenlist;
    set<Pair> finalCloselist;




};


#endif //PROYECTO2DATOS2_PATHFINDINGASTAR_H
