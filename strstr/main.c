#include <stddef.h>

char* myStrstr(const char* big, const char* small)
{
    while (*big) {
        const char* a = big, *b = small;
        while (*a == *b) {
            if (!*++b) {
                return (char*)(ptrdiff_t)big;
            }
            ++a;
        }
        ++big;
    }
    return NULL;
}

int printf(const char*, ...);

int main(void)
{
    const char* s1 = "Hello World!";
    const char* s2 = "World";
    const char* s3 = "Hey";

    char* a = myStrstr(s1, s2);
    char* b = myStrstr(s1, s3);

    printf("%s\n", s1);
    printf("%s -> %s\n", s2, a ? "true" : "false");
    printf("%s -> %s\n", s3, b ? "true" : "false");

    return 0;
}
