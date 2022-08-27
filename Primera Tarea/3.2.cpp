#include <iostream>

using namespace std;


struct Vector{

    int* m_v;
    int m_size;
    int m_nelem;

};

void init(Vector *vec,int size){
    vec->m_size = size;
    vec->m_v=new int[vec->m_size];
    vec->m_nelem=0;//size
}


int size(Vector *vec){
    return vec->m_nelem;
}

void resize(Vector *vec){
    int* p=new int[2*vec->m_size];
    for( int i = 0; i < vec->m_size ; i ++){
        p[i]=vec->m_v[i];
    }
    delete[] vec->m_v;
    vec->m_v=p;
    vec->m_size= 2*vec->m_size;
}

void insert(Vector *vec ,int x){
    if(vec->m_nelem == vec->m_size)
        resize(vec);
    vec->m_v[vec->m_nelem++]=x;
}


void print(Vector *vec){
    cout<<"\n";
    for (int i = 0; i <vec->m_nelem; ++i)
        cout<<vec->m_v[i]<<" ";
}



int main() {


   

    Vector vec;

    init(&vec,3);

    insert(&vec,1);
    insert(&vec,2);
    insert(&vec,3);
    insert(&vec,5);

    print(&vec);
    

    return 0;
}