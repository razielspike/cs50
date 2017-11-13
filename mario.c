#include <cs50.h>
#include <stdio.h>

int main(void){
    int height = 0;
    do {
    // Get height input from user
        height = get_int();
    } while (height < 1 && height > 24);

    for (int i = 0; i < height; i++) {
    // Print spaces
        for (int j = 0; j < height-i-1; j++) {
            printf("%s", " ");
        }
        // Print pyramid body
        for (int k = 0; k < i+2; k++) {
            printf("#");
        }
        // Print spaces between the sides
        printf("  ");
        // Print pyramid body
        for(int l = 0; l < i+2; l++) {
            printf("#");
        }
        printf("\n");
    }

// Be a good citizen
return 0;
}
