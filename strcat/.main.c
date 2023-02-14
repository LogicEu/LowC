char* myStrcat(char* dst, const char* src)
{
    char* a = dst;
    while (*a) {
        ++a;
    }

    while (*src) {
        *a++ = *src++;
    }

    *a = 0;
    return dst;
}

int printf(const char*, ...);

int main(void)
{
    char buf[0xff] = "Hello";
    myStrcat(buf, " World!");
    printf("%s\n", buf);
    return 0;
}
