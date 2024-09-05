#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int number,guess,i,n=1;
	srand(time(0));
	number = rand()%100 +1;
	//printf("%d\n",number);
	printf("Welcome to a guess game\n");
	printf("Enter the no of attempt you want to try:\n");
	scanf("%d",&i);
	do
	{
		while(n<=i)
		{
				printf("Enter a number between 0 to 100 :\n");
				scanf("%d",&guess);
				if(number>guess)
				{
					printf("Higher number please!\n");
				}
				else if(number<guess)
				{
					printf("Lower number please!\n");
				}
				else
				{
					printf("You guessed it in %d attempts\n",n);
					break;
				}
				n++;
		}
		break;
	}while(guess != number);
	if(n>i)
	{
		printf("\nYou are out of move");
	}
	return 0;
}
