#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stones;
    scanf("%d", &stones);

    char *colors;
    colors=(char*)malloc(stones*sizeof(char));
    scanf("%s",colors);

    int ctr=0;
    for(int i=0; i<=stones-1; i++)
    {
        if(colors[i]!=colors[i+1])
        {
            continue;
        }
        else
        {
            ctr++;
        }
    }

    printf("%d", ctr);
}
