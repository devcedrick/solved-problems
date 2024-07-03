#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int n;
   scanf("%d",&n);

   if(n<1)
        return 1;

   char *winner=(char*)malloc((n+1)*sizeof(char));
   scanf("%s",winner);
   int length=strlen(winner);

   int anton=0, danik=0;
   for(int i=0; i<length; i++)
   {
       if(winner[i]!='A'&&winner[i]!='D')
            return 1;

       if(winner[i]=='A')
            anton++;
       else
            danik++;
   }

   if(anton>danik)
   {
       printf("Anton");
   }
   else if(anton==danik)
   {
       printf("Friendship");
   }
   else
   {
       printf("Danik");
   }

   return 0;
}
