#include <stdio.h>

int main(void) {
    int a, b;

    printf("input a number : ");
    scanf("%i", &a);

    printf("input a number : ");
    scanf("%i", &b);

    printf("Dividing result is %f\n", (float) a / b);

    return 0;
}