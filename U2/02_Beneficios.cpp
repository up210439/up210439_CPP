/*
 CABECERA DE PROGRAMA
Date: 27/09/2022
Author:UP210439
Description: Renta 
Email: up210439@alumnos.upa.edu.mx
Last modification: ##

In a given company, its employees are evaluated at the end of each year. points
that they can obtain in the evaluation starts at 0.0 and can increase, translating into
Better benefits. The points that employees can get can be 0.0, 0.4, 0.6
or more, but not intermediate values ​​between the mentioned figures. A is shown below
a table with the levels corresponding to each score. The amount of money earned
at each level is $2,400 multiplied by the level's punctuality.

Level         punctuation
unattainable    0.0
Acceptable      0.4
meritorious     6 or more

Write a program that reads the user's score and indicates their performance level, as well
as the amount of money the user will receive.
*¡Thank you very much for choosing us!
We look forward to serving you again.
*/ 

//Library for managing inputs and outputs
#include<iostream>

//Using the namespace to avoid the std::
using namespace std;

//Main function of integer type
int main(){

//Variable Declaration
double c;

//Enter the rating number
cout<<"What is your qualification?: " <<endl;
cin>>c;
//Execution of the problem
if ((c == 0)||(c == 0.4)||(c >= 0.6 && c <= 1)){
    if(c == 0){
        cout<<"unattainable: " <<endl;
    }
    else if(c == 0.4){
        cout<<"Acceptable: " <<endl;
    }
    else if(c >= 0.6 && c <= 1){
        cout<<"meritorious: "<<endl;
    }
    cout<<"Your bonus is:  " <<2400*c;
    }

    //If none of the other qualifications are met, it is: 
    else{
        cout<<"invalid: " <<endl;
    }
    return 0;
}
    
