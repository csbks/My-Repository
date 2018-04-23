#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2)  //if there´s not an argument after ./vigenere
    {
        printf("Error: ./vigenere k\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++) //starting from 0 and having an increasing length of the argument
        {
            if (!isalpha(argv[1][i])) //if that argument is not alphabetical
            {
                printf("Only alphabetic characters. \n"); //prompt user to try again

                return 1;
            }
        }
    }

    string k = argv[1]; //declare argv a string
    int klen = strlen(k); //get string length
    printf("plaintext: ");
    string c = get_string(); //prompt user to give a text to cipher
    printf("ciphertext: ");

//now it´s time for cipher
    for (int i = 0, j = 0, n = strlen(c); i < n; i++) //as for this interval and while i and j increases
    {
        int key = tolower(k[j % klen]) - 'a'; //getting the key for each letter
        if (isalpha(c[i]))//if a character is alphabetical
        {
            if (isupper(c[i])) //if a character is uppercase
            {
                printf("%c", 65 + (((c[i] - 65) + key) % 26));
                j++; //increment key as used

            }

            if (islower(c[i])) //if a character is lower case
            {
                printf("%c", 97 + (((c[i] - 97) + key) % 26));
                j++; //increment key as used
            }
        }

        else
        {
            if (!isalpha(c[i]))//if a character is not alphabetical                }
            {
                printf("%c", c[i]);
            }
        }
    }
    printf("\n");
}