#include <stddef.h>

void* myMemmove(void* dst, const void* src, size_t len)
{
    unsigned char* a = dst;
    const unsigned char* b = src;
    if (a < b) {
        while (len--) {
            *a++ = *b++;
        }
    } else {
        while (len--) {
            a[len] = b[len];
        }
    }

    return dst;
}

int printf(const char*, ...);

int main(void)
{
    char buf[0xff] = "Hello, World!";
    myMemmove(buf, buf + 7, sizeof(buf) - 7);
    printf("%s\n", buf);
    return 0;
}
