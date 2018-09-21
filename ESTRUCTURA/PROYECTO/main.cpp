#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "ELEMENTOS.h"
using namespace std;

int main()
{
    ELEMENTOS X;
    int opcion;

    cout << " ------------------------------------------------------------------ " << endl;
    cout << " ------------------------------------------------------------------ " << endl;
    cout << " EL PROGRAMA ORDENA Y BUSCA NOMBRES " << endl;
    cout << " ------------------------------------------------------------------ " << endl;
    cout << " ------------------------------------------------------------------ " << endl;
    cout << " *** INTRODUZCA LA OPCION QUE DESEE *** " << endl;
    cout << " 1.- ORDENAR  " << endl;
    cout << " 2.- BUSCAR " << endl;
    cin >>opcion;

    switch(opcion){

  case 1:
       X.orden();
  break;

  case 2:
      X.buscar();
    break;

    }
    return 0;
    }
