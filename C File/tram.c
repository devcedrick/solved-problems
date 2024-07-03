#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; // # of stops
    scanf("%d",&n);

    if(n<2||n>1000)
        return 1;

    int exit,enter;

    int currPassenger=0;
    int min=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &exit,&enter);

        if((i==0 && exit!=0) || (i==n-1 && enter!=0))
            return 1;

        if(exit > currPassenger)
            return 1;

        currPassenger+=enter;
        currPassenger-=exit;

        if(currPassenger>min)
            min=currPassenger;

    }



    printf("%d",min);
}
