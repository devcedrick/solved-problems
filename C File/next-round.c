#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qualified(int arr[], int ctr, int k);

int main()
{
    int n, k; // n = # of participants & k = # of qualified to the next round
    scanf("%d %d", &n, &k);

    getchar();

    if(k>n || k<1 || n<1 || n>50)
    {
        return 1;
    }

    char input[1024];
    int *scoresToInt; // will STORE number inputs
    int ctr=0;
    char *token;

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")]='\0';

    char *inputCopy = strdup(input);
    
    token=strtok(input, " ");

    while(token != NULL)
    {
        ctr++;
        token=strtok(NULL, " ");
    }

    if(ctr != n)
    {
        return 1;
    }

    scoresToInt=(int*)malloc(ctr*sizeof(int));
    token = strtok(inputCopy, " ");
    ctr = 0;

    while(token != NULL)
    {
        scoresToInt[ctr]=atoi(token);
        token=strtok(NULL, " ");
        ctr++;
    }

    for(int i=0; i<ctr; i++)
    {
        int temp=scoresToInt[i];
        if(temp<0 || temp>100)
        {
            return 1;
        }
        if(temp<scoresToInt[i+1] && i!=ctr-1)
        {
            return 1;
        }
    }

    printf("%d", qualified(scoresToInt, ctr, k));
    free(scoresToInt);
}

int qualified(int arr[], int ctr, int k)
{
    int count=0;
    
    for(int i=0; i<ctr; i++)
    {
        if(arr[i]>0 && arr[i]>=arr[k-1])
        {
            count++;
        }
    }
    return count;
}