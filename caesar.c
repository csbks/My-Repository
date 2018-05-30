#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main (int argc, string argv[])
{
    if (argc !=2) //if there´s not a valid argument after ./caesar
    {
        printf ("Error: ./caesar k\n");
        return 1;
    }
    int k= (atoi (argv[1]) );  //string from the argument is now an int.
    printf ("plaintext: ");
    string c = get_string();
    printf ("ciphertext: ");

//now it´s time for decipher
  for (int i = 0, n = strlen(c); i < n; i++) //as for this interval and while i increases
        {
            if (isalpha (c[i])) //if a character is alphabetical
            {
                if (isupper (c[i])) //if a character is uppercase
                {
                 printf ("%c", (((c[i]-65)+k) % 26) +65);
                }

                if (islower (c[i])) //if a character is lower case
                {
                    printf ("%c", (((c[i]-97)+k) % 26) +97);
                }
            }

           else
            {
                if (!isalpha (c[i])) //if a character is not alphabetical                }
                {
                    printf("%c", c[i]);
                }
            }
        }
        printf ("\n");
}
//side note: I tried to make it more stylish using  toupper/tolower, but couldnt make it wor :(