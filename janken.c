#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
NOTES:
0 is Rock
1 is Paper
2 is Scissors
*/

int jankencheck(int you,int other)
{
	if(other-you==1||you-other==2)//Look more into this
	{
		return 0;//you lose
	}
	else if(other==you)
	{
		return 1;//draw
	}
	return 2;//you win
}

int main()
{
	const char *RPS[3];
	RPS[0]="Rock";
	RPS[1]="Paper";
	RPS[2]="Scissors";

	srand(time(NULL));
	int you;
	int other= rand()%3;
	int jankenres;

	printf("0)Rock\n1)paper\n2)Scissors\n");
	scanf("%d",&you);

	if(you>2||you<0)
	{
		printf("Nooooo!\n");//Number too big
		return 1;
	}

	jankenres = jankencheck(you,other);
	
	if(jankenres==2)
		printf("You won!\n");
	else if(jankenres==1)
	{
		printf("Draw!\n");
	}
	else
		printf("You lost!\n");
	
	printf("You used %s And he used %s \n",RPS[you],RPS[other]);
	return 0;
}
