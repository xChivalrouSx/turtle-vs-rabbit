//	Mert Çakar

#include<stdio.h> // st. input-output
#include<stdlib.h> // system("cls") and rand()
#include<time.h> // time fonk.

void finish(int);
void sleep_1(int);
void sleep_2(int);
void sleep_wait(int);

int main()
{
	int zar_t=0 , zar_r=0 , a , b=0 , t=1 , r=1 , control;

	srand(time(NULL));		//random

	// presentation ___________________________________________

	printf("\n") ;

	for ( a=1 ; a<29 ; a++ )
		printf(" ");

	printf("Turtle(t) vs Rabbit(r)   \n\n");
	sleep_1(b);

	for ( a=1 ; a<35 ; a++ )
		printf(" ");

	printf("C");
	sleep_1(b);
	printf("r");
	sleep_1(b);
	printf("e");
	sleep_1(b);
	printf("a");
	sleep_1(b);
	printf("t");
	sleep_1(b);
	printf("e");
	sleep_1(b);
	printf("d");
	sleep_1(b);
	printf(" ");
	printf("b");
	sleep_1(b);
	printf("y");
	sleep_2(b);

   printf("\n");

	for ( a=1 ; a<35 ; a++ )
		printf(" ");

	printf("Mert Cakar  \n");

	sleep_wait(b);
	system("cls");

	// first situation (3-2-1)___________________________________________

	for ( b=3 ; b>0 ; b-- )
	{
		printf(" dice for turtle ->\n") ;
		finish(b);
		printf("|END|\n");		//first posiition (up)
		printf("t") ;

		for ( a=1 ; a<37 ; a++ )
			printf(" ");

		printf("Ready! \n");

		printf("r");

		for ( a=1 ; a<39 ; a++ )
			printf(" ") ;

		printf("%d!\n" , b);

		finish(b); 			//first posiition (down)
		printf("|END|\n");
		printf(" dice for rabbit ->\n") ;

		sleep_2(b);
		system("cls");
	}

	// first situation (go)___________________________________________

	printf(" dice for turtle ->\n");
	finish(b); 			//first posiition (up)
	printf("|END|\n");
	printf("t");

	for ( a=1 ; a<37 ; a++ )
		printf(" ");

	printf("Ready! \n");

	printf("r");

	for ( a=1 ; a<39 ; a++ )
		printf(" ");

	printf("Go\n");

	finish(b); 			//first posiition (down)
	printf("|END|\n") ;
	printf(" dice for rabbit ->\n");

	sleep_2(b);
	system("cls");

	// start and control ___________________________________________

	printf("\a");
	control = 1;				// rabbit control for (5)

	// race loop ___________________________________________

	while ( t<75 || r<75 )
	{
		zar_t = ( rand() % 3 ) + 1;		//dice for (t)

		if ( control == 1 )
			zar_r = ( rand() % 6 ) + 1 ;		// dice for (r)

		printf(" dice for turtle -> %d   \n" , zar_t);

		finish(b); 			//	finish line (up)
		printf("|END|\n");

		// t  ___________________________________________

		t += zar_t;

		for (a=1 ; a<t ; a++)
			printf(" ");

		printf("t\n");		// turtle

		// r  ___________________________________________

		if ( control == 1 )		//normal position
		{
			if ( zar_r == 1 || zar_r == 2 || zar_r == 3 || zar_r == 6 )
				r += zar_r;

			if ( zar_r == 4 )
			{
				if ( r>4 )
					r -= zar_r;
			else
				r=1;
			}

			for (a=1 ; a<r ; a++)
				printf(" ");
		}
		else		// wait position
		{
			for (a=1 ; a<r ; a++)
				printf(" ");
		}

		printf("r\n") ; //rabbit

		finish(b); //	finish line (down)

		printf("|END|\n");

		if ( control == 1 )
		{
			printf(" dice for rabbit -> %d   \n" , zar_r);
			if ( zar_r == 5 )
				control = 0;
		}
		else if ( control == 0 )
		{
			printf(" dice for rabbit -> Waiting...   \n");
			control++;
		}

		// sleep and race control ___________________________________________

		sleep_2(b);

		if ( t>=75 || r>=75 )
			break;

		system("cls");
	}
	// result ___________________________________________

	if ( r>=75 && t>=75 )
		printf("\nDeuce!...");
	else if ( r>=75 )
		printf("\nRabbit wins!...");
	else if ( t>=75 )
		printf ("\nTurtle wins!...");

	// exit ___________________________________________

	printf("\n") ;

	do
	{
		printf("\nPlease enter 0 for exit...");
		printf("\n->");
		scanf("%d" , &b);
	}
	while( b != 0 );

	return 0;
}

void finish(int a)
{
	for (a=1 ; a<75 ; a++)
		printf("-");
}

void sleep_1(int a)
{
	for (a=1 ; a<300000000 ; a++)
	{}
}

void sleep_2(int a)
{
	for (a=1 ; a<600000000 ; a++)
	{}
}

void sleep_wait(int a)
{
	for (a=1 ; a<1500000000 ; a++)
	{}
}

