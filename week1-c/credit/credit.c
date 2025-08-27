#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cardNumber = get_long("Number: ");
    long remaining = cardNumber;

    int cardLength = 0;

    int sumCheck = 0;

    int startDigits = 0;
    do
    {
        cardLength++;

        int digit = remaining % 10;

        if (cardLength % 2 == 0) {
            sumCheck = sumCheck + digit * 2 / 10 + digit * 2 % 10;
        } else {
            sumCheck = sumCheck + digit;
        }

        if (remaining > 10 && remaining < 100)
        {
            startDigits = remaining;
        }

        remaining /= 10;
    }
    while (remaining > 0);

    if (sumCheck % 10 != 0 || cardLength < 13 || cardLength > 16)
    {
        printf("INVALID\n");
    } else if (cardLength == 15 && (startDigits == 34 || startDigits == 37))
    {
        printf("AMEX\n");
    } else if (cardLength == 16 && (startDigits >= 51 && startDigits <= 55))
    {
        printf("MASTERCARD\n");
    } else if ((cardLength == 13 || cardLength == 16) && startDigits / 10 == 4)
    {
        printf("VISA\n");
    } else
    {
        printf("INVALID\n");
    }
}
