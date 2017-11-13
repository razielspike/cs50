#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[]) {

    // Print out the error of insufficient command line arguments
    if (argc != 2 ) {
    printf("Not enough command line arguments!\nYou need to have more than %i.\n", argc);
    return 1;
    }

    // Convert string to int
    int i = atoi(argv[1]);

    // Ask for a positive value
    if ( i < 1) {
        printf("Please input a positive value.\n");
        return 2;
    }

    // Request text
    printf("Please input the data you would like encrypted: \n");
    string text = get_string();
    int text_length = strlen(text);

    for (int j = 0; j < text_length; j++) {

        // Individual chars
        if(isalpha(text[j])) {
            // Lower case
            if(islower(text[j])) {
                printf("%c", ((((text[j] - 97)+i)%26)+97));
            } else {
            // Higher Case
                printf("%c", ((((text[j] - 65)+i)%26)+65));
            }
        } else {
            printf("%c", text[j]);
        }
    // Proceed to be a good citizen
    }
    printf("\n");
    return 0;
}
