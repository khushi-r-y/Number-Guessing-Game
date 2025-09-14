#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number,guess,speed,attempts=0;
	printf("Enter any number of your choice as speed: ");
	scanf("%d",&speed);
	number=(speed*3+7)%100+1;
	printf("Welcom to the number guessing game!\n");
	printf("Guess the number between 1 and 100\n");
	do
	{
		printf("Enter your guess: ");
		scanf("%d",&guess);
		attempts++;
		if(guess>number)
		{
			printf("Too high! Try again.\n");
		}
		else if(guess<number)
		{
			printf("Too low! Try again.\n");
		}
		else
		{
			printf("Congratulations! You guessed the number correct in %d attempts and the number is %d",attempts,number);
		}
	}while(guess!=number);
	return 0;
}
