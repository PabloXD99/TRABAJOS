#include "operaciones.h"
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

numeros::numeros()
{
    //ctor
}
float numeros::sucesor(int numerox){
return numerox+1;
}

float numeros::antecesor(int numeroy){
return numeroy-1;
}

float numeros::suma(int numero1, int numero2){
return numero1+numero2;
}

float numeros::diferencia(int numero1, int numero2){
return numero1-numero2;
}

float numeros::operacionmenor(int numeroa, int numerob){
 int m;
   if (numeroa<numerob)
    m=numeroa;
   else m=numerob;
      return m;
}

void numeros::igual(int a, int b){
   if (a==b){
    cout << " 같같같같같같같같같같같같같같같같같같같 " << endl;
    cout << a << " ES IGUAL A: " << b << endl;
   cout << " 같같같같같같같같같같같같같같같같같같같 " << endl;}
   else {
       cout << " 같같같같같같같같같같같같같같같같같같같 " << endl;
       cout << a <<" NO ES IGUAL A : " << b << endl;
   cout << " 같같같같같같같같같같같같같같같같같같같 " << endl;
   }
}
