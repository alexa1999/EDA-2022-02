#include <iostream>
using namespace std;

namespace funciones{
	float sumita(float a, float b){
		return a+b;
	}
	struct Vectorf{
		int *m_pVector,
			m_nCount=0,
			m_nMax=0,
			m_nDelta;
	};
	void Resize(Vectorf *pThis){
		pThis->m_nDelta=5;
		int *aux=new int[pThis->m_nMax+pThis->m_nDelta];
		for(int i=0;i<pThis->m_nCount;i++){
			aux[i]=pThis->m_pVector[i];
		}
		
		pThis->m_pVector=aux;
		pThis->m_nMax+=pThis->m_nDelta;
	}
	void Insertar(Vectorf *pThis, int elem){
		if(pThis->m_nCount==pThis->m_nMax){
			Resize(pThis);
		}
		pThis->m_pVector[pThis->m_nCount]=elem;
		pThis->m_nCount+=1;
	}
					
	
						
							
	void Print(Vectorf *pThis){
		for(int i=0;i<pThis->m_nCount;i++){
			cout<<pThis->m_pVector[i]<<"\t";
		}
		cout<<endl;
	}
}

int main() {
	cout<<funciones::sumita(5, 10)<<endl;
	funciones:: Vectorf vect;
	Insertar(&vect,12);
	Insertar(&vect,4);
	Print(&vect);
}