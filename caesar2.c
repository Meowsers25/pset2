#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    int i = atoi(argv[1]);
    printf("integer is %i\n", i);

    printf("plaintext: ");
    string ptext = get_string();
    printf("text is: %s\n", ptext);

}