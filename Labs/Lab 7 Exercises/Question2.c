#include <stdio.h>
#include <stdlib.h>
unsigned int stringLength(char text[]);
void multiCharPrint(char ch, unsigned int count);
void multiCharString(char array[],unsigned int count);
void subStringPrint(char array[],unsigned int i,unsigned int j);
int main()
{

    char string[20]="Applesauce";
    printf("The given string is %s\n",string);
    printf("Length is %u\n",stringLength(string));
    multiCharPrint('*',10);
    printf("\n");
    printf("Enter the number of times the string must be repeated:\n");
    unsigned count,i,j;
    scanf("%u",&count);
    multiCharString(string,count);
    printf("Enter i:\n");
    scanf("%u",&i);
    printf("Enter j:\n");
    scanf("%u",&j);
    if(i>j)
    {
        printf("Invalid input!i should be <=j");       
    }
    else
    {
        printf("Substring of (Applesauce) between i and j is:\n");
        subStringPrint(string,i,j);
    }
    return EXIT_SUCCESS;

}


unsigned int stringLength(char text[])
{
    unsigned int i;
    i=0;
    while(text[i]!='\0')
    {
        i=i+1;
    }
    return i;
}
void multiCharPrint(char ch, unsigned int count)
{
    unsigned int i=1;
    while(i<=count)
    {
        printf("%c",ch);
        i++;
    }
}
void multiCharString(char array[], unsigned int count)
{
    unsigned int i=1;
    while(i<=count)
    {
        printf("%s\n",array);
        i++;
    }
}
void subStringPrint(char array[],unsigned int i,unsigned int j)
{
    
    for(int k=i;k<=j;k++)
    {
        printf("%c",array[k]);
    }
}
