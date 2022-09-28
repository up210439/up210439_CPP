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

//Libreria para el manejo de entradas y salidas.
#include<iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero.
int main(){

//Declaración de variable 
double c;

//Ingresar el numero de calificacion 
cout<<"¿Cual es tu calificacion?: " <<endl;
cin>>c;
//Ejecucion del problema 
if ((c == 0)||(c == 0.4)||(c >= 0.6 && c <= 1)){
    if(c == 0){
        cout<<"inaceptable: " <<endl;
    }
    else if(c == 0.4){
        cout<<"aceptable: " <<endl;
    }
    else if(c >= 0.6 && c <= 1){
        cout<<"meritorio. "<<endl;
    }
    cout<<"Tu bono es:  " <<2400*c;
    }

    //Si no se cumple ninguno de las demas calificasiones es: 
    else{
        cout<<"invalido: " <<endl;
    }
    return 0;
}
    
