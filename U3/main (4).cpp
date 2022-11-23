/*
Autor: Maria del Carmen Viramontes Contreras
Fecha: 21/NOVIEMBRE/2022
Descripción: JUEGO DEL GATO << HUMAN VS HUMAN >>
*/
#include <iostream>
#include <string.h>
using namespace std;

//------BOARD------
int row, col;
string BOARDTTT[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
void BOARD();
string HEADER = "\033[95m";
string CYAN = "\033[96m";
string VERDE = "\033[92m";
string Amarrillo = "\033[93m";
string ENDC = "\033[0m";
//\033[0;31m"<<variable<<"\033[om/
//------ESTRUCTURA DEL GATO------
void BOARD()
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
                cout << BOARDTTT[x][y];
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

//------GLOBAL VARIABLES------
int playerTurn = 0;
char gameArea[3][3];
string valuePlay;
int turnPlay;
bool occupiedSquare;
void BOARD(int);

//------FUNCIONES------

int selectPlay(string j1, string j2)
{
    int move;
    do
    {

        if (playerTurn % 2 == 0) //------PEER------
        {
            cout << "\nTurn to " << CYAN << j1 << ENDC << ", give me the play: ";
        }
        else
        {
            cout << "\nTurn to " << VERDE << j2 << ENDC << ", give me the play: ";
        }
        cin >> move;
    } while (move < 1 && move > 9);

    return move;
}

//------POSITIONS------
bool checkBusyBox(int move)
{
    int row, col;
    if (move == 1)
    {
        row = 0;
        col = 0;
    }
    else if (move == 2)
    {
        row = 0;
        col = 1;
    }
    else if (move == 3)
    {
        row = 0;
        col = 2;
    }
    else if (move == 4)
    {
        row = 1;
        col = 0;
    }
    else if (move == 5)
    {
        row = 1;
        col = 1;
    }
    else if (move == 6)
    {
        row = 1;
        col = 2;
    }
    else if (move == 7)
    {
        row = 2;
        col = 0;
    }
    else if (move == 8)
    {
        row = 2;
        col = 1;
    }
    else if (move == 9)
    {
        row = 2;
        col = 2;
    }
    if (BOARDTTT[row][col] == CYAN + "X" + ENDC || BOARDTTT[row][col] == VERDE + "O" + ENDC)
        return true;
    else
        return false;
}

void placePlay(int move)
{

    if (playerTurn % 2 == 0) //------PARES------
    {
        valuePlay = CYAN + "X" + ENDC;
    }
    else
    {
        valuePlay = VERDE + "O" + ENDC;
    }
    if (move == 1)
        BOARDTTT[0][0] = valuePlay;
    else if (move == 2)
        BOARDTTT[0][1] = valuePlay;
    else if (move == 3)
        BOARDTTT[0][2] = valuePlay;
    else if (move == 4)
        BOARDTTT[1][0] = valuePlay;
    else if (move == 5)
        BOARDTTT[1][1] = valuePlay;
    else if (move == 6)
        BOARDTTT[1][2] = valuePlay;
    else if (move == 7)
        BOARDTTT[2][0] = valuePlay;
    else if (move == 8)
        BOARDTTT[2][1] = valuePlay;
    else if (move == 9)
        BOARDTTT[2][2] = valuePlay;
}

void printGameArea()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << gameArea[row][col];
        }
        cout << endl;
    }
}

bool check() // BOARDTTT is board tic tac toe
{
    bool won = false;
    if (BOARDTTT[0][1] == BOARDTTT[0][0] && BOARDTTT[0][2] == BOARDTTT[0][1])
    {
        won = true;
    }
    if (BOARDTTT[1][1] == BOARDTTT[1][0] && BOARDTTT[1][2] == BOARDTTT[1][1])
    {
        won = true;
    }
    if (BOARDTTT[2][1] == BOARDTTT[2][0] && BOARDTTT[2][2] == BOARDTTT[2][1])
    {
        won = true;
    }
    if (BOARDTTT[1][0] == BOARDTTT[0][0] && BOARDTTT[2][0] == BOARDTTT[1][0])
    {
        won = true;
    }
    if (BOARDTTT[1][1] == BOARDTTT[0][1] && BOARDTTT[2][1] == BOARDTTT[1][1])
    {
        won = true;
    }
    if (BOARDTTT[1][2] == BOARDTTT[0][2] && BOARDTTT[2][2] == BOARDTTT[1][2])
    {
        won = true;
    }
    if (BOARDTTT[1][1] == BOARDTTT[0][0] && BOARDTTT[2][2] == BOARDTTT[1][1])
    {
        won = true;
    }
    if (BOARDTTT[1][1] == BOARDTTT[2][0] && BOARDTTT[0][2] == BOARDTTT[1][1])
    {
        won = true;
    }
    return won;
}

int main()
{
    int gameArea, move, player1, gameMode, player2;
    bool occupiedSquare = true;
    bool winner = false;
    string name_j1;
    string name_j2;
    BOARD();

    cout << "\nWe welcome you this is a tic tac toe game ;) \n1. [CLICK] -> You will compete against ¡HUMAN!\n";
    cout << endl;
    cout << "----------HUMAN VS HUMAN----------" << endl
         << endl
         << "¡May the best win!\n";
    cin >> gameMode;
    if (gameMode == 1)
    {
        cout << "Who is player 1: ";
        cin >> name_j1;
        cout << "\nWho is jugador 2: ";
        cin >> name_j2;
        cout << "\n";
        do
        {
            do
            {
                move = selectPlay(name_j1, name_j2);
                occupiedSquare = checkBusyBox(move);
            } while (occupiedSquare == true);

            if (occupiedSquare == false) // IT´S FREE
            {
                placePlay(move);
                winner = check();
                system("clear");
                BOARD();
            }

            playerTurn++; // PLAYER 2

        } while (winner == false && playerTurn < 9);
        if (winner == true)
        {
            if (playerTurn % 2 == 0)
            {
                cout << "¡CONGRATULATIONS! PLAYER 1 WON :) \n";
            }
            else
            {
                cout << "¡CONGRATULATIONS! PLAYER 2 WON :) \n";
            }
        }
        else
        {
            cout << "¡TIE!\n";
        }
    }
    return 0;
}