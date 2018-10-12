#include<iostream>
#include<cstdlib>
using namespace std;
/**
Alvarado Garcia Jorge Pablo
Garcia Arzapalo Lauro Manuel
Noh Noh Marco Antonio
Perez Uc Pablo Ernesto
**/


struct nodo{
    int nro;
    struct nodo *sgte;
    /**
    puntero SGTE
    **/
};

typedef struct nodo *Puntero;

class Cola{
    public:
        Cola(void);
        void Encolar(int );
        int Desencolar(void );
        bool ColaVacia(void);
        void MostrarCola(void);
        void VaciarCola(void);

    private:
        Puntero delante;//puntero al primer elemento de la cola
        Puntero atras;//puntero al ultimo elemento de la cola
};

Cola::Cola(void){
    delante=NULL;//inicializamos los punteros
    atras=NULL;
}
/**
---------------------------------------------------------------------------------------------------------------------------------
**/

void Cola::Encolar(int x){
/**
La función Encolar(), ingresa como parámetro el dato de tipo entero que se agregara a la cola,
la función usa un puntero auxiliar _aux que ayuda a crear el nodo y a la posición
del puntero delante y atras según las condiciones.
**/
     Puntero p_aux;
/**
-> se utiliza para acceder a los elementos de una estructura
de datos que se tiene referenciada por un puntero
**/
     p_aux=new(struct nodo);
     p_aux->nro=x;
     p_aux->sgte=NULL;

     if(delante==NULL)
        delante=p_aux;
     else atras->sgte=p_aux;

     atras=p_aux;
}

/**
---------------------------------------------------------------------------------------------------------------------------------
**/

int Cola::Desencolar(void){
/**
La función Desencolar(), retorna el valor del campo nuro del
tope de la cola en este caso el primer elemento de la cola.
**/
    int n;
    Puntero p_aux;

    p_aux=delante;
    n=p_aux->nro;
    delante=(delante)->sgte;
    delete(p_aux);
    return n;
}

/**
---------------------------------------------------------------------------------------------------------------------------------
**/

bool Cola::ColaVacia(){
    /**
    La función ColaVacia(), retorna un valor del tipo bool preguntando
    si la cola esta vacía o no según sea la condición true o false.
    **/

    if(delante==NULL)
        return true;
    else return false;
}
/**
---------------------------------------------------------------------------------------------------------------------------------
**/

void Cola::MostrarCola(void){
    /**
    La función MostrarCola(), muestra todos los elementos de la cola desde el primero hasta el ultimo.
    **/
    Puntero p_aux;
     p_aux=delante;
     while(p_aux!=NULL){
        cout<<"\n\n\t"<<p_aux->nro;
        p_aux=p_aux->sgte;
     }

}
/**
---------------------------------------------------------------------------------------------------------------------------------
**/
void Cola::VaciarCola(void){
/**
La función VaciarCola(), se encarga de eliminar todos los nodos y poner los punteros delante y atras a NULL
**/
     Puntero p_aux,r_aux;
     p_aux=delante;
     while(p_aux!=NULL){
        r_aux=p_aux;
        p_aux=p_aux->sgte;
        delete(r_aux);
     }
     delante=NULL;
     atras=NULL;
}

int menu(void)
{
    cout<<"\n ----------------------------\n";
    cout<<"IMPLEMENTACION DE UNA COLA\n";
    cout<<"-------------------------------\n";
    cout<<"                    "<<endl;
    cout<<"  1. ENCOLAR        "<<endl;
    cout<<"  2. DESENCOLAR     "<<endl;
    cout<<"  3. MOSTRAR COLA   "<<endl;
    cout<<"  4. VACIAR COLA    "<<endl;
    cout<<"  5. SALIR          "<<endl;
    cout<<"                    "<<endl;
    cout<<"--------------------------------\n";
    cout<<"Ingrese opcion: ";
}
int main(void ){
    Cola cola;
    int x;
    int op;

    do
    {
        menu();  cin>> op;

        switch(op)
        {
            case 1: cout<< "\n\t INGRESE NUMERO A ENCOLAR: "; cin>> x;
                    cola.Encolar(x);
                    cout<<"\n\n\t\tNumero " << x << " ENCOLADO...\n\n";
                    break;

            case 2:
                    if(cola.ColaVacia()==true)
                        cout<<"\n\n\tCola Vacia....";
                    else{
                        x = cola.Desencolar( );
                        cout<<"\n\n\tNumero "<<x<<" Desencolado\n";
                        }
                    break;


            case 3:
                    cout << "\n\n\t MOSTRANDO COLA\n\n";
                    if(cola.ColaVacia()!=true)
                        cola.MostrarCola(  );
                    else
                        cout<<"\n\n\tCola vacia..!"<<endl;
                    break;


            case 4:
                    cola.VaciarCola(  );
                    cout<<"\n\n\t\tCola eliminada...\n\n";
                    break;

            default: cout<<"\n\tLa opcion no se encuentra disponible....!!";
         }

        cout<<endl<<endl;

    }while(op!=5);

return 0;
}

