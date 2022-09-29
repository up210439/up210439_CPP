/*CABECERA DE PROGRAMA
Date: 29/09/2022
Author:UP210439
Description: cost of tickets depending on the ages
Email: up210439@alumnos.upa.edu.mx
Last modification: #

It is a program for a company that has game rooms for everyone
ages and wants to automatically calculate the price to be charged
your customers to come in. The program should ask the user the age of the client
and display the ticket price. If the client is under 4 years old, they can enter
free, if you are 4 and 18 years old you must pay $5 and if you are older than 18, $10
 */


//Library for managing inputs and outputs
#include<iostream>

//Using the namespace to avoid the std::
using namespace std;

//Main function of integer type
int main(){

 //Variable Declaration   
    int age;
    int ca;  //amount of money to pay

    cout<<"What is your age?: " <<endl;
    cin>>age;

    if( age <= 4 ){
        int free = 0;
        ca = free;  
        
    }
    else if((age >=  4)&&(age <18)){
        ca = 5;
    }
    else if((age >= 18)){
        ca = 10;
    }
    cout<<"The amount to pay is: "<< "$" << (ca) << endl;

    return 0; 
}



    