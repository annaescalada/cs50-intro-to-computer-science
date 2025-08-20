#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);
void meow(int n);

int main(void)
{
    int n = get_int("How many times should I meow? ");
    meow(n);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("miau\n");
    }
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Enter a positive integer: ");
    } while (n <= 0);
    return n;
}