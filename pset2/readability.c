#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Prototype or Function Declaration
int count_letters(string a);
int count_words(string a);
int count_sentences(string a);

int main(void)
{
    // Prompt user for a string with get_string
    string userText = get_string("Text: ");

    // Functions
    int letters = count_letters(userText);
    int words = count_words(userText);
    int sentences = count_sentences(userText);

    // Average letters and sentences
    double L = (double) letters * (double) 100 / (double) words;
    double S = (double) sentences * (double) 100 / (double) words;

    // Coleman-Liau index rounded to the nearest int
    double index = round(0.0588 * L - 0.296 * S - 15.8);

    // Print Grade output:
    // if grade > 16 output Grade16+
    if (index > 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    // if grade < 1 output Before Grade 1
    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else
    {
        printf("Grade %.f\n", index);
    }
}

// Count number of letters
int count_letters(string a)
{
    int x = 0;

    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (islower(a[i]) || isupper(a[i]))
        {
            x++;
        }
    }
    
    return x;
}

// Count number of words
int count_words(string a)
{
    int y = 1;

    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (a[i] == 32)
        {
            y++;
        }
    }
    return y;
}

// Count number of sentences
int count_sentences(string a)
{
    int z = 0;

    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if ((a[i] == 33) || (a[i] == 46) || (a[i] == 63))
        {
            z++;
        }
    }
    return z;
}
