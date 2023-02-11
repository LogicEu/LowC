#include <stddef.h>

size_t myStrlen(const char* str)
{
    size_t i;
    for (i = 0; str[i]; ++i);
    return i;
}

int printf(const char*, ...);

int main()
{
    const char* str = "Hello World!";
    size_t len = myStrlen(str);
    printf("%s == %zu\n", str, len);
    return 0;
}
