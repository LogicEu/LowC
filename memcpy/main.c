#include <stddef.h>

int printf(const char*, ...);

void* myMemcpy(void* dst, const void* src, size_t len)
{
    char* a = dst;
    const char* b = src;
    while (len) {
        *a++ = *b++;
        --len;
    }
    return dst;
}

int main(void)
{
    static const char str[] = "Hello World!\n";
    char buf[0xff];

    myMemcpy(buf, str, sizeof(str));
    printf("%s", buf);

    return 0;
}
