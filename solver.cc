#include "solver.h"
#include <queue>

sudokumatrix solver::solve(sudokumatrix* start){
  std::queue<sudokumatrix*> work;

  int index  = 0;
  sudokumatrix* current = start;
  do {

    std::vector<sudokumatrix*> get = current->getNewMatices();

    for (const auto& e: get)
      work.push(e);


    if(!(current->isFree())){
      return sudokumatrix(*current);
    }

    //delete current;

    current = work.front();
    work.pop();

  }while(current);
  return sudokumatrix();
}
