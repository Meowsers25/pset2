#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //get string from user
    //printf("Name: ");
    string s = get_string();

    //iterate through the string
    for (int i = 0; i < strlen(s); i++)
    {
        //if 0'th character is a letter..
        if (i == 0 && isalpha(s[0]))
        {
            //print 0'th character to uppercase
            printf("%c", toupper(s[0]));
        }
        //if i'th character is a space and the next character is a letter..
        else if (s[i] == ' ' && isalpha(s[i + 1]))
        {
            //print character after the space to uppercase
            printf("%c", toupper(s[i + 1]));
        }
    }
    printf("\n");
}