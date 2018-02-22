#include <stdio.h>
#include <stdlib.h>

struct complex{
    float real;
    float imag;
};

/* the function will return  roots by reference in r1, r2
   0- if roots are equal
   1- if roots are real and distinct
   2- if roots are complex.
*/
int findroots(float a, float b, float c, struct complex *r1,struct complex *r2)
{
    float d=b*b-4*a*c;
    if(d==0){
            r1->real=r2->real= -b/(2*a);
            r1->imag=r2->imag=0;
            return 0;
    }
    else if (d >0) {
        
        return 1;
    }
    else {
        
        return 2;
    }
}


int main()
{
    /* Write code to get x,y,z */
    float x,y,z;
    struct complex r1,r2;
    int retval = findroots(x,y,z,&r1,&r2)
    switch(retval)
    {
    case 0:
        /* your code */
    }
}
