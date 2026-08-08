// header files
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//defining colors
#define RED "\033[1;31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define RESET "\033[0m"

int main(){
    // taking inputs
    int random , guess;
    int no_of_guess = 0;
    srand(time(NULL));

    //generating random values and instructions
    printf("NUMBER GUESSING GAME \n");
    printf("kindly guess a number between 0 to 100\n");
    printf("-----------------\n\n");
    random = rand()%100+1;

    //loop for guessing the correct number
    do{
        printf("please enter a number :");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess < random){
            printf(RED"guess a larger number \n\n"RESET);
        }
        else if(guess > random){
            printf(RED"guess a smaller number \n\n"RESET);
        }
        else{
            printf(GREEN"congratulations ! you have guessed the correct number in %d attempts.",no_of_guess,RESET);
        }

    }while(guess != random);

    //additonal messages
    printf(YELLOW"\n thank you ! \n project developed by : Taranveer Singh"RESET);
    system("pause");
    return 0;
}