#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Pick a Number Between 1 and 26: ");
    int num = get_int();

    if (num < 1 || num > 26)
    {
        printf("Repick\n");
    }



    printf("Please write your sentence: ");
    string sen = get_string();

    for (int i = 0, n = strlen(sen); i < n; i++)
    {
        if (sen[i] == ' ')
        {
            printf("%c", ' ');
        }
        else if (sen[i] != ' ')
        {
            sen[i] = sen[i] + num;
            printf("%c", sen[i]);
        }
        //printf("\n");
    }
}