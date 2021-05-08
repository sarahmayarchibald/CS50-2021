#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Prototype or Function Declaration
string count_letters(string a);

int main(void)
{
    // Prompt user for a string with get_string
    string userText = get_string("Text: ");
    // debug printf
    printf("Text: %s\n", userText);

    string letters = count_letters(userText);

    // Print Grade output
}

// Count number of letter
string count_letters(string a) 
{
    // Use function declared
    int x = 0;

    for (int i = 0, n = strlen(a); i < n; i++)
        {
            if ((a[i] != '.' && a[i] != '!' && a[i] != '?')) 
            {
                x++;
            }
            
        }
        printf("%i letter(s)\n", x);
        return a;
}



// Count number of words

// Count number of sentences


// Print output: Grade X(level computed with formula)

// If grade > 16 output Grade16+

// If grade < 1 output Before Grade 1
