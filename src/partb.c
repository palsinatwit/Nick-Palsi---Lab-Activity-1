#include "partb.h"
#include <stdio.h>

// Prompts user to enter their desired weight and returns the correct amount in dollars. 

int main(){

    double weight;

printf("Enter the weight of the package: ");
    scanf("%lf",&weight);

   printf("$%.2f", shipping_cost(weight)); 


}



/**
 * TODO: Describe what the function does
 * 
 *  This function returns the correct pricing based off the weight of
 *  the package entered as @param weight. 
 *  @returns correct pricing. 
 * 
 */
double shipping_cost(double weight) {
    // TODO: Complete and document
    // DONE

    if(weight > 0 && weight <= 1.0){
            return 3.50;
    }
    else if(weight > 1.0 && weight <= 3.0){
            return 5.50;
    }
    else if(weight > 3.0 && weight <= 10.0){
            return 8.50;
    }
    // Not sure if there was an error in the readme, because im
    // assuming that you wanted if the weight was greater than 20.0,
    // keep the price $10.50. However, that is not what it says so I 
    // will leave it as invalid if the weight is greater than 20.0.
    // The simple fix would be to just remove the "&& weight <= 20.0". 

    else if(weight > 10.0 && weight <= 20.0){
            return 10.50;
    }

    return -1;
}

