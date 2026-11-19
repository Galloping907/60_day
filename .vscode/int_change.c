#include <stdio.h>
void change(int **a,int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10;
    int y = 20;
    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("Before change: ptr1 points to %d, ptr2 points to %d\n", *ptr1, *ptr2);
    change(&ptr1, &ptr2);
    printf("After change: ptr1 points to %d, ptr2 points to %d\n", *ptr1, *ptr2);

    return 0;

}