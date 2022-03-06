#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, guess, tries = 0;
    char yn;
    srand(time(0)); 
    num = rand() % 100 + 1; 

    printf("Guess My Number Game\n\n");

    do
    {
        printf("Enter a guess between 1 and 100 : ");
        scanf("%d", &guess);
        tries++;

        if (guess > num && tries<=3)
        {
            printf("Too high!\n\n");
        }
        else if (guess < num && tries<=3)
        {
            printf("Too low!\n\n");
        }
        else if(tries==3);
        {
            printf("You loose!!");
            printf("Do you wanna play more??(y/n) ");
            scanf("%c",&yn);
            if(yn=="y")
            {tries=0;
            continue;}
            else
            {break;}
        }
        else
        {
            printf("\nCorrect! You got it in %d guesses!\n", tries);
        }
		
    }while (guess != num);
    printf("Do you wanna play more??");
    scanf("%c",&yn);
   
    

    return 0;
}