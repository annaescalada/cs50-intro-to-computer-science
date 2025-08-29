#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int letterPoints[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int getPoints(string text);

int main(void)
{
    string player1Text = get_string("Player 1: ");
    string player2Text = get_string("Player 2: ");

    int player1Points = getPoints(player1Text);
    int player2Points = getPoints(player2Text);

    if (player1Points == player2Points)
    {
        printf("Tie!\n");
    }
    else if (player1Points > player2Points)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }

    return 0;
}

int getPoints(string text)
{
    int points = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        char letter = text[i];

        if (!isalpha(letter))
        {
            continue;
        }

        int index = tolower(letter) - 'a';

        points = points + letterPoints[index];
    }

    return points;
}
