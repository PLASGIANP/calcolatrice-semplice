#include <stdio.h>
#include <math.h>
int main(void)
{
  float x1,x2,a,b,c,x,delta;
  printf("Questo e' un programma che calcola le equazioni di secondo grado di tipo ax^2+bx+c=0\n");
  printf("Inserisci i tre numeri a,b,c\n");
  scanf("%f%f%f",&a,&b,&c);
  if ((a!=0)&&(b!=0)&&(c!=0))
  {
      printf("L'equazione e' completa quindi:\n");
      delta=(b*b-4*a*c);
      if (delta>0)
      {
          x1=(-b+sqrt(delta))/2*a;
          x2=(-b-sqrt(delta))/2*a;
          printf("I valori di x1 e x2 sono:%f e %f",x1,x2);
      }
      if (delta<0)
      {
          printf("Il delta e' minore di 0 quindi il risultato coincide con l'insieme dei numeri reali R");
      }
      if (delta==0)
      {
          printf("Il delta e' uguale a 0 quindi esistono due soluzioni reali e coincidenti:\n");
          x1=-b/2a;
          x2=x1;
          printf("Il risultato e': %f e %f",x1,x2);
      }
  }
  if ((a==0)&&(b!=0)&&(c!=0))
  {
     printf("Questa non e' una equazione di secondo grado ma essendo a=0 diventa di primo grado\n");
     printf("Il risultato di questa equazione di primo grado e':");
     x1=-c/b;
     printf("%f",x1);
  }
  if ((a!=0)&&(b==0)&&(c!=0))
  {
      printf("L'equazione e' pura quindi:\n");
      x=-c/a;
      x1=sqrt(x);
      x2=-sqrt(x);
      printf("I valori di x1 e x2 sono:%f e %f",x1,x2);
  }
  if ((a!=0)&&(b!=0)&&(c==0))
  {
      printf("L'equazione e' spuria quindi:\n");
      x1=0;
      x2=-b/a;
      printf("I valori di x1 e x2 sono:%f e %f",x1,x2);
  }
  if((a==0)&&(b==0)&&(c==0))
  {
      printf("L'equazione e' indeterminata quindi l'insieme delle soluzioni coincide con l'insieme R\n");
  }
  return 0;
}
