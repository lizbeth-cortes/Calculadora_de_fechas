//Determinar la diferencia de dias, meses y anios entre dos fechas
#include <stdio.h>
#include <stdlib.h>

int anio ();
int mes1 ();
int MesDias1 ();
int mes2 ();
int MesDias2 ();
int mayoranio ();
int difanios ();
int diasA1 ();
int diasA2 ();

int main ()
{
	int a1,m1,d1,a2,m2,d2,aniodias,restodias1,restodias2,diastotales,diasresto,mesesresto,aniosresto;
	printf ("Determinar la diferencia de d%cas,meses y a%cos entre dos fechas.",161,164);
	printf ("\n\nNOTA: El a%co de la primera fecha debe de ser menor al a%co de la segunda fecha y este programa funciona introduciendo del a%co 1 en adelante.",164,164,164);

	printf ("\n\nDigite el a%co de la primera fecha: ",164);
	scanf ("%i",&a1);
	a1 = anio (a1);
	printf ("Digite el mes de la primera fecha: ");
	scanf ("%i",&m1);
	m1 = mes1 (m1);
	printf ("Digite el d%ca de la primera fecha: ",161);
	scanf ("%i",&d1);
	d1 = MesDias1 (m1,d1);
	
	printf ("\n\nDigite el a%co de la segunda fecha: ",164);
	scanf ("%i",&a2);
	a2= mayoranio (a1,a2);
	printf ("Digite el mes de la segunda fecha: ");
	scanf ("%i",&m2);
	m2 = mes2 (m2);
	printf ("Digite el d%ca de la segunda fecha: ",161);
	scanf ("%i",&d2);
	d2 = MesDias2 (m2,d2);
	
	aniodias=difanios (a1,a2);
	restodias1=diasA1 (m1,d1);
	restodias2=diasA2 (m2,d2);
	diastotales=aniodias + (restodias2 - restodias1);
	aniosresto=diastotales/365;
	mesesresto=((diastotales%365)/30);
	diasresto=((diastotales%365)%30);
	
	printf ("\n\nHay una diferencia de %i d%ca(s), %i mes(es) y %i a%co(s).",diasresto,161,mesesresto,aniosresto,164);
	return 0;
}

int anio (int a1)
{
	while(a1<=0) 
		{
			printf ("Has introducido un dato no v%clido,vuelve a digitar el a%co: ",160,164);
			scanf ("%i",&a1);
		}
	return a1;
}

int mes1 (int m1)
{
	if (m1>12)
	{
			while(m1>12) 
			{
				printf ("Has introducido un dato no v%clido,vuelve a digitar el mes: ",160);
				scanf ("%i",&m1);
			}
			return m1;
	}
	else
	{
		while(m1<=0) 
			{
				printf ("Has introducido un dato no v%clido,vuelve a digitar el mes: ",160);
				scanf ("%i",&m1);
			}
			return m1;
	}
	return m1;
}

int MesDias1 (m1,d1)
{
	switch (m1)
	{
		case 1: while ((d1<=0)||(d1>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 2: while ((d1<=0)||(d1>28))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 3: while ((d1<=0)||(d1>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 4: while ((d1<=0)||(d1>30))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 5: while ((d1<=0)||(d1>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 6: while ((d1<=0)||(d1>30))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 7: while ((d1<=0)||(d1>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 8: while ((d1<=0)||(d1>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 9: while ((d1<=0)||(d1>30))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 10: while ((d1<=0)||(d1>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 11: while ((d1<=0)||(d1>30))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		case 12: while ((d1<=0)||(d1>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d1);
				}
				return d1;
		break;
		
	}
}

int mayoranio (int a1, int a2)
{
	while (a2<a1)
	{
		printf ("Has introducido un dato no v%clido,vuelve a digitar el a%co: ",160,164);
		scanf ("%i",&a2);
	}
	return a2;
}

int mes2 (int m2)
{
	if (m2>12)
	{
			while(m2>12) 
			{
				printf ("Has introducido un dato no v%clido,vuelve a digitar el mes: ",160);
				scanf ("%i",&m2);
			}
			return m2;
	}
	else
	{
		while(m2<=0) 
			{
				printf ("Has introducido un dato no v%clido,vuelve a digitar el mes: ",160);
				scanf ("%i",&m2);
			}
			return m2;
	}
	return m2;
}

int MesDias2 (m2,d2)
{
	switch (m2)
	{
		case 1: while ((d2<=0)||(d2>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 2: while ((d2<=0)||(d2>28))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 3: while ((d2<=0)||(d2>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 4: while ((d2<=0)||(d2>30))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 5: while ((d2<=0)||(d2>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 6: while ((d2<=0)||(d2>30))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 7: while ((d2<=0)||(d2>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 8: while ((d2<=0)||(d2>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 9: while ((d2<=0)||(d2>30))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 10: while ((d2<=0)||(d2>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 11: while ((d2<=0)||(d2>30))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		case 12: while ((d2<=0)||(d2>31))
				{
					printf ("Has introducido un dato no v%clido,vuelve a digitar el d%ca: ",160,161);
					scanf ("%i",&d2);
				}
				return d2;
		break;
		
	}
}

int difanios (int a1, int a2)
{
	int aniodif,bisiesto1,bisiesto2,i,aniodias;
	aniodif=a2-a1;
	while (a1<=a2)
	{
		if (((aniodif%4 == 0)&&(aniodif%100!=0))||(aniodif%400 == 0))
		{
			bisiesto1=0;
			bisiesto2=bisiesto1++;
		}
		else 
		{
			bisiesto2=0;
		}
		
		aniodias=(aniodif*365)+bisiesto2;
		return aniodias;	
	}
	return aniodias;
}

int diasA1 (int m1,int d1)
{
	int restodias1;
		switch (m1)
		{
			case 1: m1=0;
			break;
			case 2: m1=31;
			break;
			case 3: m1=59;
			break;
			case 4: m1=90;
			break;
			case 5: m1=120;
			break;
			case 6: m1=151;
			break;
			case 7: m1=181;
			break;
			case 8: m1=212;
			break;
			case 9: m1=243;
			break;
			case 10: m1=273;
			break;
			case 11: m1=304;
			break;
			case 12: m1=334;
			break;
			
		}
	restodias1= m1 + d1;
	return restodias1;
}

int diasA2 (int m2,int d2)
{
	int restodias2;
		switch (m2)
		{
			case 1: m2=0;
			break;
			case 2: m2=31;
			break;
			case 3: m2=59;
			break;
			case 4: m2=90;
			break;
			case 5: m2=120;
			break;
			case 6: m2=151;
			break;
			case 7: m2=181;
			break;
			case 8: m2=212;
			break;
			case 9: m2=243;
			break;
			case 10: m2=273;
			break;
			case 11: m2=304;
			break;
			case 12: m2=334;
			break;
			
		}
	restodias2 = m2 + d2;
	return restodias2;
}
