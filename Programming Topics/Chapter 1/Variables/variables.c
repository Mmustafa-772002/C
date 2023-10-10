#include <stdio.h>

int main() {
    int a = 20;
    float b = 3.2;
    char c = 'a';
    char d[] = "this is a string ";
    double e = 3.1415;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));
    printf("Size of string: %zu bytes\n", sizeof(d));
    printf("Size of double: %zu bytes\n", sizeof(e));

    printf("The value of int is: %d\n", a);
    printf("The value of float is: %f\n", b);
    printf("The value of char is: %c\n", c);
    printf("The value of string is: %s\n", d);
    printf("The value of double is: %lf\n", e);

    return 0;
}
