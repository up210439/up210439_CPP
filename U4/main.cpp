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
	
	coord posicion(int n);
	
};

coord pieza::posicion(int n)
{
	coord ret = {ori.x,ori.y};
	if(n !=0)
	{
		ret.x += peri[n-1].x;
		ret.y += peri[n-1].y;
	}
	return ret;
}


coord peris[4][3] = {{{2,0},{4,0},{6,0}},
					{{2,0},{4,0},{  }},
					{{2,0},{4,0},{  }},
					{{   },{   },{  }},};

char barcos[4] = {'P', 'S', 'D', 'F'};
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
		void rotar(pieza &);
		coord rotar(coord &);
		void seleccinar(pieza &, int);

};

void jugador::pintar(pieza &P)
{	
	for(int i=0; i<4; i++)
	{
		coord c = P.posicion(i);
		ma[c.x][c.y]  = P.D;	
	}
	

}


coord jugador::rotar(coord &c)
{
	coord ret = {c.y,c.x};
	return ret;
	
}

void jugador::rotar(pieza &P)
{
	for(int i=0;i<3;i++)
	{
		P.peri[i] = jugador::rotar(P.peri[i]);
	}
}

void jugador::seleccinar(pieza &P, int r)
{
	P.ori.x = 2;
	P.ori.y = 2;
	P.D = barcos[r];
	for(int i = 0; i < 3; i++)
	{
		P.peri[i] = peris[r][i];
	}
}

int main ()
{
	
    enemigo a;
    jugador b;
    
    
    pieza S;
    int r = 2;
    
    
    b.seleccinar(S,r);
    
	//a.pintarmapa();
	
	b.rotar(S);
	b.pintar(S);
    gotoxy(0,25);
    a.pintarmapa();
    
    
	//b.rotar(c);
	
	//b.pintar(c);
	

    
 
 	return 0;   
    
}
