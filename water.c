#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int n=0;
 do{
   printf ("Minutes: ");
    n=get_int();
 }
   while (n<0);
    int b;
     b= n * 12;
      printf("Bottles: %i\n", b);

      }
   