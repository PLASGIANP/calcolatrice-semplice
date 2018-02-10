#include <stdio.h>
#include <math.h>
float addizione(float x,float y);
float sottrazione(float x,float y);
float moltiplicazione(float x,float y);
float divisione(float x,float y);
int resto(int x,int y);
float radice(float x,float y);
float potenza (float x,float y);
int MCD(int x,int y);
float main(void)
{
	float a,b,n;
	double ris;
	printf("Inserire quale operazione si desidera fare");
	printf("\n1:addizione\n2:sottrazione\n3:moltiplicazione\n4:divisione\n5:resto\n6:radice\n7:potenza\n8:MCD");
	scanf("%f",&n);
	if(n==1)
	{
		printf("inserire i due valori da sommare:");
		scanf("%f%f",&a,&b);
		ris=addizione(a,b);
		printf("%f questo e'il risultato dell'addizione",ris);
	}
	 if(n==2)
	{
		printf("inserire i due valori da sottrarre:");
		scanf("%f%f",&a,&b);
		ris=sottrazione(a,b);
		printf("%f questo e'il risultato della sottrazione",ris);
	}
	 if(n==3)
	{
		printf("inserire i due valori da moltiplicare:");
		scanf("%f%f",&a,&b);
		ris=moltiplicazione(a,b);
		printf("%f questo e'il risultato della moltiplicazione",ris);
	}
         if(n==4)
	{
		printf("inserire i due valori da dividere:");
		scanf("%f%f",&a,&b);
		ris=divisione(a,b);
		printf("%f questo e'il risultato della divisione",ris);
	}
	 if(n==5)
	{
		printf("inserire i due valori da cui si vuole conoscere il resto:");
		scanf("%f%f",&a,&b);
		ris=resto(a,b);
		printf("%f questo e'il resto risultante",ris);
	}
  	 if(n==6)
	{
		printf("inserire i due valori il primo e'il radicando mentre il secondo e' l'indice della radice :");
		scanf("%f%f",&a,&b);
		ris=radice(a,b);
		printf("%f questo e'il risultato della radice",ris);
	}
	 if(n==7)
	{
		printf("inserire i due valori da elevare a potenza,il primo valore e' la base il secondo e'l'esponente della potenza:");
		scanf("%f%f",&a,&b);
		ris=potenza(a,b);
		printf("%f questo e'il risultato della potenza",ris);
	}
	if(n==8)
	{
		printf("inserire i due valori per fare l'MCD");
		scanf("%f%f",&a,&b);
		printf("%f questo e' il risultato del MCD",MCD(a,b));
	}
	return 0;
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
