#include "solver.h"

sudokumatrix solver::solve(sudokumatrix* start){
  std::vector<sudokumatrix*> work;
  work.push_back(start);
  int index  = 0;

  do {
    std::vector<sudokumatrix*> get = work[index]->getNewMatices();
    work.insert( work.end(), get.begin(), get.end() );

    work.erase(work.begin());

    if(!(work[index]->isFree())){
      std::cout << "thend" << '\n';
      return sudokumatrix(*work[index]);
    }

  }while(work.size()>0);
  return sudokumatrix();
}
