/*
Autor: Maria del Carmen Viramontes Contreras
Fecha: 20/octubre/2022
Descripción: juego del gato 
*/ 

#include<iostream>
using namespace std;

//------TABLERO DEL GATO------
int row,col; 
char tableroGato[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
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
    if (tableroGato[row][col] == 'X' || tableroGato[row][col] == 'O')   
       return true;
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
    if(tableroGato[0][1] == tableroGato[0][0] && tableroGato[0][2])
    {
        else if(tableroGato == tru)
    }
    if(tableroGato[1][1] == tableroGato[1][0] && tableroGato[1][2])
    if(tableroGato[2][1] == tableroGato[2][0] && tableroGato[2][2])
    if(tableroGato[1][0] == tableroGato[0][0] && tableroGato[2][0]) 
    if(tableroGato[1][1] == tableroGato[0][1] && tableroGato[2][1])
    if(tableroGato[1][2] == tableroGato[0][2] && tableroGato[2][2])
    if(tableroGato[1][1] == tableroGato[0][0] && tableroGato[2][2])
    if(tableroGato[1][1] == tableroGato[2][0] && tableroGato[0][2])
    
    
    

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
            do{
            jugada = seleccionarJugada();
            casillaOcupada = comprobarCasillaOcupada(jugada);
            } while(casillaOcupada == true);

            if (casillaOcupada == false)//esta libre
            {
                colocarJugada(jugada);
                //ganador = verificacion(ganador);

                system("clear");
                Tablero();
                turnoJugador++;//le toca al otro jugador
            }

           
        } while (ganador == false && turnoJugador <= 9);



    } return 0;
}