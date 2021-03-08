#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int accept_matrix(char *array, int rows, int columns, char string[]);
int main()
{
  char *matrix;
  char *string;

  int rows, columns;
  printf("Enter no of rows:\n");
  scanf("%d", &rows);
  printf("Enter no of columns:\n");
  scanf("%d", &columns);
  matrix = (char *)malloc(rows * columns * sizeof(char));
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      scanf("%c", (matrix+i*columns+j));
    }
  }
  scanf("%s", string);
  accept_matrix(matrix, rows, columns, string);
}

int accept_matrix(char *array, int rows, int columns, char string[])
{
  char *dup;
  int row_start, column_start;
  dup = (char *)malloc(strlen(string) * sizeof(char));
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      if (*(array + (columns * i) + j) == string[0])
      {
        row_start = i;
        column_start = j;
        break;
      }
    }
  }
  for (int k = column_start; k <= column_start + strlen(string);)
  {
    if (*(array + (columns * row_start) + k) == string[k - column_start])
    {
      *(dup + (k - column_start)) = string[k - column_start];
      k++;
    }
    else
    {
      break;
    }
  }
  if(dup==string)
  {
    return 1;
  }
  else
  {
    for (int l = row_start; l <= row_start + strlen(string);)
    {
      if (*(array + (columns * l) + column_start) == string[l-row_start])
      {
        *(dup+(l-row_start))=string[l-row_start];
        l++;
      }
      else
      {
        break;
      }
    }
    if(dup==string)
    {
      return 1;
    }
  }
}
