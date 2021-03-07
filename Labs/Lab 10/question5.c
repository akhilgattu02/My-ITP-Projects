#include <stdio.h>
struct blank_t
{
    int row;
    int column;
};
typedef struct blank_t blank_t;
void display_matrix(char matrix[4][4]);
void move_north(char matrix[4][4],blank_t blank);
void move_south(char matrix[4][4],blank_t blank);
void move_west(char matrix[4][4],blank_t blank);
void move_east(char matrix[4][4],blank_t blank);
void swap(char *a, char *b);
int main()
{
    blank_t blank;
    char array[4][4];
    array[0][0] = '1';
    array[0][1] = '2';
    array[0][2] = '3';
    array[0][3] = '4';
    array[1][0] = '5';
    array[1][1] = '6';
    array[1][2] = '7';
    array[1][3] = '8';
    array[2][0] = '9';
    array[2][1] = 'A';
    array[2][2] = '0';
    array[2][3] = 'B';
    array[3][0] = 'D';
    array[3][1] = 'E';
    array[3][2] = 'F';
    array[3][3] = 'C';
    display_matrix(array);
    blank.row=2;
    blank.column=2;
    printf("Enter 'X', or 'N' or 'S' or 'W' or 'E' \n");
    while(1)
   {
        char user_input;
        scanf("%c", &user_input);
        if(user_input=='X')
        {
            break;
        }
        else if(user_input=='N')
        {
            move_north(array, blank);
            blank.row=blank.row-1;
        }
        else if(user_input=='S')
        {
            move_south(array, blank);
            blank.row=blank.row+1;
        }
        else if(user_input=='E')
        {
            move_east(array, blank);
            blank.column=blank.column+1;
        }
        else if(user_input=='W')
        {
            move_west(array, blank);
            blank.column=blank.column-1;
        }
   }
    
    
}
void display_matrix(char matrix[4][4])
{
    for (int k = 0; k < 4; k++)
    {
        for (int l = 0; l < 4; l++)
        {
            printf("%c ", (matrix[k][l]));
        }
        printf("\n");
    }
}

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void move_north(char matrix[4][4], blank_t blank)
{
        swap(&matrix[blank.row][blank.column], &matrix[(blank.row)-1][blank.column]);
        display_matrix(matrix);
}
void move_south(char matrix[4][4], blank_t blank)
{
        swap(&matrix[blank.row][blank.column], &matrix[(blank.row)+1][blank.column]);
        display_matrix(matrix);
}
void move_east(char matrix[4][4], blank_t blank)
{
    swap(&matrix[blank.row][blank.column], &matrix[blank.row][blank.column+1]);
    display_matrix(matrix);
}
void move_west(char matrix[4][4], blank_t blank)
{
    swap(&matrix[blank.row][blank.column], &matrix[blank.row][blank.column-1]);
    display_matrix(matrix);
}