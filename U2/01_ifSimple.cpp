//Librería para manejo de entradas y salidas
#include <iostream> 
//uso del namespace para evitar el std::
using namespace std;

//Funcion principal de tipo entero 
int main ()
{
    int numero;
    int dato=1;

    cout <<"Ingrese un número";
    cin>> numero;
    if (numero == dato){
        cout <<"El número es igual a dato" << endl;

    }
    if (numero != dato){
        cout <<"El número es diferente a dato" << endl;

    }
    if (numero < dato){
        cout <<"El número es menor a dato" << endl;

    }
    if (numero > dato){
        cout <<"El número es mayor a dato" << endl;

    }
    if (numero <= dato){
        cout <<"El número es menor o igual a dato" << endl;

    }
    if (numero >= dato){
        cout <<"El número es mayor o igual a dato" << endl;

    }
    return 0;
}