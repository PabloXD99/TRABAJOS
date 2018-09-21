#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <fstream>
#include "operaciones.h"

using namespace std;

int main()
{
    numeros z;
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,opcion;

    cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
    cout << "NUMEROS NATURALES " << endl;
    cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;

    do {
        cout << " ELIJA UNA OPCION: " << endl;
        cout << " 1.- SUCESOR " << endl;
        cout << " 2.- ANTECESOR " << endl;
        cout << " 3.- SUMA " << endl;
        cout << " 4.- DIFERENCIA " << endl;
        cout << " 5.- OPERACION MENOR " << endl;
        cout << " 6.- IGUAL " << endl;
        cout << " 7.- SALIR " << endl;
        cin >> opcion;

        switch (opcion){
        case 1:
            cout << " __________________ " << endl;
            cout << " SUCESOR " << endl;
            cout << " __________________\n " << endl;
            cout << " TECLEE UN NUMERO " << endl;
            cin >> a1;
            cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
            cout << "EL SUCESOR DEL NUMERO QUE TECLEO ES: " << z.sucesor(a1) << endl;
            cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
            break;

        case 2:
            cout << " __________________ " << endl;
            cout << " ANTECESOR " << endl;
            cout << " __________________\n " << endl;
            cout << " DIGITE EL NUMERO " << endl;
            cin >> a2;
            cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
            cout << "EL ANTECESOR DEL NUMERO QUE TECLEO ES: " << z.antecesor(a2) << endl;
            cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
            break;

        case 3:
            cout << " __________________ " << endl;
            cout << " SUMA DE DOS NUMEROS " << endl;
            cout << " __________________\n " << endl;
            cout << " TECLEE UN NUMERO " << endl;
            cin >> a3;
            cout << "TECLEE OTRO NUMERO " <<endl;
            cin >> a4;
            cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
            cout << "LA SUMA DEL NUMERO QUE TECLEO ES: " << z.suma(a3,a4) << endl;
            cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
            break;

        case 4:
            cout << " __________________ " << endl;
            cout << " DIFERENCIA DE NUMEROS " << endl;
            cout << " __________________\n " << endl;
            cout << " TECLEE UN NUMERO " << endl;
            cin >> a5;
            cout << " TECLEE OTRO NUMERO " << endl;
            cin >> a6;
            cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
            cout << "LA DIFERENCIA DEL NUMERO QUE TECLEO ES: " << z.diferencia(a5,a6) << endl;
            cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
            break;

         case 5:
            cout << " __________________ " << endl;
            cout << " OPERACION MENOR " << endl;
            cout << " __________________\n " << endl;
            cout << " TECLEE UN NUMERO " << endl;
            cin >> a7;
            cout << "EL OTRO NUMERO " <<endl;
            cin >> a8;
            cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
            cout << "EL NUMERO MENOR DEL QUE TECLEO ES: " << z.operacionmenor(a7,a8) << endl;
            cout << " °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° " << endl;
            break;

        case 6:
            cout << " __________________ " << endl;
            cout << " IGUAL " << endl;
            cout << " __________________\n " << endl;
            cout << " TECLEE UN NUMERO " << endl;
            cin >> a9;
            cout << "TECLEE OTRO NUMERO " << endl;
            cin >> a10;
            z.igual(a9,a10);
            break;

        case 7:
            exit(7);
        }

    }while (opcion<7 || opcion>7);

    return 0;
}
