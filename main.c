#include <stdio.h>
#include <stdlib.h>

int main()  {
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x); //Note the change of %d to %f
    y = x*2 + 5 + 6 + 2 + 1;
    printf("y: %f\n", y);
    return 0;
}
