#ifndef ELEMENTOS_H
#define ELEMENTOS_H
#include <fstream>
#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class ELEMENTOS
{
    public:
        ELEMENTOS(){}


        void orden(){//SE ABRE EL ARCHIVO EXTERNO
            entrada.open("Nombres.txt");
            for(i=0;i<20;i++){//ORDENA CADA NOMBRE
            entrada>>n[i];//
            }
         for(i=0;i<20;++i){//RECORRE CADA LUGAR Y VA TOMANDO CADA VALOR QUE ES UNA CADENA
        for(j=0;j<20;++j){//NO SE QUE ES
           T=strcmp(n[j],n[j+1]);//compara las cadenas
            if (T>0){ //SI T ES MAYOR A CERO EMPIEZA DESDE EL 0
                strcpy(n4,n[j]);//strcpy COPIA LA CADENASirve para copiar n caracteres de cadena2 hacia cadena1. Devuelve el valor de cadena1.
                strcpy(n[j],n[j+1]);
                strcpy(n[j+1],n4);
            }
          }
        }
    for (i=0;i<20;++i)//ESCORA LOS NOMBRES Y LOS IMPRIME
    cout<<n[i]<<endl;
    }
    void buscar(){
        entrada.open("Nombres.txt");//ABRE EL ARCHIVO Y TOMA LOS NOMBRE
    for (i=0;i<20;i++){//PENDIENTE
             entrada>>n2[i];
          }
    cout << "---------------------" << endl;
    cout <<" ESCRIBA EN LETRAS MAYUSCULAS " << endl;
    cout << "---------------------" << endl;
    cin>>n3;

     for (i=0;i<20;i++){//COMPARA E INDICA SI SE ENCUENTRA EL NOMBRE
        if(n3==n2[i]){

    cout << "---------------------" << endl;
    cout<< " *** EL NOMBRE SI SE ENCUENTRA *** "<<endl;
    cout << "---------------------" << endl;

          }
        }
}
char n[20][20],n4[20];//DECLARACION DE LAS VARIABLES
     string n2[20],n3;
        int T,i,j;
        ifstream entrada;

protected:

private:

};

#endif // ELEMENTOS_H
