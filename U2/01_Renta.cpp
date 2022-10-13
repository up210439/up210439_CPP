
/*  CABECERA DE PROGRAMA
Date: 26/09/2022
Author:UP210439
Description: Renta 
Email: up210439@alumnos.upa.edu.mx
Last modification: ##

Tax type income
Less than      $10,000 5%
Between        $10,000 and $20,000 15%
Between        $20,000 and $35,000 20%
Between        $35,000 and $60,000 30%
More than      $60,000 45%

Write a program that asks the user for their rent
annual and show on the screen the tax rate that
corresponds
*/

//Library for managing inputs and outputs
#include <iostream> 

//Using the namespace to avoid the std::
using namespace std;

//integer main function
int main(){
    
    //Declare variables
    float percentage;
    float rentaAnual;
   
    // Income variable
    cout << " What is your annual income?: " << endl;
    cin >> rentaAnual;
    

    // Calculate the rent to obtain the percentage
    if (rentaAnual < 10000)
    {
        percentage =.05;
    }
    else if(rentaAnual >= 10000 & rentaAnual < 20000 )
    {
        percentage= .15;
    }
    else if(rentaAnual >= 20000 & rentaAnual < 35000)
    {
        percentage = .20;
    }
    else if(rentaAnual >= 35000 & rentaAnual < 60000)
    {
       percentage = .30;
    }
    else if(rentaAnual >= 60000 )
    {
        percentage = .45;
    }
    
    //view the results 
    cout << "The annual percentage rate is : " << (percentage*100) << "%" << endl;
    cout << "The annual interest rate is : " << (rentaAnual*percentage) << endl;

    return 0;
}
