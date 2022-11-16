/*
Autor: Maria del Carmen Viramontes Contreras
Fecha: 20/octubre/2022
Descripción: Funciones, encontrar el valor máximo entre el primer número y el segundo número 
(el codigo se creo en una sola linea).

El prograa debera arrojar cambio y calcularlo.
*/ 

#include <iostream>
using namespace std;

void obtenerCambio(int);
void imprimirCambio();

int denominaciones[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};
int cantidadBilletes[9]={0};
int residuo = 0;

int main(){
    int dinero;

    cout<< "Give me the amount of money: ";
    cin>> dinero;

    obtenerCambio (dinero);
    imprimirCambio ();

return 0; 
}

void obtenerCambio(int monto){

    for(int denominacion=0; denominacion<9; denominacion++){
        residuo=(denominacion==0)?monto:residuo;
        cantidadBilletes[denominacion]=residuo/denominaciones[denominacion];

        residuo=residuo%denominaciones[denominacion];
    }
 
}

void imprimirCambio(){
    for (int cambio = 0; cambio < 9; cambio++)
    {
        int tipo;
        tipo=(cambio < 5)?" Billetes ":" Monedas ";
        cout << tipo << " de $ " << denominaciones[] <<" : ";
    }
    
}