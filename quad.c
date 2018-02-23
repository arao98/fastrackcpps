
#include <stdio.h>
#include <stdlib.h>

struct complex
{
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
    if(d==0)
    {
            r1->real=r2->real= -b/(2*a);
            r1->imag=r2->imag=0;
            return 0;
    }
    else if(d>0)
    { r1->real=(-b+sqrt(d))/(2*a);
      r1->imag=0;
      r2->real=(-b-sqrt(d))/(2*a);
      r2->imag=0;   
        return 1;
    }  
    else
    {
        r1->real=r2->real=-b/(2*a);
        r1->imag=r2->imag=sqrt(-d)/(2*a);
        return 2;
    }
   }
void getvalues(float *a,float *b, float *c)
{ 
    printf("enter values of coefficients a,b and c:");
    scanf("%f%f%f",a,b,c);
}


int main()
{
    float x,y,z;
    struct complex r1,r2;
    getvalues(&x,&y,&z);
    int retval = findroots(x,y,z,&r1,&r2);
    switch(retval)
    {
    case 0: printf("roots are real and equal:%fand%f",r1.real,r2.real);
           break;
    case 1: printf("roots are real and distinct:%fand%f",r1.real,r2.real);
           break;
    case 2: printf("roots are imaginagry:%f+%fi and%f-%fi",r1.real,r1.imag,r2.real,r2.imag);
            break;
    }
    return 0;
    
}
