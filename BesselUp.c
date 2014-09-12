#include <stdio.h>
#include <math.h>

double up (double x, int n)
{
   double one, two, thr;
   int k;

   one = (sin(x))/x;                    /* start with lowest order */
   two = (sin(x) - x*cos(x))/(x*x);
   for (k = 1 ; k<n ; k+=1)             /* loop for order of function */
   {
      thr = ((2.*k + 1.)/x)*two - one;        /* recurrence relation  */
      one = two;
      two = thr;
   }
   return(thr);

}

int main(void){

    double x;
    int n;

    printf("Enter x and n:");
    scanf("%lf%d", &x, &n);

    printf("x = %f\t j_%d = %f",x,n,up(x,n));
return(0);
}
