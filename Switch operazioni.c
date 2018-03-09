#include <stdio.h>
intmain(void)
{
	int a,b,n,c;
	do
	{
	printf("inserire operazione da effettuare");
	printf("\n1. ADDIZIONE\n2.SOTTRAZIONE\N3.MOLTIPLICAZIONE\N4.DIVISIONE");
	scanf("%d",&n);
	}while((n<1)||(n<4));
	switch(n)
	{
		case 1:
			printf("Inserire i due addendi:\n");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf("La somma e' uguale a:%d",c);
		break;
		case 2:
			printf("Inserire il minuendo e il sottraendo");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("La differenza e' uguale a:%d",c);
		break;
		case 3:
			printf("Inserire il i due fattori");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("Il prodotto e' uguale a:%d",c);
		break;
		case 4:
			printf("Inserire il dividendo e il divisore");
			scanf("%d%d",&a,&b);
			c=a/b;
			printf("La differenza e' uguale a:%d",c);
		break;
		default:
			printf("Uscita programma");
		break;
	}
	return 0;
}

