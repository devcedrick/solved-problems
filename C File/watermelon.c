#include <stdio.h>

const char* canBeDevided(int x);

int main()
{
    int w;
    scanf("%d", &w); //input for weight

    if(w<1 || w>100)
    {
        return 1;
    }

    printf("%s",canBeDevided(w));

    return 0;

}

const char* canBeDevided(int x)
{
    if(x%2==0 && x>2)
        return "YES";
    else
        return "NO";
}