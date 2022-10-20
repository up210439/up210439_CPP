/*  CABECERA DE PROGRAMA
Date: 13/10/2022
Author:UP210439
Description: programa biseccion 
Email: up210439@alumnos.upa.edu.mx
Last modification: ##
*/
#include<iostream>
#include<cmath>//para poder usar pow que significa potencia, se necesita esta libreria 

using namespace std; 

float resolver(float valor){
    //con la ecuación: x² - x - 12; (x=-3, x=4)
    return pow(valor, 2) - 1 * valor - 12;
}


int main(){

    float error = 0.01;
    float a, b, c; 
    float ya, yb, yc;
    cout<<"Dame el valor de a: ";
    cin>> a;
    cout<<"Dame el valor de b: ";
    cin>> b;
    //cabecera
    do
    {
        c = (a+b)/2;
        ya = resolver(a);
        yb = resolver(b);
        yc = resolver(c);
        cout.precision(4);
        cout<< fixed << a <<"\t"<< b <<"\t"<< c <<"\t"<< ya <<"\t"<< yb <<"\t"<< yc << endl;
        if(ya * yc < 0)
            b=c;
        else if(yc * yb < 0)
            a=c;
        else 
            cout<< "No root";

    } while (abs (yc) >= error);

    cout<<"el valor de la raiz se encuentra en:"<< c << endl;
    return 0;
}

/*
Autor: 
Fecha: 
Descripción: 
*/ 

#include <iostream>

using namespace std;

int main(){

return 0;
}