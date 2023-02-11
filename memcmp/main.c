#include <stddef.h>

int printf(const char*, ...);

int myMemcmp(const void* p1, const void* p2, size_t len)
{
    const unsigned char* a = p1, *b = p2;
    while (len && *a == *b) {
        ++a;
        ++b;
        --len;
    }
    return (*a - *b) * !!len;
}

int main()
{
    const char* s1 = "Hey";
    const char* s2 = "Hey";
    const char* s3 = "Heu";

    int a = myMemcmp(s1, s2, 3);
    int b = myMemcmp(s2, s3, 3);

    printf("%s == %s ? %d\n%s == %s ? %d\n", s1, s2, a, s2, s3, b);

    return 0;
}
