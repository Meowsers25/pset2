#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("false");
        return 1;
    }

    string key = argv[1];
    int keyLength = strlen(key);

    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            printf("false");
            return 1;
        }
    }

    printf("plaintext: ");
    string ptext = get_string();

    for (int i = 0, a = 0, n = strlen(ptext); i < n; i++)
    {
        int vig = tolower(key[a % keyLength]) - 97;

        if (isupper(ptext[i]))
        {
           ptext[i] = 65 + (ptext[i] - 65 + vig) % 26;

            a++;
        }
        else if (islower(ptext[i]))
        {
            ptext[i] = 97 + (ptext[i] - 97 + vig) % 26;

            a++;
        }
        else
        {
            ptext[i] = ptext[i];
        }
    }
    printf("ciphertext: %s", ptext);
    printf("\n");
    return 0;
}
