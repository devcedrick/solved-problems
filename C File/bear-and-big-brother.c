#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d", &a,&b);

    if(a>b || a<0 || b>10)
        return 1;

    int ctr=0;
    while(a<=b)
    {
        a*=3;
        b*=2;
        ctr++;
    }

    printf("%d", ctr);
}
