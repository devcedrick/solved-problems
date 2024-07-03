#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d", &n,&k);

    if(n<2 || k<1 || k>50)
        return 1;

    for(int i=0; i<k; i++)
    {
        int temp=n%10;
        if(temp!=0)
            n--;
        else
            n/=10;
    }

    if(n<0)
        return 1;

    printf("%d", n);
}
