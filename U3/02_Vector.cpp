/*
Autor: Maria del Carmen Viramontes Contreras
Fecha: 20/octubre/2022
Descripción: Funciones, encontrar el valor máximo entre el primer número y el segundo número 
(el codigo se creo en una sola linea).

Vectores.
*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int tamaño){
    for (int elemento = 0; elemento < tamaño; elemento++)
    {
        cout << "Dame el valor " << ":" ;
        cin >> v[elemento];
    } 

}
void imprimirVector(int v[], int tamaño){
    for (int elemento = 0; elemento < tamaño; elemento++)
    {
        cout << " ";
    }
    cout << endls;
}

int main(){

    int numeros[100] = {0};
    char c[6];
    cargarVector(numeros,6);
    imprimirVector(numeros, 6);
    cout << endl; 
    getchar();

    for (int contador = 0; contador < 6; contador++)
    {
        cout<< "dame el valor de: " <<contador << endls;
        cin >>c[contador];
    }

}

        quinientos=monto/denominaciones[0];
        residuo=monto%denominaciones[0]; 

        docientos=residuo/denominaciones[1];
        residuo=residuo%denominaciones[1]; 

        cien=residuo/denominaciones[2];
        residuo=residuo%denominaciones[2];
        
        cincuenta=residuo/denominaciones[3];
        reciduo=residuo%denominaciones[3];

        veinte=residuo/denominaciones[4];
        residuo=residuo%denominaciones[4];
        
        diez=residuo/denominaciones[5];
        residuo=residuo%denominaciones[5];
        
        cinco=residuo/denominaciones[6];
        residuo=residuo%denominaciones[6];

        dos=residuodenominaciones[7];
        residuo=residuo%denominaciones[7];

        uno=dinero;