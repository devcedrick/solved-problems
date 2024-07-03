#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long num;
    scanf("%lld", &num);

    if(num<0)
        return 1;

    int ctr=0;
    while(num>0)
    {
        int temp=num%10;
        if(temp==4 || temp==7)
            ctr++;
        num/=10;
    }

    if(ctr==4 || ctr==7)
        printf("YES");
    else
        printf("NO");

    return 0;

}
