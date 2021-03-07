#include <stdio.h>
#include <stdlib.h>
struct polynomial_t
{
    int degree;
    double coefficient[100];
};
typedef struct polynomial_t polynomial;
polynomial divide_polynomial(polynomial P, polynomial Q);
int main()
{
    polynomial P;
    printf("Enter degree of polynomial1\n");
    scanf("%d", &P.degree);
    for (int i = 0; i <= P.degree; i++)
    {
        printf("Enter a%d:\n", i);
        scanf("%lf", &P.coefficient[i]);
    }
    polynomial Q;
    printf("Enter second degree polynomial2\n");
    for (int j = 0; j <= 2; j++)
    {
        printf("Enter a%d:\n", j);
        scanf("%lf", &Q.coefficient[j]);
    }
    polynomial remainder = divide_polynomial(P, Q);
    printf("Remainder: %lf(x)+%lf", remainder.coefficient[1], remainder.coefficient[0]);
    return EXIT_SUCCESS;
}
polynomial divide_polynomial(polynomial P, polynomial Q)
{
    if (P.degree < 2)
    {
        return P;
    }
    polynomial quotient;
    polynomial remainder_one;
    quotient.coefficient[0] = (P.coefficient[P.degree] / Q.coefficient[2]);
    remainder_one.degree = P.degree - 1;
    remainder_one.coefficient[P.degree - 1] = P.coefficient[P.degree - 1] - ((quotient.coefficient[0]) * (Q.coefficient[1]));
    remainder_one.coefficient[P.degree - 2] = P.coefficient[P.degree - 2] - ((quotient.coefficient[0]) * (Q.coefficient[0]));
    for (int i = P.degree - 3; i >= 0; i--)
    {
        remainder_one.coefficient[i] = P.coefficient[i];
    }
    return divide_polynomial(remainder_one, Q);
}