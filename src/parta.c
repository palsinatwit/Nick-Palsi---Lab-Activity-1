#include "parta.h"
#include<stdio.h>

/**
 *  Prompts user to enter the number of dimes, nickels, and pennies
 *  of their choice, followed by returning the correct conversion into
 *  cents. 
 */
int main(){

int dimes, nickels, pennies;

printf("Enter number of dimes: ");
scanf("%d", &dimes);
printf("Enter number of nickels: ");
scanf("%d", &nickels);
printf("Enter number of pennies: ");
scanf("%d", &pennies);

printf("%d\n",coins_to_cents(dimes,nickels,pennies));

}

/**
 * TODO: Describe what the function does
 * DONE
 * 
 *  The first part of the function is simply returning -1 if the amount
 *  of dimes, nickels, or pennies is invalid.
 *  @param dimes Being multiplied by 10 to get the correct amount
 *  @param nickels being multiplied by 5 to get the correct amount
 *  @param pennies having no work since it is just being added as 1
 *  @return dimes + nickels + pennies to get the correct amount
 * 
 */
int coins_to_cents(int dimes, int nickels, int pennies) {
    // TODO: Complete and document


    if(dimes < 0 || nickels < 0 || pennies < 0){

        return -1;
    }

  dimes = dimes * 10;
  nickels = nickels * 5;
  

return dimes + nickels + pennies; 


}
