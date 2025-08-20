#include <stdio.h>

int main(void)
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}