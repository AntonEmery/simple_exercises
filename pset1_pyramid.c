//Creates a pyramid of the specified height

#include <stdio.h>
#include <cs50.h>

int main(void) 
{   
   printf("Enter pyramid height\n");
   int height = GetInt();
  
   
   while(height <= 0 || height > 23) 
   {
    printf("Enter correct input\n");
     height = GetInt();
   }
    printf("%d\n", height);
        
   int maxColumns = height + 1;
   int maxNumSpaces = maxColumns - 2;
   int hashes = maxColumns - maxNumSpaces;
   
   for(int x = 1; x <= height; x++) 
   {   
       for(int i = 0; i < maxNumSpaces; i++)
       {
        printf(" ");
       }
       for(int z = 1; z <= hashes; z++)
       {
        printf("#");
       }   
       printf("\n");
       maxNumSpaces--;
       hashes++;
   }
    
} //int main void
