#include <vector>
#include <iostream>

template <typename T>

void printvec(std::vector<T>& V,int tam){
	for(int i = 0;i < tam;i++){
		std::cout << V[i] << " ";
	}	
	std::cout << std::endl;
}

template <typename T>

int BusquedaBinaria(T X,std::vector<T>& V, int ini, int fin){
	if(ini > fin){
		std::cout << "No se encuentra en el array";
                return -1;
        }

	int medio = (ini + fin) / 2; 
       	if(V[medio] == X)	
        	return medio;
	else if(V[medio] > X)
                return BusquedaBinaria(X, V, ini, medio - 1);
	else
                return BusquedaBinaria(X, V, medio + 1, fin);
}

template <typename T>

int BusquedaBinaria_INV(T X,std::vector<T>& V,int ini,int fin){
	if(ini > fin){
                std::cout << "No se encuentra en el array";
                return -1;
        }

        int medio = (ini + fin) / 2;
        if(V[medio] == X)
                return medio;
        else if(V[medio] < X)
                return BusquedaBinaria_INV(X, V, ini, medio - 1);
        else
                return BusquedaBinaria_INV(X, V, medio + 1, fin);
}

template <typename T>

int Partition(std::vector<T>& V,int ini,int fin){
	T x = V[fin];
	T aux;
	int i = ini;
	for(int j = ini;j < fin;j++){
		if(V[j] <= x){
#ifdef DEBUG
			std::cout << "Swap " << V[i] << " " << V[j] << std:: endl;
#endif
			aux = V[i];
			V[i] = V[j];
			V[j] = aux;
#ifdef DEBUG
			printvec(V,5);
#endif
			i++;
		}
	}	
#ifdef DEBUG
	std::cout << "Swap " << V[i] << " " << V[fin] << std:: endl;
#endif
	aux = V[i];
	V[i] = V[fin];
	V[fin] = aux;
#ifdef DEBUG
	printvec(V,5);
#endif
	return i;
}	

template <typename T>

void QuickSort(std::vector<T>& V,int ini,int fin){
	if(ini < fin){
		int pivot = Partition(V,ini,fin);
		QuickSort(V,ini,pivot-1);
		QuickSort(V,pivot + 1,fin);
	}
}




