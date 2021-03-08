#include <stdio.h>
int main()
{
int N;
printf("Enter character:\n");
char input,z,a;
int output;
scanf("%c",&input);
printf("Enter N to be shifted:\n");
scanf("%d",&N);
N=N%26;
output=input+N;
if(output<='z')
{
printf("Shifted alphabet is:%c",output);
}
else
{
output=output-26;
printf("Shifted alphabet is:\n%c",output);
}
return 0;
}


