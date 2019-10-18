#include <iostream>
#include <cmath>
int main()
{
  float x1,x2,a,b,c,x,delta;
  cout<<"Questo e' un programma che calcola le equazioni di secondo grado di tipo ax^2+bx+c=0"<<endl;
  cout<<"Inserisci i tre coefficienti a,b,c\n"<<endl;
  cin>>a>>b>>c;
  if ((a!=0)&&(b!=0)&&(c!=0))
  {
      cout<<"L'equazione e' completa quindi:"<<endl;
      delta=(b*b-4*a*c);
      if (delta>0)
      {
          x1=(-b+sqrt(delta))/2*a;
          x2=(-b-sqrt(delta))/2*a;
          cout<<"I valori di x1 e x2 sono:"<<x1<<x2<<endl;
      }
      if (delta<0)
      {
          cout<<"Il delta e' minore di 0 quindi il risultato coincide con l'insieme dei numeri reali R"<<endl;
      }
      if (delta==0)
      {
          cout<<"Il delta e' uguale a 0 quindi esistono due soluzioni reali e coincidenti:"<<endl;
          x1=-b/2a;
          x2=x1;
          cout<<"Il risultato e':"<<x1<<x2<<endl;
      }
  }
  if ((a==0)&&(b!=0)&&(c!=0))
  {
     cout<<"Questa non e' una equazione di secondo grado essendo a=0 ,quindi diventa di primo grado\n"<<endl;
     cout<<"Il risultato di questa equazione di primo grado e':";
     x1=-c/b;
     cout<<x1<<endl;
  }
  if ((a!=0)&&(b==0)&&(c!=0))
  {
      cout<<"L'equazione e' pura quindi:"<<endl;
      x=-c/a;
      x1=sqrt(x);
      x2=-sqrt(x);
      cout<<"I valori di x1 e x2 sono:"<<x1<<x2<<endl;
  }
  if ((a!=0)&&(b!=0)&&(c==0))
  {
      cout<<"L'equazione e' spuria quindi:"<<endl;
      x1=0;
      x2=-b/a;
      cout<<"I valori di x1 e x2 sono:"<<x1<<x2<<endl;
  }
  if((a==0)&&(b==0)&&(c==0))
  {
      cout<<"L'equazione e' indeterminata quindi l'insieme delle soluzioni coincide con l'insieme R"<<endl;
  }
  return 0;
}
