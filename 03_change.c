#include <stdio.h>

/* function prototype
int sum(int, int);
 function definition
int sum(int x, int y)
{
    //printf("The value of the sum is %d\n ", x + y);
    return x + y;
}*/
int change (int a);
int change (int a) {
    a = 77; // misnomer
    return 0;
}
int main()
{
   int b = 22;
   change (b); // the value of b remains same
    printf ("b is %d\n ", b);
    return 0;
}