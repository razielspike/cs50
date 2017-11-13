 /* Created after reading the code from Chris Anders, chris@hell-labs.de - the reason for similar variable names and solution */

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

char caesar(char token, int key);

int main(int argc, string argv[]) {


    bool key = false;
    string keyword = "";
    int keylength = 0;
    string text = "";
    int text_length;
    int key_count = 0;

    do
    {
        // Incorrect Command Line Arguments
        if(argc != 2) {
            printf("Incorrect number of command line arguments\n");
            return 1;
        }
        else if(argv[1])
        {
            int length = strlen(argv[1]);
            for (int i = 0; i < length; i++)
            {
                if(!isalpha(argv[1][i]))
                {
                printf("Only alphabetical characters are allowed.\n");
                return 1;
                }
            else
            {
            key = true;
            keyword = argv[1];
            }
        }
    }
    } while(!key);

    //Check length of keyword and convert to array
    keylength = strlen(keyword);
    int keycode[keylength];

    // Letters in the array converted to numbers
    // A = 0 / Z = 25
    for (int i = 0; i < keylength; i++)
    {
        keycode[i] = toupper(keyword[i]) - 65;
    }

    // Read user text and get length
    text = get_string();
    text_length = strlen(text);

    for (int i = 0; i < text_length; i++)
         {
             // If(!letter) = as it is
            if(!isalpha(text[i]))
            {
                 printf("%c", text[i]);
            }
            else
            {
                printf("%c", caesar(text[i], keycode[key_count]));

                // Increase position in keycode array
                if(key_count < keylength - 1 )
                {
                    key_count++;
                }
                else
                {
                    key_count = 0;
                }
            }
         }

    // Exit Code
    printf("\n");
    return 0;
}


char caesar(char token, int key)
{
    if(islower(token))
    {
        return ((((token - 97)+key)%26)+97);
    }
    else
    {
        return ((((token - 65)  +key)%26)+65);
    }
}
