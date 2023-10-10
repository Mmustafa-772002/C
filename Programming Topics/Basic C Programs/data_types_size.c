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

    return 0;
}
