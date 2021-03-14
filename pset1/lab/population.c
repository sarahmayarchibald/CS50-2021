#include <cs50.h>
#include <stdio.h>
#include <math.h>

// Prototype
int get_start_int(void);

int main(void)
{
    int n = 0;
    
    //Prompt for start size
    int start = get_start_int();
    
    //Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    
    //Calculate number of years until we reach threshold
    for (int i = start; i < end; i++)
    {
        while (start < end) 
        {
            //Added population for each year:
            start = start + (start / 3) - (start / 4);
            // Number of years added:
            n = n + 1;
        }
    }
    
    //Print number of years
    printf("Years: %i\n", n);
}

int get_start_int(void)
{
    int x;
    do
    {
        x = get_int("Start size: ");
    }
    while (x < 9);
    return x;
}
