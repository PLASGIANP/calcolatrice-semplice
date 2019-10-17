#include <iostream>
#include <cmath>
using namespace std;
float addizione(float x,float y);
float sottrazione(float x,float y);
float moltiplicazione(float x,float y);
float divisione(float x,float y);
int resto(int x,int y);
float radice(float x,float y);
float potenza (float x,float y);
int MCD(int x,int y);
int fattoriale(int x);
int main()
{
	float a,b,n;
	double ris;
	cout<<"Inserire quale operazione si desidera fare"<<endl;
	cout<< "1:addizione\n2:sottrazione\n3:moltiplicazione\n4:divisione\n5:resto\n6:radice\n7:potenza\n8:MCD\n9:Fattoriale\n0:Te saludi"<<endl;
	cin>>n;
	if(n==1)
	{
		cout<<"inserire i due valori da sommare"<<endl;
		cin>>a>>b;
		ris=addizione(a,b);
		cout<<"Questo e'il risultato dell'addizione:"<<ris <<endl;
	}
	 if(n==2)
	{
		cout<<"inserire i due valori da sottrarre:"<<endl;
		cin>>a>>b;
		ris=sottrazione(a,b);
		cout<<"Questo e'il risultato della sottrazione:"<<ris<<endl;
	}
	 if(n==3)
	{
		cout<<"inserire i due valori da moltiplicare:"<<endl;
		cin>>a>>b;
		ris=moltiplicazione(a,b);
		cout<<"Questo e'il risultato della moltiplicazione:"<<ris<<endl;
	}
         if(n==4)
	{
		cout<<"Inserire due valori da dividere:"<<endl;
		cin>>a>>b;
		ris=divisione(a,b);
		cout<<"Questo e'il risultato della divisione:"<<ris<<endl;
	 }
	 if(n==5)
	{
		cout<<"Inserire i due valori da cui si vuole conoscere il resto:"<<endl;
		cin>>a>>b;
		ris=resto(a,b);
		cout<<"Questo e'il resto risultante:"<<ris<<endl;
	}
  	 if(n==6)
	{
		cout<<"Inserire i due valori il primo e'il radicando mentre il secondo e' l'indice della radice :"<<endl;
		cin>>a>>b;
		ris=radice(a,b);
		cout<<"Questo e'il risultato della radice:"<<ris<<endl;
	}
	 if(n==7)
	{
		cout<<"Inserire i due valori da elevare a potenza,il primo valore e' la base il secondo e'l'esponente della potenza:"<<endl;
		cin>>a>>b;
		ris=potenza(a,b);
		cout<<"Questo e'il risultato della potenza:"<<ris<<endl;
	}
	if(n==8)
	{
		cout<<"Inserire i due valori per fare l'MCD:"<<endl;
		cin>>a>>b;
		cout<<"Questo e' il risultato del MCD:"<<MCD(a,b)<<endl;
	}
	if(n==9)
	{
		cout<<"Inserire il valore con cui effettuare il fattoriale:"<<endl;
		cin>>a;
		ris=fattoriale(a);
		cout<<"Ecco il valore del fattoriale:"<<ris<<endl;
	}
	if(n==0)
	{
	    cout<<"Vaffanculo a tua madre,e tanti saluti";
	    return 0;
	}
	return main();
}
float addizione(float x, float y)
{
  float s;
  s = x + y;
  return s;
}

float sottrazione(float x, float y)
{
  float d;
  d = x - y;
  return d;
}

float moltiplicazione(float x, float y)
{
  float p;
  p = x * y;
  return p;
}

float divisione(float x, float y)
{
  float q;
  q = x / y;
  return q;
}

int resto(int x, int y)
{
  int r;
  r = x % y;
  return r;
}
float potenza (float x,float y)
{
  float t;
  t=pow(x,y);
  return t;
}
float radice(float x,float y)
{
  float z;
  z=pow(x,1.0/ y);
  return z;
}
int MCD(int x,int y)
{
	int resto;
	resto=x%y;
	if(resto==0)
	{
		return y;
	}
	else
	    return MCD(y,resto);
}
int fattoriale(int x)
{
    if (x==0) 
        return 1;
    else
    {
        x= x*fattoriale(x-1);
        return x;
    }
}
