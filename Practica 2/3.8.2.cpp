#include <iostream>
using namespace std;


float Addition(float a, float b){
  return a+b;
}

float Subtraction(float a, float b){
  return a-b;
}

float Multiplication(float a, float b){
  return a*b;
}

float Division(float a, float b){
  return a/b;
}


int main() {
  // Code A
  float a, b, c; 
  int opt;
  // enter the operands
  
  cin >> a >> b;
  // OPT-> 0-Addition, 1-Subtraction, 2-Multiplication, 3-Division
  cin >> opt;
  /*
  switch( opt )
  {
  case 0: c = Addition(a, b); break;
  case 1: c = Subtraction(a, b); break;
  case 2: c = Multiplication(a, b); break;
  case 3: c = Division(a, b); break;
  }*/


  
  typedef float (*lpfnOperation)(float, float);
  
  lpfnOperation vpf[4] = {&::Addition, &::Subtraction,
  &::Multiplication, &::Division};
  
  c = (*vpf[opt])(a, b);
  

  cout<<c<<endl;
}