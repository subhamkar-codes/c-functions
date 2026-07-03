#include <stdio.h>

// function prototype
int sum(int, int);
// function definition
int sum(int x, int y)
{
    printf("The value of the sum is %d\n ", x + y);
    return x + y;
}
int main()
{
    int a = 2;
    int b = 3;
    sum(a, b); // funcion call
    int a1 = 25;
    int b1 = 32;
    sum(a1, b1);
    int a2 = 29;
    int b2 = 33;
    sum(a2, b2);
    int a3 = 28;
    int b3 = 323;
    sum(a3, b3);
    return 0;
}