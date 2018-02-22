/*to find if a number is a palindrome*/
#include<stdio.h>
/*function to enter number*/
void getvalue(int *a)
{
     printf("enter a number:");
     scanf("%d",a);
}
/* to find the reverse number and check for palindrome*/
int checkpal(int org)
{
    int t=org;
    int d,rn=0,l;
    while(t!=0)
    {
        d=t%10;
        rn=rn*10+d;
        t=t/10;
    }
    if(rn==org)
    l=1;
    else
    l=2;
    return l;
}
int main()
{
    int n,flag;
    getvalue(&n);
    flag=checkpal(n);
    if(flag==1)
     printf("%d is a palindrome",n);
    else
     printf("%d is not a palindrome",n);
}
