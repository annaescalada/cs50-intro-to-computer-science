#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string KEY = argv[1];

    if (argc != 2)
    {
        printf("Usage: ./substitution key \n");
        return 1;
    }

    if (strlen(KEY) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0; i < strlen(KEY); i++)
    {
        if (!isalpha(KEY[i]))
        {
            printf("Key must only contain alphabetic characters\n");
            return 1;
        }
        for (int j = i + 1; j < strlen(KEY); j++)
        {
            if (tolower(KEY[i]) == tolower(KEY[j]))
            {
                printf("Key must not contain repeated characters\n");
                return 1;
            }
        }
    }

    string plainText = get_string("plaintext: ");

    int plainTextLength = strlen(plainText);

    char cipherText[100];

    for (int a = 0; a < plainTextLength; a++)
    {
        char plainChar = plainText[a];
        if (isupper(plainChar))
        {
            int index = plainChar - 'A';

            cipherText[a] = toupper(KEY[index]);
        }
        else if (islower(plainChar))
        {
            int index = plainChar - 'a';

            cipherText[a] = tolower(KEY[index]);
        }
        else
        {
            cipherText[a] = plainChar;
        }
    }

    printf("ciphertext: %s\n", cipherText);
    return 0;
}