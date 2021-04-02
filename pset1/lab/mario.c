#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{   
    // Prompt user for positive integer
    int x = get_positive_int();
    
    // Construct pyramid with for loop
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            // Loop smaller than integer prompted
            if (i + j < x + 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        // Go to next line
        printf("\n");
        
    }
}

// Create method
int get_positive_int(void)
{
    // Declare integer
    int n;
    // Do while loop to request an integer between 1 and 8
    do
    {
        n = get_int("Positive Integer: ");
    }
    while (n < 1 || n > 8);
    return n;
}
