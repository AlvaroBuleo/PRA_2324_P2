#include <iostream>
#define N 3
/*
void printTabla(int v[][9],int fil,int col){
	for(int i = 0;i < fil;i++){
		for(int j = 0;j < col;j++){
			std::cout << v[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int cambio(int* v,int n,int size){
	int tab[size][n+1];
	for(int i = 0;i < size;i++){	//filas
		for(int j = 0;j <= n;j++){ //columnas
			if(j == 0)
				tab[i][j] = 0;
			else
				tab[i][j] = -1;
		}	
	}
	printTabla(tab,size,n+1);
	return 0;
}
*/

int min(int x, int y){
	if(x < y)
		return x;
	else 
		return y;
}

int cambio(int* v,int P){
	int tab[N][P+1];
	for(int i = 0;i < N;i++){
		for(int j = 0;j <= P;j++){
			if(j != 0)
				tab[i][j] = -1;
		}
	}
	tab[0][0] = 0;
        for(int j = 1;j <= P + 1;j++){
        	if(j >= v[0] && tab[0][j - v[0]] != -1){
			tab[0][j] = 1 + tab[0][j - v[0]];
		}
	}
	for(int i = 1;i < N;i++){
		tab[i][0] = 0;
		for(int j = 1;j <= P;j++){
			if(j < v[i] || tab[i][j - v[i]] == -1)
				tab[i][j] = tab[i - 1][j];
			else if(tab[i - 1][j] != -1)
				tab[i][j] = min(tab[i - 1][j],1 + tab[i][j - v[i]]);
			else
				tab[i][j] = 1 + tab[i][j - v[i]];
		}
	}
	return tab[N-1][P];
}

int main(){
	int v[3] = {1,4,6};
	std::cout << "Monedas minimas: " <<  cambio(v,11) << std::endl;

	return 0;
}

