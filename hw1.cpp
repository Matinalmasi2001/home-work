#include <iostream>

using namespace std;

 main() {                           
  
  int x,y,z,p1,p2,Pa,p3,Pb;
  float PN;
  cout<<"enter your num : ";
  cin>>x>>y>>z;
  
  p1= x-y;
  p2= x+z;
  Pa= p1*p2;
  p3= x+y+z;
  Pb= (p3*p3)+1;
  PN= (float)Pa/Pb;
  
  cout<<"answer is: "<<PN;
  
  
}

