#include <cs50.h>
#include <stdio.h>
#include <math.h>

/* m= money 
c=cents
q=quarters
n= nickels
l=leftover
t=total change*/

int main(void)
{
   float m=0;
   int c=0;
   int q=0;
   int  d=0;
   int n=0;
   int l=0;
   int t=0;
 do {
     printf ("Money: ");
     m=get_float ();
      }
      while (m<=0);
c= (int)round (m*100);

q= c/25;
l= c%25;

d= l/10;
l=l%10;

n= l/5;
l=l%5;

t= q+d+n+l;

printf ("%i\n", t);

}
