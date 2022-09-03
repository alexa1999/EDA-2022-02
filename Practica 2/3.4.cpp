#include <iostream>
using namespace std;


template<typename Type> 
class CVector
{
  private:
  Type *m_pVect;
  int m_nCount,m_nMax,m_nDelta;
  void Resize(){
    m_nMax+=m_nMax;
    Type *aux=new Type[m_nMax+m_nDelta];
    for(int i=0;i<m_nCount;i++){
      aux[i]=m_pVect[i];
    }
    m_pVect=aux;
  }

  public:
  CVector(int delta=10){
    m_nDelta=delta;
    m_pVect=new Type[m_nMax+m_nDelta];
  }

  void Insert(Type elem){
    if( m_nCount == m_nMax ) // Verify the overflow
      Resize(); // Resize the vector before inserting elem
    m_pVect[m_nCount++] = elem;
  }

void Print(){
  for(int i=0;i<m_nCount;i++){
    cout<<m_pVect[i]<<"\t";
  }
  cout<<endl;
}
};


int main() {
  CVector<int> vect;
  vect.Insert(4);
  vect.Insert(12);
  vect.Insert(78);
  vect.Insert(42);
  vect.Print();

  CVector<string> vect2;
  vect2.Insert("holiiiiiiiiii");
  vect2.Print();
}