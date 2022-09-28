
/*  CABECERA DE PROGRAMA
Date: 26/09/2022
Author:UP210439
Description: Renta 
Email: up210439@alumnos.upa.edu.mx
Last modification: ##

Renta tipo impositivo
Menos de $10,000 5%
Entre $10,000 y $20,000  15%
Entre $20,000 y $35,000 20%
Entre $35,000 y $60,000 30%
Màs de $60,000 45%

Escribir un programa que pregunte al usuario su renta 
anual y muestre por pantalla el tipo impositivo que 
le corresponde
*/

//Libreria  para manejo de entradas y salidas
#include <iostream> 

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main(){
    
    //Declarar las variables.
    float porcentaje;
    float rentaAnual;
   
    // Variable de renta 
    cout << " Cual es tu renta anual: " << endl;
    cin >> rentaAnual;
    

    // Calcular la renta para obtener el porcentaje 
    if (rentaAnual < 10000)
    {
        porcentaje =.05;
    }
    else if((rentaAnual >= 10000) && (rentaAnual < 20000 ))
    {
        porcentaje = .15;
    }
    else if((rentaAnual >= 20000) && (rentaAnual < 35000))
    {
        porcentaje = .20;
    }
    else if((rentaAnual >= 35000) && (rentaAnual < 60000))
    {
        porcentaje = .30;
    }
    else if(rentaAnual >= 60000 )
    {
        porcentaje = .45;
    }
    
    // visualizar los resultados 
    cout << "La tasa porcentual anual es de: " << (porcentaje*100) << "%" << endl;
    cout << "La tasa de interes anual es de : " << (rentaAnual*porcentaje) << endl;

    return 0;
}
