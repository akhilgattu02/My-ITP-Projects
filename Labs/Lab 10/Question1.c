#include <stdio.h>
void dup_string_remover(char string[]);
int main()
{
  char string[20];
  printf("Enter the string :");
  scanf("%s", string);
   dup_string_remover(string);
}
void dup_string_remover(char string[20])
{
  int i = 0;
  int j = 0;
  char temp_c = '*';
  for (i = 0; string[i] != '\0'; i++)
  {
    if ((string[i] != temp_c))
    {
      for (j = i + 1; string[j] != '\0'; j++)
      {
        if (string[j] == string[i])
        {
          string[j] = temp_c;
        }
      }
    }
  }
  for (i = 0; string[i] != '\0'; i++)
  {
    if (string[i] != temp_c)
    {
      printf("%c", string[i]);
    }
  }
}