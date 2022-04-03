
#include <stdio.h>
int main()
{
    long int t;
    scanf("%ld",&t);
    long int rem=3;
    while (t>rem) 
    {
        t=t-rem;
        rem=rem*2;
    }
    printf("%ld",(rem-t+1));
    return 0;
    
}
