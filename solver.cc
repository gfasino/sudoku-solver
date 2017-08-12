#include "solver.h"

sudokumatrix solver::solve(sudokumatrix* start){
  std::vector<sudokumatrix*> work;
  sudokumatrix* current = start;
  do {
    std::vector<sudokumatrix*> get = current->getNewMatices();
    work.insert( work.end(), get.begin(), get.end() );
    delete work.at(0);
    work.erase(work.begin());
    current = work.at(0);
    if(!current->isFree()){
      return sudokumatrix(*current);
    }
  } while(current && work.size()>0);
  return sudokumatrix();
}
