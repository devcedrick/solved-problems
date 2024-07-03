#include <stdio.h>
#include <stdlib.h>

int main()
{
    // h = height of the fence
    // n = number of friends

    int n,h;
    scanf("%d %d",&n,&h);

    int *f=(int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        if(scanf("%d",&f[i])>(2*h))
            return 1;
    }

    int min=0;
    for(int i=0; i<n; i++)
    {
        if(f[i]>h)
            min+=2;
        else
            min+=1;
    }

    printf("%d",min);
}
