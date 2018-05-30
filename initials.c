#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string s=get_string();
    if (s != NULL) //only accepts strings
    printf ("%c", toupper (s[0])); //capitalize first letter

        for (int i = 0, n = strlen(s); i < n; i++) //as for this interval and while i increases
        {
            if (s[i] == ' ')
            {
                printf ("%c", toupper (s[i+1]) );
            }

        }
    printf ("\n");
}