#include <stdio.h>
size_t my_strlen(const char *str)
{
    size_t length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
int main()
{
    const char *teststring = "Hello, World!";
    size_t length = my_strlen(teststring);
    printf("Length of the string \"%s\" is: %zu\n", teststring, length);
    return 0;  
}