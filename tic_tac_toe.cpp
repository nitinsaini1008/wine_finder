#include<iostream>
using namespace std;
char a[9]={'1','2','3','4','5','6','7','8','9'};
void clrscr()
{
	system("clear");
}
void ground()
{
	clrscr();
	printf("    Hello this game is made by 'NITIN SAINI'");
	printf("\n	%c    |  %c  |  %c  ",a[0],a[1],a[2]);
	printf("\n	     |     |      ");
	printf("\n    --------------------------");
	printf("\n	%c    |  %c  |  %c  ",a[3],a[4],a[5]);
	printf("\n	     |     |       ");
	printf("\n    --------------------------");
	printf("\n	%c    |  %c  |  %c  ",a[6],a[7],a[8]);
	printf("\n	     |     |      ");
}
int win(int player)
{
	if((a[0]==a[1] && a[0]==a[2])||(a[0]==a[3] && a[0]==a[6])||(a[0]==a[4] && a[0]==a[8]))
	{
		printf("player %d is win",player);
		return(0);
	}
	else if(a[3]==a[4] && a[3]==a[5])
	{
		printf("player %d is win",player);
		return(0);
	}
	else if(a[6]==a[7] && a[6]==a[8])
	{
		printf("player %d is win",player);
		return(0);
	}
	else if((a[1]==a[4] && a[1]==a[7])||(a[2]==a[5] && a[2]==a[8])||(a[2]==a[4] && a[2]==a[6]))
	{
		printf("player %d is win",player);
		return(0);
	}
	else
	{
		return(1);
	}
}
int main()
{
	int player=1;
	while(win(player))
	{
		int x;
		ground();
		player=player%2;
		printf("player %d enter your choice",player);
		scanf("%d",&x);
		x=x-1;
		if(player==0)
		{
			a[x]='o';
		}
		else
		{
			a[x]='*';
		}
		player++;
	}

}
