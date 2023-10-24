#include "DyV.h"
#include <vector>

int main(){
	
	std::vector<int> a{1,3,25};
	std::vector<int> inv{21,6,2};
	std::vector<double> b{1.1,3.7,6.2};
	
	std::vector<int> intdesord{9,7,6,1,2};
	std::vector<char> chardesord{'c','d','b','a'};
	
	std::cout << "Busqueda Binaria Int: " << BusquedaBinaria(25,a,0,2)  << "\n";
	std::cout << "Busqueda Binaria Int Inverso: " << BusquedaBinaria_INV(2,inv,0,2)  << "\n";	
	std::cout << "Busqueda Binaria Double: " << BusquedaBinaria(6.2,b,0,2)  << "\n";
	
	std::cout << "Vector de int desordenados: ";
        printvec(intdesord,5);

	QuickSort(intdesord,0,4);
	std::cout << "Vector de int ordenados: ";
	printvec(intdesord,5);
	
	std::cout << "Vector de char desordenados: ";
        printvec(chardesord,4);

	QuickSort(chardesord,0,3);
	std::cout << "Vector de char ordenados: ";
	printvec(chardesord,4);
	
	return 0;
}
