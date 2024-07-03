#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *equation;
    equation=(char*)malloc(100*sizeof(char));
    scanf("%s", equation);
    getchar();

    int quantity=strlen(equation)/2+1; // calcultate quantity of numbers within the equation

    int nums[quantity];

    char *token;
    token=strtok(equation, "+");

    int i=0; //index for nums array
    while(token!=NULL)
    {
        nums[i]=atoi(token);
        if(nums[i]<1 || nums[i]>3)
            return 1;
        token=strtok(NULL,"+");
        i++;
    }
    

    int index=0;
    for(int i=0; i<quantity; i++)
    {
        int smallest=nums[i];
        for(int j=i; j<quantity; j++)
        {
            if(nums[j]<=smallest)
            {
                smallest=nums[j];
                index=j;
            }
        }
        int temp=nums[i];
        nums[i]=smallest;
        nums[index]=temp;
    }

    for(int i=0; i<quantity; i++)
    {
        printf("%d",nums[i]);
        if(i!=quantity-1)
            printf("+");
    }

    free(equation);
    free(nums);

    return 0;


    
}