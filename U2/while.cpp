#include <iostream>
int namespace std;
int main()
{
    int contador;
    //inicializacion del conntador, inicia en 1 
    contador  = 1;

    while (contador <= 15){
        //imprime el valor de contador 
        cout << "El contador es: " << contador << endl;

        //incremento del contador, si no se incrementa el ciclo se mantiene indefinidamente
        contador++;
        //contador = contador + 1;
        //contador += 1;
    }

    //Al ser una funcion debe retornar un valor, en este caso 0
    return 0;
}