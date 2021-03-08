#include <stdio.h> 
#include <string.h>
void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 


void permute(char *array,  int n) 
{ 
  
  
    if(n==2)

   {
      printf("%s\n",array);
      swap(array,array+1);
      printf("%s\n",array);
   }
      
    else

   {
          

            for(int i=0; i<n; i++)
           {
               
               swap(array,array+i+1);
               permute(array,n-1);
               swap(array,array+i+1);
              

           }
            
       }
          
   }

      

  
int main() 
{ 
    char str[] = "ABCDEF";
    int n; 
    scanf("%d",&n); 
    permute(str,n); 
    return 0; 
} 