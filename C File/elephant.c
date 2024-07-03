#include <stdio.h>
#include <stdlib.h>

int main()
{
    int coor;
    scanf("%d", &coor);

    if(coor<1)
        return 1;

    int min = coor;

    int ctr=1;
    while(coor>0)
    {
        if(coor<=5)
            break;
        coor-=5;
        ctr++;
    }

    printf("%d", ctr);
}
