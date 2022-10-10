/*  CABECERA DE PROGRAMA
Date: 7/10/2022
Author:UP210439
Description: CONVERSION 
Email: up210439@alumnos.upa.edu.mx
Last modification: ##

Write a program that converts from binary to decimal.
only for integers greater than 0. The result can be
displayed by an inbetween veriablre or in a set of characters.
*/
//Library declaration
#include<iostream>

//statement to avoid std
using namespace std;

int main(){
     int num;
    string result;

    do{

        cout<<"Enter the number to convert: ";
        cin>>num;

        if(num>0){
            cout<<"elderly to zero"<<endl; 
            while(num!=0){
            if(num%2==0){
            //The current result with the previous
            result='0'+result;
            }
            else 
            result='1'+result;
            num/=2;
            
        }
        }
        else if(num==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"smaller to zero"<<endl;
        }
   
    

    }while(num<0);
    cout<<result<<endl;


    return 0;
 }
