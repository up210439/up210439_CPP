/*  CABECERA DE PROGRAMA
Date: 05/10/2022
Author:UP210439
Description: ventas y articulos
Email: up210439@alumnos.upa.edu.mx
Last modification: ##

Ingrese la cantidad vendida:  
Ingrese el precio del articulo: 
Ingrese la cantidad vendida: 
Ingrese el precio del articulo: 
Ingrese la cantidad vendida: 
finalizando la factura 
La cuenta total es de 

Write a program that reads indefinitely quantities
of products and their price, and at the end indicate the total of the invoice.
To know what has been determined with the purchase, you must enter
a 0 in the quantity.
*/

//Library for managing inputs and outputs
#include<iostream>

//Using the namespace to avoid the std::
using namespace std;

//Main function of integer type
int main(){

 //Variable Declaration 
 int productQuantity =0;
 int totalBills;
 int price =0;
 int cont = 1; 
 int Exit = 0;  

do
{
    /* code */
cout << "Enter the quantity of product: " <<endl;
cin >> productQuantity;

if(productQuantity !=0 & productQuantity > 0){

    cout << "Enter the price of your product: " << endl;
    cin >> price;
}
else { 
    cout<< "Wrong try again: " << endl; 
}

totalBills += price*productQuantity; 

} while (productQuantity > 0);

cout << "The total bills is: " << totalBills <<endl;

return 0;

}
 
