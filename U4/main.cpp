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
	char d = '*';
	
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


coord peris[5][3] = {{{2,0},{4,0},{6,0}},
					{{2,0},{4,0},{  }},
					{{2,0},{4,0},{  }},
					{{   },{   },{  }},
					{{   },{   },{  }},};

char barcos[4] = {'P', 'S', 'D', 'F'};

char ju[22][22];
char en[22][22];

class jugador{
	
	public:
		
		void pasarmapa();
		void dibujarmapaju();
		void pintar(pieza &, int);
		void borrar(pieza &);
		void rotar(pieza &);
		coord rotar(coord &);
		void seleccinar(pieza &, int);
		void mover(pieza &, int &);
		bool colision(pieza &);

};

void jugador::pasarmapa()
{
	for(int i=0;i<22;i++)
    {
        cout<<endl;
        for(int j=0;j<22;j++)
        {
          ju[i][j] = ma[i][j];  
          en[i][j] = ma[i][j];
        }
    }
}

void jugador::dibujarmapaju()
{
	for(int i=0;i<22;i++)
    {
        cout<<endl;
        for(int j=0;j<22;j++)
        {
          cout<<ju[i][j];  
        }
    }
}

void jugador::pintar(pieza &P, int r)
{
	if(r == 1)
	{
		for(int i=0; i<4; i++)
		{
		coord c = P.posicion(i);
		ju[c.y][c.x] = P.d;
		}
	}
	else
	{
		for(int i=0; i<4; i++)
		{
		coord c = P.posicion(i);
		ju[c.y][c.x] = P.D;
		}
	}
}

void jugador::borrar(pieza &P)
{	
	for(int i=0; i<4; i++)
	{
		coord c = P.posicion(i);
		ju[c.y][c.x]  =  ' ';	
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

void jugador::mover(pieza &P, int &r)
{
	if (kbhit())
    {
        pieza copia = P;
		char tecla = getch();
        if(tecla == 'a') P.ori.x -=2;
        if(tecla == 'd') P.ori.x +=2;
        if(tecla == 'w') P.ori.y -=2;
        if(tecla == 's') P.ori.y +=2;
        
        if(tecla =='c')
        {
        	jugador::rotar(P);
		}
        
        if(jugador::colision(P))
        {
        	P = copia;
		}
		
        jugador::borrar(copia);
        jugador::pintar(P,1);
    
		if(tecla == 'x')
		{
			jugador::pintar(P,2);
			r++;
			jugador::seleccinar(P,r);
		}
	}
}

bool jugador::colision(pieza &P)
{
	for(int i=0; i<4; i++)
	{
		coord c = P.posicion(i);
		
		if(c.x < 2 || c.x > 20)return true;
		
		if(c.y < 2 || c.y > 20)return true;	
	
		if(ju[c.y][c.x] == 'P' || ju[c.y][c.x] == 'S' || ju[c.y][c.x] == 'D' || ju[c.y][c.x] == 'F')return true;
	}
	
	return false;
}

class enemigo
{
	public:
		void dibujarmapaen();
		void pintar(pieza &, int);
		void borrar(pieza &);
		void seleccinar(pieza &, int);
		void mover(pieza &, int &);
		bool colision(pieza &);
		
};

void enemigo::dibujarmapaen()
{
	for(int i=0;i<22;i++)
    {
        cout<<endl;
        for(int j=0;j<22;j++)
        {
          cout<<en[i][j];  
        }
    }
}

void enemigo::pintar(pieza &P,int r)
{
	if(r == 1)
	{
		for(int i=0; i<4; i++)
		{
		coord c = P.posicion(i);
		en[c.y][c.x] = P.d;
		}
	}
	else
	{
		for(int i=0; i<4; i++)
		{
		coord c = P.posicion(i);
		en[c.y][c.x] = P.D;
		}
	}
}

void enemigo::borrar(pieza &P)
{
	for(int i=0; i<4; i++)
	{
		coord c = P.posicion(i);
		en[c.y][c.x]  =  ' ';	
	}
}

void enemigo::mover(pieza &P, int &r)
{
	if (kbhit())
    {
        pieza copia = P;
		char tecla = getch();
        if(tecla == 'a') P.ori.x -=2;
        if(tecla == 'd') P.ori.x +=2;
        if(tecla == 'w') P.ori.y -=2;
        if(tecla == 's') P.ori.y +=2;
        
        
        enemigo::borrar(copia);
        enemigo::pintar(P,1);
    
	}
}
int main ()
{
	
    jugador a;
    enemigo b;
    
    pieza S;
    int r = 0;
    int t=0;
    
    a.pasarmapa();
    a.seleccinar(S,r);
    
	while(true)
	{
		gotoxy(0,25); a.dibujarmapaju();
		gotoxy(0,0); b.dibujarmapaen();
		
		if(t == 0)
		{
			a.mover(S,r);
			if(r == 4) t=1;
		}
		if(t == 1)
		{
			b.mover(S,r);
		}
	}
	
 
 
 	return 0;   
    
}
