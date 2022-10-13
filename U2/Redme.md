
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
    else if((rentaAnual >= 10000) && (rentaAnual < 20000 ))
    {
        percentage= .15;
    }
    else if((rentaAnual >= 20000) && (rentaAnual < 35000))
    {
        percentage = .20;
    }
    else if((rentaAnual >= 35000) && (rentaAnual < 60000))
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