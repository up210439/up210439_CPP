/*  CABECERA DE PROGRAMA
Date: 012/10/2022
Author:UP210439
Description: tabla de multiplicar 
Email: up210439@alumnos.upa.edu.mx
Last modification: ##
*/

#include <iostream>

using namespace std;

int main(){

    //--Declarar variables--
    int limite, num, result;

    //--ingresar el número (que tan grande será la tabla--
    cout << "What number do you want the table to be: " <<endl;
    cin >> num;

    //Ingresar el limite que quiero 
    cout << "Enter the limit: " <<endl;
    cin >> limite; 

    //--contador es igual a 1, contador menor o igual a 15, al contador se le va sumando-- 
    for (int i = 0; i <= limite; i++)
    {
       for(int f = 1; f <= 48; f++)
    {
        cout << "-";     
    }
    cout<<endl;

    result=num*i;
        cout << "| " << "\t" << i << "\tX" << "\t" << num << "\t=" << "\t" << result << "\t" << "|" <<endl;
    }
    
    return 0; 
}