/*
Autor: Maria del Carmen Viramontes Contreras
Fecha: 20/octubre/2022
Descripción: juego del gato 
*/ 

#include<iostream>
using namespace std;

//------TABLERO DEL GATO------
int tableroGato[3][3],row,col; 
void Tablero();

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
char valorJugada;
int turnoJugada;
bool casillaOcupada;
void Tablero(int);
bool verificacion(int jugada); 

//------FUNCIONES------

int seleccionarJugada(){
    int jugada;
    do{
        cout<< "Dame la jugada: ";
        cin>>jugada;
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
    if (areaJuego[row][col] == 'X' || areaJuego[row][col] == 'O')   
    {
       return true;
    }
    else
    return false; 
}

void colocarJugada(int jugada)
{

    if (turnoJugador % 2 == 0) //------PARES------
    {
        valorJugada = 'X';
    }
    else
    {
        valorJugada = 'O';
    }
    if (jugada == 1)
        areaJuego[0][0] = valorJugada;
    else if(jugada==2)
        areaJuego[0][1] = valorJugada;
    else if(jugada==3)
        areaJuego[0][2] = valorJugada;
    else if(jugada==4)
        areaJuego[1][0] = valorJugada;
    else if(jugada==5)
        areaJuego[1][1] = valorJugada;
    else if(jugada==6)
        areaJuego[1][2] = valorJugada;
    else if(jugada==7)
        areaJuego[2][0] = valorJugada;
    else if(jugada==8)
        areaJuego[2][1] = valorJugada;
    else if(jugada==9)
        areaJuego[2][2] = valorJugada;
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

int main()
{
    int areaJuego, tablero, jugada, jugador1, modoDeJugada, jugador2;
    bool casillaOcupada = true;
    bool ganador = false;
    Tablero();

    cout << "Dame tu modo de jugada:\n1. VS HUMANO\n2. VS CPU\n";
    cin >> modoDeJugada;
    if (modoDeJugada == 1)
    {

        do
        {
            jugada = seleccionarJugada();
            casillaOcupada = comprobarCasillaOcupada(jugada);
            if (casillaOcupada == true)
            {
                do
                {
                    cout << "INVALIDO, toma otra posición\n";
                    //------pausa; no se como guardarlo

                } while (casillaOcupada == true);
            }
            else if (casillaOcupada == false)
            {
                system("clear");
                Tablero();
                colocarJugada(jugada);
                turnoJugador++;
            }

            ganador = verificacion(ganador);
        } while (ganador == false && turnoJugador <= 9);
    } return 0;
}