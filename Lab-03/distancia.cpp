#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;


unsigned long inicio, fin, t;
vector<vector<int>> vectorsito;

void crear_vectores(int tamanho, int dimension){
	srand(time(NULL));
	int numero_aleatorio;
	for(int i = 0; i<tamanho; i++){
		vector<int> temp;
		for(int j = 0; j<dimension; j++){
			numero_aleatorio = 1 + rand() % (101 - 1);  ///numeros entre 1-100
			temp.push_back(numero_aleatorio);
		}
		vectorsito.push_back(temp);
	}
}
	
void print_Vector(int tamanho, int dimension){
	for(int i = 0; i<tamanho; i++){
		for(int j = 0; j<dimension; j++){
			cout<<vectorsito[i][j]<<" ";
		}
		cout<<endl;
	}
}
		
int distancia_euclidiana(int tamanho, int dimension){
	for(int i = 0; i<tamanho; i++){
		for(int j = i+1; j<tamanho; j++){
			double eucli = 0;
			for(int k = 0; k<dimension; k++){
				eucli +=pow((vectorsito[j][k])-(vectorsito[i][k]),2);
				///cout<<"x2-x1 al cuadrado: "<<eucli<<endl;
			}
			eucli = sqrt(eucli);
			///cout<<"Distancia Euclidiana:"<<eucli<<" entre los vectores "<<i<<" y "<<j<<endl;
			eucli = 0;
		}
	}
	return 0;
}
			
int main(int argc, char *argv[]) {
	cout<<"Primer Trabajo"<<endl;
	const int tamanho1 = 1000, dimension1 = 3;
	
	///crear_vectores(tamanho[0], dimension[0]);
	crear_vectores(tamanho1,dimension1);
	///print_Vector(tamanho1,dimension1);
	inicio = clock();
	distancia_euclidiana(tamanho1,dimension1);
	fin = clock();
	double t = (double(fin - inicio) / CLOCKS_PER_SEC);
	cout << "Tiempo: " << t << " seg" << endl;
	return 0;
}


