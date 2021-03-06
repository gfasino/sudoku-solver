#include <iostream>
#include "solver.h"

int main(){
  short int mat[9][9] = {{0,0,3,9,1,0,0,6,8},{0,7,0,3,5,8,1,0,9},{9,0,8,2,0,7,0,3,0},{4,3,5,0,0,1,2,7,0},{2,8,0,0,3,0,0,9,4},{0,9,6,5,0,0,8,1,3},{0,4,0,6,0,9,3,0,2},{3,0,2,4,7,5,0,8,0},{8,5,0,0,2,3,6,0,0}};

  sudokumatrix s(mat);

  sudokumatrix ret = solver::solve(&s);

  if(ret.isFree())
    std::cout<<"solution not found";
  else
    ret.printall();
  return 0;
}
