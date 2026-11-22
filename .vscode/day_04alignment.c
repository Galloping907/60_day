#include<stdio.h>
#include<stddef.h>
int main()
{
    struct A
    {
        char b;
        int a;
        char c;
    };
    struct B
    {
        char b;
        char c;
        int a;
    };
    struct C
    {
        char c;
        double b;
        short s;
    };
    printf("Size of struct A: %zu\n", sizeof(struct A));
    printf("Size of struct B: %zu\n", sizeof(struct B));
    printf("Size of struct C: %zu\n", sizeof(struct C));
    return 0;
}