#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) 
{
    printf("How much change is needed?\n");
  
    float change = GetFloat();
    change *= 100;
    //rounds change
    int changePennies = (int) round(change);  //change in pennies
    int numCoins = 0; //lowest number of coins to make change, answer to problem
    int result; //changePennies divided by quarters, nickles, etc
    int leftover; //coins left over after divided by quarters
    int coinsLeft;
    
    //quarters
    result = changePennies / 25;
    leftover = 25 * result; 
    numCoins = numCoins + result;
    coinsLeft = changePennies - leftover;

    
    //dimes
    result = coinsLeft / 10;
    leftover = 10 * result; 
    numCoins = numCoins + result;
    coinsLeft = coinsLeft - leftover;

    
    //nickles
    result = coinsLeft / 5;
    leftover = 5 * result; 
    numCoins = numCoins + result;
    coinsLeft = coinsLeft -leftover;
    
    //pennies
    result = coinsLeft / 1;
    leftover = 1 * result; 
    numCoins = numCoins + result;
    coinsLeft = coinsLeft -leftover;
    
    printf("%i\n", numCoins);   
} 
  
    






