/*
Autor: Maria del Carmen Viramontes Contreras
Fecha: 20/octubre/2022
Descripción: Funciones, encontrar el valor máximo entre el primer número y el segundo número 
(el codigo se creo en una sola linea).

El prograa debera arrojar cambio y calcularlo.
*/ 

#include <iostream>
using namespace std;

void obtenerCambio(int)
void obtenerMonedas(int)
void imprimirCambio(string)

void imprimirDinero int (mil, quinientos, docientos, cien, cincuenta, veinte, dies, cinco, dos, uno);

int main(){
    int dinero;

    int mil=0, quinientos=0, docientos=0, cien=0, cincuenta=0, veinte=0;
    int dies=0, cinco=0, dos=0, uno=0;

    cout<< "Dame la cantidad de dinero: ";
    cin>> dinero;

    obtenerCambio(dinero)//dinero ingresado. 
    imprimirCambio("Total")//incluye los billetes y monedas.
    
    obtenerMonedas(dinero)//dinero ingresado
    imprimirCambio(monedas)//unicamente para monedas. 
    
return 0; 
}

void imprimirDinero int (mil, quinientos, docientos, cien, cincuenta, veinte, dies, cinco, dos, uno);
void obtenerCambio(int)
void obtenerMonedas(int)
void imprimirCambio(string)
{


    mil=dinero/1000;
    dinero=dinero%1000;

    quinientos=dinero/500;
    dinero=dinero%500; 

    docientos=dinero/200;
    dinero=dinero%200; 

    cien=dinero/100;
    dinero=dinero%100; 
    
    cincuenta=dinero/50;
    dinero=dinero%50; 

    veinte=dinero/20;
    dinero=dinero%20; 
    
    diez=dinero/10;
    dinero=dinero%10; 
    
    cinco=dinero/5;
    dinero=dinero%5;

    dos=dinero/2;
    dinero=dinero%2;

    uno=dinero;
}