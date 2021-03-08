#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
struct student_record_t
{
    char Fname[100];
    char Lname[100];
    int BloodName;
    int Branch;
    int year;
    int height;
    int weight;
};

int main()
{
    FILE *ptr;
    ptr = fopen("student_record.txt", "r");
    char *(bloodtype[8]) = {"APOSITIVE", "ANEGATIVE", "BPOSITIVE", "BNEGATIVE", "ABPOSITIVE", "ABNEGATIVE", "OPOSITIVE", "ONEGATIVE"};
    char *(Branch[11]) = {"AI", "BM", "BT", "CHE", "CHY", "CSE", "EE", "ES", "MA", "ME", "MSME"};
    struct student_record_t student_record[1000];

    int i = 0;

    while (fscanf(ptr, "%s %s %d %d %d %d %d", student_record[i].Fname, student_record[i].Lname, &student_record[i].BloodName, &student_record[i].Branch, &student_record[i].year, &student_record[i].height, &student_record[i].weight) != EOF)
    {

        printf("First Name: %s last Name: %s ", student_record[i].Fname, student_record[i].Lname);
        printf("BloodName: %s ", bloodtype[student_record[i].BloodName]);
        printf("Branch: %s ", Branch[student_record[i].Branch]);
        printf("Year: %d Height: %d, Weight: %d \n", student_record[i].year, student_record[i].height, student_record[i].weight);
        i = i + 1;
    }

    int max_weights[44] = {0};
    int min_weights[44];
    for (int b = 0; b < 44; b++)
    {
        min_weights[b] = INT_MAX;
    }

    for (int k = 0; k < 1000; k++)
    {
        if (student_record[k].weight > max_weights[(((student_record[k].year) - 1) * (11)) + (student_record[k].Branch)])
        {
            max_weights[(((student_record[k].year) - 1) * (11)) + (student_record[k].Branch)] = student_record[k].weight;
        }
    }
    for (int a = 0; a < 1000; a++)
    {

        if (student_record[a].weight < min_weights[(((student_record[a].year) - 1) * (11)) + (student_record[a].Branch)])
        {
            min_weights[(((student_record[a].year) - 1) * (11)) + (student_record[a].Branch)] = student_record[a].weight;
        }
    }

    for (int year = 1; year < 5; year++)
    {
        for (int branch = 0; branch < 11; branch++)
        {
            printf("Max weight of %s branch in %d year is: %d \n", Branch[branch], year, max_weights[((year - 1) * (11)) + (branch)]);
            printf("Min weight of %s branch is %d year is: %d \n", Branch[branch], year, min_weights[((year - 1) * (11)) + (branch)]);
        }
    }

    fclose(ptr);
    return EXIT_SUCCESS;
}