#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
    printf("The Value of INT_MAX is %i\n", INT_MAX );
    printf("The Value of INT_MIN is %i\n", INT_MIN );
    printf("An int takes %zu bytes\n", sizeof(int));

    printf("The Value of FLT_MAX is %f\n", FLT_MAX );
    printf("The Value of FLT_MIN is %f\n", FLT_MIN );
    printf("An int takes %zu bytes\n", sizeof(float));
    return 0;
}
