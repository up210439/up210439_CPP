/*En una determinada empresa, sus empleados son evaluados al final de cada año. los puntos 
que pueden obtener en la evaluación comienza en 0.0 y pueden ir aumentando, traducciéndo en 
mejores beneficios. Los puntos que pueden conseguir los empleados pueden ser 0.0, 0.4, 0.6 
o más, pero no valores intermemdios entre las cifras mencionadas. A continuación se muestra 
una tabla con los niveles correspondientes a cada puntuación. La cantidad de dinero conseguida
en cada nivel es de $2,400 multiplicada por la puntualidad de nivel.

Nivel         puntuación 
inalcanzable  0.0
Aceptable     0.4
Meritorio     0.6 o más

Escribir un programa que lea la puntución del usuario e indique su nivel de rendimiento, así 
como la cantidad de dinero que recibirá el usuario.
*¡Muchas gracias por preferirnos! 
Esperamos poder servirte nuevamente.*/ 

//libreria para el manejo de entradas y salidas.
#include<iostream>

//uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero.
int main(){

   /* //Declaracion de variables.
    float puntuacion;
    float dinero; //cantidad de dinero
    float inalcanzable = 0.0;
    float aceptable = 0.4;
    float meritorio = ((puntuacion>=0.6)||(puntuacion<=1)); 

    //  Calcular la puntuación si es inalcanzable, aceptable o meritorio.
    cout<< "ingresa la puntuacion: " << endl;
    cin>> puntuacion;

    if(puntuacion == inalcanzable){
        cout<<"Tu puntuacion es inalcanzable:" <<endl;

    }
    if(puntuacion == aceptable){
        cout<<"Tu puntuacion es aceptable:" <<endl;

    }
    if(puntuacion == meritorio){
        cout<<"Tu puntuacion es meritorio:" <<endl; 
    }
    
    (dinero = puntuacion*2400);
    cout<<"Tu dinero es: $"<< dinero;

    else if ()
    
    
    return 0; 
}
*/
double c;
cout<<"cual es tu calificacion: ";
cin>>c;
if ((c == 0)||(c == 0.4)||(c >= 0.6 && c <= 1)){
    if(c == 0){
        cout<<"inaceptable";
    }
    else if(c == 0.4){
        cout<<"aceptable";
    }
    else if(c >= 0.6 && c <= 1){
        cout<<"meritorio";
    }
    cout<<"tu bono es"<<2400*c;
    }
    else{
        cout<<"invalido";
    }
    return 0;
    }
    
