#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void) {
    // Get the name
    printf("Please input your First and Last Name:\n");
    string name = get_string();

    // Print the first letter of the first word uppercase
    printf("The initials are %c ", toupper(name[0]));

    // For the character after \0 - the end of the first word
    for (int i = 0; i < strlen(name); i++) {
        if (name[i] == ' ' && name[i+1] != '\0') {
            // Print the character obtained uppercase
            printf("and %c.\n", toupper(name[i+1]));
        }
    }
    // Proceed to be a good citizen
    return 0;
}
