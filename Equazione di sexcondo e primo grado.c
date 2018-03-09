#include <stdio.h>
#include <math.h>
int main (void)
{
  float x1,x2,a,b,c,delta;
  int n;
  do
	{
		  printf("Questo e' un programma che calcola le equazioni di primo e secondo grado in forma base");
		  printf("\n1.Equazione di primo grado");
		  printf("\n2.Equazione di secondo grado");
		  printf("\n3.Esci\n");
		  scanf("%d",&n);
		
		switch(n)
		{
			case 1:
				printf("Questa e' u ma essendo a=0 diventa di primo grado\n");
				printf("Inserire a e b");
				scanf("%f\n%f",&a,&b);
		        printf("Il risultato di questa equazione di primo grado e':");
		        x1=-c/b;
		        printf("%f",x1);
	        	break;
	        case 2:
	        	printf("Inserisci i tre numeri a,b,c\n");
	  			scanf("%f%f%f",&a,&b,&c);
	        	printf("L'equazione e' completa quindi:\n");
	      		delta=(b*b-4*a*c);
	     		 if (delta >= 0)
	     		 {
	          			x1=(-b+sqrt(delta))/(2*a);
	          			x2=(-b-sqrt(delta))/(2*a);
	          			printf("I valori di x1 e x2 sono:%f e %f",x1,x2);
	      		 }
	     		 if (delta < 0)
	     		 {
	          			printf("Il delta e' minore di 0 quindi il risultato coincide con l'insieme dei numeri reali R");
	      		 }
	      		 default:
	      		 	printf("Uscita dal programma");
	      		 	return 0;
	      		break;
	   	}
	   	
   	}while((n>4) || (n<0));
   	
   	return 0;
}
