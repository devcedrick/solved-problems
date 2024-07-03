#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    scanf("%d",&year);

    if(year<1000||year>9000)
        return 1;

    int temp=year+1;

    while(1)
    {
        int bYear=temp;
        int seen[10]={0};

        int hasDuplicate=0;

        while(bYear>0)
        {
            int digit=bYear%10;
            if(seen[digit]==1)
            {
                hasDuplicate=1;
                break;
            }
            seen[digit]=1;
            bYear/=10;
            int flag=0;
        }

        if(!hasDuplicate)
            break;
        temp++;
    }

    printf("%d",temp);
}
