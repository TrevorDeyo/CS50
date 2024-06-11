#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
//initiate a long variable for the credit card number and get number from user.
    long cnum = get_long("Number: ");

//gets the Nth number starting from the rear
    int n1 = cnum % 10;
    int n2 = cnum / 10 % 10;
    int n3 = cnum / 100 % 10;
    int n4 = cnum / 1000 % 10;
    int n5 = cnum / 10000 % 10;
    int n6 = cnum / 100000 % 10;
    int n7 = cnum / 1000000 % 10;
    int n8 = cnum / 10000000 % 10;
    int n9 = cnum / 100000000 % 10;
    int n10 = cnum / 1000000000 % 10;
    int n11 = cnum / 10000000000 % 10;
    int n12 = cnum / 100000000000 % 10;
    int n13 = cnum / 1000000000000 % 10;
    int n14 = cnum / 10000000000000 % 10;
    int n15 = cnum / 100000000000000 % 10;
    int n16 = cnum / 1000000000000000 % 10;

    //printf("%li %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i\n", cnum, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);

//multiplying every other digit starting with the second to last
    int n2x2 = n2 * 2;
    int n4x2 = n4 * 2;
    int n6x2 = n6 * 2;
    int n8x2 = n8 * 2;
    int n10x2 = n10 * 2;
    int n12x2 = n12 * 2;
    int n14x2 = n14 * 2;
    int n16x2 = n16 * 2;

    //printf("%i %i %i %i %i %i %i %i\n", n2x2, n4x2, n6x2, n8x2, n10x2, n12x2, n14x2, n16x2);

//breaking the numbers up
    int n2x2_1 = n2x2 / 10;
    int n2x2_2 = n2x2 % 10;
    int n4x2_1 = n4x2 / 10;
    int n4x2_2 = n4x2 % 10;
    int n6x2_1 = n6x2 / 10;
    int n6x2_2 = n6x2 % 10;
    int n8x2_1 = n8x2 / 10;
    int n8x2_2 = n8x2 % 10;
    int n10x2_1 = n10x2 / 10;
    int n10x2_2 = n10x2 % 10;
    int n12x2_1 = n12x2 / 10;
    int n12x2_2 = n12x2 % 10;
    int n14x2_1 = n14x2 / 10;
    int n14x2_2 = n14x2 % 10;
    int n16x2_1 = n16x2 / 10;
    int n16x2_2 = n16x2 % 10;

//the end of "Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together."
    int sum1 = n2x2_1 + n2x2_2 + n4x2_1 + n4x2_2 + n6x2_1 + n6x2_2 + n8x2_1 + n8x2_2 + n10x2_1 + n10x2_2 + n12x2_1 + n12x2_2 + n14x2_1 +
               n14x2_2 + n16x2_1 + n16x2_2;
    //printf("%i\n", sum1);

//addition of the rest of the digits
    int sum2 = n1 + n3 + n5 + n7 + n9 + n11 + n13 + n15;
    //printf("%i %i %i %i %i %i %i %i\n", n1, n3, n5, n7, n9, n11, n13, n15);
    //printf("%i\n", sum2);

//adding all the numbers
    int sum3 = sum1 + sum2;
    //printf("%i\n", sum3);

//checking if it ends with a zero AKA CHECKSUM
    int validator = sum3 % 10;
    //printf("%i\n", validator);

//checks if card is valid and the company
    if (validator != 0)
    {
        printf("INVALID\n");
    }
    else if ((n15 == 3 && n14 == 4) || (n15 == 3 && n14 == 7))
    {
        printf("AMEX\n");
    }
    else if (n16 == 5 && n15 > 0 && n15 < 6)
    {
        printf("MASTERCARD\n");
    }
    else if (n16 == 4 || n13 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}