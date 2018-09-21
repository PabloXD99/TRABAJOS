#include "ahorcado.h"
#include <string>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <vector>

using namespace std;

ahorcado::ahorcado()
{
    //ctor
}

string pal_ori;
string pal_mos;
int vidas;

void ahorcado::mein(){

    inicializar();
    mostrar();
    while(vidas >0 && pal_mos!=pal_ori){
        char x;
        cin >> x;
        system("cls");
        ingresar(x);
        mostrar();
    }


    if(vidas >0 ){
        cout << "FELICIDADES HAS GANADO" << endl;
    }else{
        cout << "LO SIENTO HAS PERDIDO, LA PALABRA CORRECTA ERA: " << pal_ori << endl;
    }

}

void ahorcado::mostrar(){

    cout << endl << endl;
    cout << "VIDAS TOTALES: " << vidas << endl;
    cout << pal_mos << endl;
}

void ahorcado::ingresar(char x){
    bool pervidas = true;

    for(int i=0; i < pal_ori.length(); i++){
        if(x == pal_ori[i]){
            pervidas = false;
            pal_mos[i] = x;
        }
    }

    if(pervidas) vidas--;
}

void ahorcado::inicializar(){
        vidas = 9;
        pal_ori = obtener_palabra_aleatoria();

        for(int i = 0; i < pal_ori.length() ; i++){
        if(pal_ori[i] >= 'A' && pal_ori[i] <= 'Z'){
            pal_ori[i] += 32;
        }
    }

    for (int j=0; j < pal_ori.length() ; j++){
        if(pal_ori[j] >= 'a' && pal_ori[j] <= 'z'){
            pal_mos += '-';
        }else{
            pal_mos += pal_ori[j];
        }
    }
}

string ahorcado::obtener_palabra_aleatoria(){
  int dato;

    vector <string> palabras;

    palabras.push_back("ella no te ama");
    palabras.push_back("te ha");
    palabras.push_back("roto");
    palabras.push_back("el");
    palabras.push_back("corazon");
    palabras.push_back("y se ha");
    palabras.push_back("ido con otro");

    srand(time(NULL));
    dato = 0 + rand() % (5);

    return palabras[dato];
}
