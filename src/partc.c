#include "partc.h"
#include<stdio.h>

// Prompts user to enter a starting number and ending number. Followed
// by returning the sum of all even numbers in that range. 

int main(){

int b, e;

printf("Pick a number to begin with: ");
    scanf("%d",&b);
printf("Pick a number to end with: ");
    scanf("%d",&e);

printf("%d\n",add_all_evens(b,e));
}


/**
 * TODO: Describe what the function does
 * 
 *  This function adds up all even numbers based on the starting point
 *  and end point chosen by the user.
 * 
 *  @param adder Keeps track of the addition being done.
 *  @return Even numbers added up. 
 * 
 */
int add_all_evens(int begin, int end) {
    // TODO: Complete and document
    // DONE

int adder = 0;
    for(int i = begin; i <= end; i++){

        if(i % 2 == 0 ){
            adder += i;
        }

    }

return adder; 
    
}
