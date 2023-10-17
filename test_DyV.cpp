#include "DyV.h"
#include <vector>

int main(){
	std::vector<int> a{1,25,3};
	std::vector<double> b{1.1,3.7,6.2};
	std::cout << "Busqueda Binaria Int: " << BusquedaBinaria(25,a,0,2)  << "\n";
	std::cout << "Busqueda Binaria Double: " << BusquedaBinaria(6.2,b,0,2)  << "\n";
}
