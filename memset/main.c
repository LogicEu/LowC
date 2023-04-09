#include <stddef.h>

void* myMemset(void* buffer, int value, size_t len)
{
    unsigned char* a = buffer;
    while (len--) {
        *a++ = value;
    }
    return buffer;
}

int printf(const char*, ...);

int main(void)
{
    char buf[0xff];
    myMemset(buf, 0, 0xff);
    myMemset(buf, 'A', 20);
    myMemset(buf + 20, 'B', 20);
    printf("%s\n", buf);
    return 0;
}
