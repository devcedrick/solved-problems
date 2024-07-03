#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,n,w;
    scanf("%d %d %d", &k,&n,&w);

    if(k<1 || w>1000 || n<0)
        return 1;

    // k = price of the first banana.
    // n = cash-on-hand
    // w = # of bananas wants to buy

    int total=0;
    for(int i=1; i<=w; i++)
    {
        int price=k*i;
        total+=price;
    }

    if(n>=total)
        total=0;
    else
        total-=n;

    printf("%d", total);
}
