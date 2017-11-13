#include <cs50.h>
#include <stdio.h>

int main(void) {

    float m;
    do {
    // Get user input
        m = get_float();
    } while (m < 0);
    
    // Calculate the number of cents
    int cents = m * 100;
    int quarter = 0;
    while (cents > 24) {
        quarter += 1;
        cents -= 25;
    }
    int dime = 0;
    // Calculate the number of dimes
    while (cents > 9) {
        dime += 1;
        cents -= 10;
    }
    // Calculate the number of nickles
    int nickle = 0;
    while (cents > 4) {
        nickle += 1;
        cents -= 5;
    }
    // Calculate the number of pennies
    int penny = 0;
    while (cents > 0) {
        penny += 1;
        cents -= 1;
    }

    // Print results
    printf("%i quarters \n", quarter);
    printf("%i dimes \n", dime);
    printf("%i nickles \n", nickle);
    printf("%i pennies \n", penny);
    
    //Be a good citizen
return 0;
}
