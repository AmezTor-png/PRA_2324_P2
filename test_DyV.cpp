#include <iostream>
#include <vector>
#include "DyV.h" 
using namespace std;

int main(){
  std::vector<int> v1{1, 2, 3, 4, 5};
	std::vector<int> v2{2, 5, 8, 7};

	int bb;
	
	bb = BusquedaBinaria(v1, 1, 0, 5);
	
	cout<< bb << endl;

	quickSortPiFirst(b, 0, 3);

	for(int i = 0; i < 4; i++)
  {
	  cout << b[i] << " ";
	}
  
  return 0;
}
