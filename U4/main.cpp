/*
Cesar Eduardo Juarez Jasso
Maria Del Carmen Viramontes Contreras
Evenly Liliana Delgado Rivera
*/
#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;


void gotoxy(int x, int y){
HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

char ma[22][22] =   {{' ',' ','A',' ','B',' ','C',' ','D',' ','E',' ','F',' ','G',' ','H',' ','I',' ','J',' '},
       {' ',' ','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_',' '},
       {'0','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
       {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
       {'1','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
       {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
       {'2','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
       {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
       {'3','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
       {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
       {'4','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
       {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
       {'5','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
       {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
       {'6','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
       {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
       {'7','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
       {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
       {'8','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
       {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
       {'9','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
       {' ',' ','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',' '},};
       
//Estructuras

struct coord{
	int x, y;
	
};

struct pieza{
	
	coord ori;
	coord peri[3];
	
	char D;
};



class enemigo{
	
    private:

        public:

        	void pintarmapa();
        	void pintar(int, int);
        	void borrar(int, int);
        	void mover(int &, int &);
};

void enemigo::pintarmapa()
{
    for(int i=0;i<22;i++)
    {
        cout<<endl;
        for(int j=0;j<22;j++)
        {
          cout<<ma[i][j];  
        }
    }
}

void enemigo::pintar(int x, int y)
{
    gotoxy(x,y);cout<<"O";
}

void enemigo::borrar(int x, int y)
{
    gotoxy(x,y);cout<<" ";
}

void enemigo::mover(int &x, int &y)
{
    if (kbhit())
    {
        enemigo::borrar(x,y);
        char tecla = getch();
        if(tecla == 'a' && x>2) x=x-2;
        if(tecla == 'd' && x<20) x=x+2;
        if(tecla == 'w' && y>3) y=y-2;
        if(tecla == 's' && y<21) y=y+2;
        enemigo::pintar(x,y);
    }

}

class jugador{
	
	public:
		
		void pintar(pieza &);

};

void jugador::pintar(pieza &P)
{
	gotoxy(P.ori.x,P.ori.y);cout<<P.D;
	
	for(int i=0; i<3; i++)
	{
	gotoxy(P.ori.x + P.peri[i].x,P.ori.y + P.peri[i].y);cout<<P.D;	
	}
	

}


int main ()
{
	
    enemigo a;
    jugador b;
    pieza c={ {2,28}, {{2,0},{4,0},{6,0}}, 'P'};
	
	int q1=2,w1=3;
    int q2=2,w2=28;

	b.pintar(c);
    //a.pintarmapa();
    //gotoxy(0,25);
    //a.pintarmapa();
    
 
    
    
}
