#include<stdio.h>
#include<math.h>
//bold color 
#define BOLD "\033[1m"
#define RESET "\033[0m"
//text colors
#define RED "\033[0;31m"
#define YELLOW "\033[0;33m"
#define GREEN "\033[0;32m"
//calling functions
void menu();
double divison(double,double);
double modulus(double,double);

//main function 
int main(){
    int choice;
    double first , second , result;

    printf("---------------------\n\n");
    printf(BOLD"Welcome to simple calculator \n"RESET);

    while(1){
      //call menu function
       menu();

      // input operation
       printf("enter value(0-7) :");
       scanf("%d",&choice);
     
       //conditon to check if user wants to quit
       if(choice == 7){
         break;
       }

       //condtriton for checking wether number entered by the user is from 1 to 7
       if(choice < 1 || choice > 7){
         fprintf(stderr,"invalid number selected");
         continue;
       }

       // input numbers
       printf("enter first number :");
       scanf("%lf",&first);

       printf("enter second number :");
       scanf("%lf",&second);

       //algorithm for calculation
       switch (choice){
         case 1: //additon
         result = first + second;
        break;

         case 2: //subtraction
         result = first - second;
        break;

         case 3: //multiplication
         result = first * second;
        break;

         case 4: //division
         result = divison(first,second);
        break;

         case 5: //modulus
         result = modulus(first,second);
        break;

         case 6: //power
         result = pow(first,second);
        break;
       
       default:
        break;
     
        //printing output while checking for nan output
        }
         if(!isnan(result)){
         printf(GREEN"\n output : %.2f \n",result,RESET);
        }
    }

    return 0;
}

void menu(){
    //introduction paragraph
  
    printf("\n--------------------\n");
  printf(YELLOW"select a operation from the following list"RESET);
  printf(YELLOW"\n 1 addition"RESET);
  printf(YELLOW"\n 2 subtraction"RESET);
  printf(YELLOW"\n 3 multiplication"RESET);
  printf(YELLOW"\n 4 division"RESET);
  printf(YELLOW"\n 6 power"RESET);
  printf(YELLOW"\n 7 exit"RESET);
  printf("\n--------------------\n\n");
}

//calling function for division
double divison(double a,double b){
    if(b==0){
        printf(RED"invalid arguement for division"RESET);
        return NAN;
    }
    else{
        return a/b;
    }
}

//calling function for modulus
double modulus(double a,double b){
    if(b==0){
        printf(RED"invalid arguement for modulus"RESET);
        return NAN;
    }
    else{
        return (int)a%(int)b;
    }
}
