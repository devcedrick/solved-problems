#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s=(char*)malloc(101*sizeof(char)); //for berlandish
    char *t=(char*)malloc(101*sizeof(char)); // for birlandish translation

    scanf("%s",s);
    scanf("%s",t);

    int sLen=strlen(s);
    int tLen=sLen;

    if(sLen!=tLen)
        return 1;

    for(int i=0; i<sLen; i++)
    {
        if(s[i]!=t[tLen-1])
        {
            printf("NO");
            return 0;
        }
        else
        {
            tLen--;
        }
    }

    printf("YES");
    return 0;
}
