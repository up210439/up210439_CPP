/*
Autor: Maria del Carmen Viramontes Contreras
Fecha: 20/octubre/2022
Descripción: Funciones, encontrar el valor máximo entre el primer número y el segundo número 
(el codigo se creo en una sola linea).
*/ 

#include <iostream>

using namespace std;
//Prototipo de funciones 
int getMaxVal(int num1, int num2);

//Función principal 
int main(){
int primerValor, segundoValor;
int valorMax;

    cout << "Dame el primer número: ";
    cin >> primerValor;
    cout << "Dame el segundo número: ";
    cin >> segundoValor;

    cout << "\n=======================\n";
    valorMax = getMaxVal (primerValor, segundoValor);

    cout << "El valor máximo es: " << valorMax << endl;

return 0;
}
int getMaxVal(int num1, int num2){
    return (num1 > num2)? num1 : num2;
}

/*
int getMaxVal(int num1, num2){
    int valorMaximo;

if(num1 > num2){
    valorMaximo = num1;
}
else
{
    valorMaximo = num2; 
}
return valorMaximo;
}
*/