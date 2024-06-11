#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Gets height between 1 and 8

    int height;
    do
    {
        height = get_int("Height(between 1-8): ");
    }
    //If not between 1-8 ask again
    while (height < 1 || height > 8);


    //For each row
    for (int row = 0; row < height; row++)
    {
        //Adding spaces
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        //For each column
        for (int column = 0; column <= row; column++)
        {
            //Print a brick
            printf("#");
        }
        //Move to next row
        printf("\n");
    }
}