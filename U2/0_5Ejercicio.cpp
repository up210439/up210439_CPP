/*  CABECERA DE PROGRAMA
Date: 03/10/2022
Author:UP210439
Description: temaperatura
Email: up210439@alumnos.upa.edu.mx
Last modification: ##

Make a program in which 6 temperatures are entered and determine
the average, the lowest and the highest
*/

//Library for managing inputs and outputs
#include <iostream>

//Using the namespace to avoid the std::
using namespace std;

//Main function of integer type
int main(){
    //Variable Declaration 
    int cont =1;
    int lower = 99999;
    int higher = 0; 
    float temperature;
    float tempAcum =0;
    
    do{
        cout << "Give me the temperature: ";
        cin >> temperature; 
        tempAcum += temperature;  

        cont ++;
        if (temperature <= lower)
        {
            lower = temperature;
        }
        if (temperature >= higher)
        {
            higher = temperature;
        } 
    }   while(cont <= 6);

    //print results
    cout << " The mean is " <<tempAcum/6<< endl;
    cout << " lower temperature is: " <<lower<< endl;
    cout << " hingher temperature is: " <<higher<< endl;

   
    return 0;
}

