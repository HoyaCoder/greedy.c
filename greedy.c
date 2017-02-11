#include <stdio.h>
#include <cs50.h>
#include <math.h>

/* Greedy CS50 Project
   by James Meehan
*/

int main(void)
{
    
    float change;
    printf("O hai! ");
    do
    {
        printf("How much change is owed?\n");
        change = get_float();
    }
    while (change < 0);
    
    int cents = round(change * 100);
    int q = cents/25;
    int d = (cents - q*25)/10;
    int n = (cents - q*25 - d*10)/5;
    int p = (cents - q*25 - d*10 - n*5);
    
    printf("%i\n", q + d + n + p);
}
