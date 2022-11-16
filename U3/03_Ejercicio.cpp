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
void Tablero;
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

int main (){
    int areaJuego, tablero, jugada, jugador1, jugador2, CPU, modoDeJugada, computadora; 
    bool casillaOcupada = true; 
    bool ganador = false; 
    Tablero(tablero);

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
            Tablero(tablero);
            colocarJugada(jugada); 
            turnoJugador++;
        }

        ganador = verificacion(ganador); 
        } while (ganador == false && turnoJugador <=9);  
        if (turnoJugador <=9)
        {
        if (turnoJugador %2 == 0)
        {
            cout << "FELICIDADES, ERES GANADOR JUGADOR 1\n ";
        }
        else
        {
            cout << "FELICIDADES, ERES GANADOR JUGADOR 2\n"; 
        }
        else
        {
            cout << "ESTE JUEGO EMPATO :(\n"
        }
        }
        else if (modoDeJugada == 2)//-------COMIENZA CPU-------                    
        }
        
    return 0;
}


/*//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

void Tablero(int);
int TurnoJugador = 0;
char AreaJuego[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int SeleccionarJugada();
void ReemplazarCasilla(int Jugada);
bool ComprobarJugadaOcupada(int Jugada);
void ModoDeJuego(int);
bool VerificarGanador(int Jugada);
int TurnoCPU(int);
int mejorJugada(int);
const char PC = 'X';
const char HUMANO = 'O';
const string TABLERO = "Real";
const string TABLEROCPU = "Imaginario";
//---------------------ISSUE---------------------------
/*
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
*/
//------------------ MAIN FUNCTION ---------------------
/*
int main()
{
    int tablero, jugador1, jugador2, computadora, jugada,ModoJuego, CPU;
    bool casillaocupada = true, ganador = false;
    Tablero(tablero);
    cout << "Que modo de juego deseas jugar?\n1. VS HUMANO\n2. VS CPU\n";
    cin >> ModoJuego;
    if (ModoJuego==1)
    {
    do
    {
        jugada = SeleccionarJugada();
        casillaocupada = ComprobarJugadaOcupada(jugada);
        if (casillaocupada == true)
        {
            do
            {
                cout << "Casilla invalida, elija otra\n";
                break;
            } while (casillaocupada == true);
        }
        else if (casillaocupada == false)
        {
            system("clear");
            ReemplazarCasilla(jugada);
            Tablero(tablero);
            TurnoJugador++;
        }
    ganador = VerificarGanador(ganador);
    } while (ganador == false && TurnoJugador<10);
    if (TurnoJugador<10){
    if (TurnoJugador % 2 == 0)
    {
        cout << "Gano el jugador 2\n";
    }
    else
    {
        cout << "Gano el jugador 1\n";
    }
    } else{
        cout << "Empate\n";
    }
    } 
    else if (ModoJuego == 2)//--------------------------------------------------CPU----------------------------------------------
    {
    do
    {
        if (TurnoJugador%2==0)
        {
            jugada = SeleccionarJugada();
        } else
        {
            jugada = TurnoCPU(CPU);
        }
        
        casillaocupada = ComprobarJugadaOcupada(jugada);
        if (casillaocupada == true)
        {
            do
            {
                cout << "Casilla invalida, elija otra\n";
                break;
            } while (casillaocupada == true);
        }
        else if (casillaocupada == false)
        {
            system("clear");
            ReemplazarCasilla(jugada);
            Tablero(tablero);
            TurnoJugador++;
        }
    ganador = VerificarGanador(ganador);
    } while (ganador == false && TurnoJugador<10);
    if (TurnoJugador<10){
    if (TurnoJugador % 2 == 0)
    {
        cout << "Gano el CPU\n";
    }
    else
    {
        cout << "Gano el jugador 1\n";
    }
    } else{
        cout << "Empate\n";
    }
    } else
    {
        cout << "No seleccionaste un modo de juego válido :(";
    }
    
    
    return 0;
}

int SeleccionarJugada()
{
    int Jugada;
    do
    {
        cout << "Jugador " << TurnoJugador%2+1 << " Dame tu jugada del 1 al 9: \n";
        cin >> Jugada;
    } while (Jugada < 0 || Jugada > 9);

    return Jugada;
}

bool ComprobarJugadaOcupada(int Jugada)
{
    int row = Jugada / 10, col = Jugada - 1;
    if (AreaJuego[row][col] == 'X' || AreaJuego[row][col] == 'O')
    {
        return true; // Significa que la casilla esta ocupada
    }
    else
    {
        return false;
    }
}

void ReemplazarCasilla(int Jugada)
{
    if (TurnoJugador % 2 == 0)
    {
        int row = Jugada / 10, col = Jugada - 1;
        AreaJuego[row][col] = 'X';
    }
    else
    {
        int row = Jugada / 10, col = Jugada - 1;
        AreaJuego[row][col] = 'O';
    }
}

void Tablero(int)
{
    int x = 0, y = 0;
    for (int fila = 0; fila < 5; fila++)
    {
        for (int columna = 0; columna < 9; columna++)
        {
            if (fila == 1 || fila == 3)
            {
                cout << "-";
            }
            else if (columna == 1 || columna == 4 || columna == 7)
            {
                cout << AreaJuego[x][y];
                y++;
            }
            else
            {
                cout << " ";
            }
            if (columna == 2 || columna == 5)
            {
                cout << "|";
            }
        }
        cout << "\n";
        if (fila % 2 == 0)
        {
            x++;
        }

        y = 0;
    }
}

bool VerificarGanador(int Jugada)
{
    int punto = 0;
    bool VerificarGanador = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((AreaJuego[0][posicion] == AreaJuego[1][posicion]) && (AreaJuego[0][posicion] == AreaJuego[2][posicion]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((AreaJuego[posicion][0] == AreaJuego[posicion][1]) && (AreaJuego[posicion][0] == AreaJuego[posicion][2]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((AreaJuego[posicion][posicion] == AreaJuego[posicion+1][posicion+1]) && (AreaJuego[posicion][posicion] == AreaJuego[posicion+2][posicion+2]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((AreaJuego[2][0] == AreaJuego[1][1]) && (AreaJuego[2][0] == AreaJuego[0][2]))
        {
            VerificarGanador = true;
            break;
        }
    }
    return VerificarGanador;
}

int TurnoCPU(int Jugada){
    //Revisar que CPU gana
    Jugada = mejorJugada(PC);
    if (Jugada != -1)//Que gane yo
        return Jugada;


    //Revisar que Jugador gane
    Jugada = mejorJugada(HUMANO);
    if (Jugada != -1)//Que no gane el humano
    {
        return Jugada;
    }
    

    Jugada = rand()%10;//En caso de que ninguno ni otro, hacer lo que sepa
    return Jugada;
}
*/