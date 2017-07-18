#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n=0;
    do
    {
        printf ("Height: ");
       n = get_int();
    }
    while (n>23||n<0);
 
 for (int i=0; i<n; i++)
 {
     for (int x=0; x<n-i-1; x++)
     {
         printf ("%s", " ");
     }
     for (int y=0; y<i+2; y++)
     {
         printf ("#");
     }
     printf ("\n");
 }
}