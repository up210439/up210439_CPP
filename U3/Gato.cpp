/*
Autor: Maria del Carmen Viramontes Contreras
Fecha: 20/octubre/2022
Descripción: juego del gato 
*/ 

#include<iostream>
#include <string.h>
using namespace std;

//------TABLERO DEL GATO------
int row,col; 
string tableroGato[3][3] = {{"1","2","3"},{"4","5","6"},{"7","8","9"}};
void Tablero();
string HEADER = "\033[95m";
string CYAN = "\033[96m";
string VERDE = "\033[92m";
string Amarrillo = "\033[93m";
string ENDC = "\033[0m";
//\033[0;31m"<<variable<<"\033[om/

//------ESTRUCTURA DEL GATO------
void Tablero() 
{
    int x = 0, y = 0;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (row == 1 || row == 3)
            {
                cout << "-";
            }
            else if (col == 1 || col == 4 || col == 7)
            {
                cout << tableroGato[x][y];
                y++;
            }
            else
            {
                cout << " ";
            }
            if (col == 2 || col == 5)
            {
                cout << "|";
            }
        }
        cout << "\n";
        if (row % 2 == 0)
        {
            x++;
        }

        y = 0;
    }
}

//------VARIABLES GLOBALES------
int turnoJugador = 0; 
char areaJuego[3][3];
string valorJugada;
int turnoJugada;
bool casillaOcupada;
void Tablero(int);


//------FUNCIONES------

int seleccionarJugada(string j1, string j2){
    int jugada;
    do{
       if(turnoJugador % 2 == 0)//------PARES--------
       {
        cout<<"\nTurno de " <<CYAN <<j1 <<ENDC <<", dame la jugada:";
       }
       else{
        cout <<"\nTurno de " <<VERDE <<j2 <<ENDC <<", dame la jugada:";
       }
       cin >> jugada;
    }while(jugada < 1 && jugada > 9);

    return jugada;
} 

//------POSICIONES------
bool comprobarCasillaOcupada(int jugada){
    int row, col;
    if(jugada == 1){
        row = 0;
        col = 0;
    }
    else if (jugada == 2)
    {
        row = 0;
        col = 1;
    }
    else if (jugada == 3)
    {
        row = 0;
        col = 2;
    }
    else if (jugada == 4)
    {
        row = 1;
        col = 0;
    }
    else if (jugada == 5)
    {
        row=1;
        col=1;
    }
    else if (jugada == 6)
    {
        row=1;
        col=2;
    }
    else if (jugada == 7)
    {
        row=2;
        col=0;
    }else if (jugada == 8)
    {
        row=2;
        col=1;
    }
    else if (jugada == 9)
    {
        row=2;
        col=2;
    }
    if (tableroGato[row][col] == "X" || tableroGato[row][col] == "O")   
       return true;
    else
    return false; 
}

void colocarJugada(int jugada)
{

    if (turnoJugador % 2 == 0) //------PARES------
    {
        valorJugada = CYAN + "X" + ENDC;
    }
    else
    {
        valorJugada = VERDE + "O" + ENDC;
    }
    if (jugada == 1)
        tableroGato[0][0] = valorJugada;
    else if(jugada==2)
        tableroGato[0][1] = valorJugada;
    else if(jugada==3)
        tableroGato[0][2] = valorJugada;
    else if(jugada==4)
        tableroGato[1][0] = valorJugada;
    else if(jugada==5)
        tableroGato[1][1] = valorJugada;
    else if(jugada==6)
        tableroGato[1][2] = valorJugada;
    else if(jugada==7)
        tableroGato[2][0] = valorJugada;
    else if(jugada==8)
        tableroGato[2][1] = valorJugada;
    else if(jugada==9)
        tableroGato[2][2] = valorJugada;
 }

void imprimirAreaJuego(){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << areaJuego[row][col];
        }
        cout << endl;
        
    }
    
}


bool verificacion(){
    bool gano = false;
    if(tableroGato[0][1] == tableroGato[0][0] && tableroGato[0][2] == tableroGato[0][1])
    {
        gano = true;
    }
    if(tableroGato[1][1] == tableroGato[1][0] && tableroGato[1][2] == tableroGato[1][1])
    {
        gano = true;
    }
    if(tableroGato[2][1] == tableroGato[2][0] && tableroGato[2][2] == tableroGato[2][1])
    {
        gano = true;
    }
    if(tableroGato[1][0] == tableroGato[0][0] && tableroGato[2][0] == tableroGato[1][0]) 
    {
        gano = true;
    }
    if(tableroGato[1][1] == tableroGato[0][1] && tableroGato[2][1] == tableroGato[1][1])
    {
        gano = true;
    }
    if(tableroGato[1][2] == tableroGato[0][2] && tableroGato[2][2] == tableroGato[1][2])
    {
        gano = true;
    }
    if(tableroGato[1][1] == tableroGato[0][0] && tableroGato[2][2] == tableroGato[1][1])
    {
        gano = true;
    }
    if(tableroGato[1][1] == tableroGato[2][0] && tableroGato[0][2] == tableroGato[1][1])
    {
        gano = true;
    }
    return gano;
    
    
    

}


int main()
{
    int areaJuego, tablero, jugada, jugador1, modoDeJugada, jugador2;
    bool casillaOcupada = true;
    bool ganador = false;
    string nombre_j1;
    string nombre_j2;
    Tablero();

    cout << "Dame tu modo de jugada:\n1. VS HUMANO\n2. VS CPU\n";
    cin >> modoDeJugada;
    if (modoDeJugada == 1)
    {
        cout <<"Quién es jugador 1: ";
        cin >> nombre_j1;
        cout << "Quien es juagador 2: ";
        cin >> nombre_j2;
        cout << "\n";

        do
        {
            do{
            jugada = seleccionarJugada(nombre_j1, nombre_j2);
            casillaOcupada = comprobarCasillaOcupada(jugada);
            } while(casillaOcupada == true);

            if (casillaOcupada == false)//esta libre
            {
                colocarJugada(jugada);
                ganador = verificacion();
                system("clear");
                Tablero();
            }
            if(ganador)
            {
                cout << "\nYa ganaste"
                     << "\n ";
                     break;
            }
            turnoJugador++;//le toca al otro jugador

           
        } while (ganador == false && turnoJugador <= 9);



    } return 0;
}