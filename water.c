#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get user input
    printf("How many minutes do you spend in the shower ? \n");
    int minutes = get_int();
    
    //Be polite
    printf("%i minutes, that's it ?\n", minutes);
    printf("Well, did you know that one minute in a shower means about 12 bottels of water ? \n");
    
    // Create random variable (Not really random but hey, what do I know) in the middle of the code
    int bottles = 12;
    
    // Provide user information for future consideration
    printf("That means, you spend %i bottles per shower.\n", minutes * bottles);
    
    //Be a good citizen
    return 0;
}
