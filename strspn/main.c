#include <stddef.h>

size_t myStrspn(const char* str, const char* charset)
{
    size_t i, j;
    for (i = 0; str[i]; ++i) {
        for (j = 0; charset[j]; ++j) {
            if (str[i] == charset[j]) {
                break;
            }
        }

        if (!charset[j]) {
            break;
        }
    }
    return i;
}

extern int printf(const char*, ...);

int main(void)
{
    static const char* str = "Hello, World!";
    static const char* charset = "HeloWd?";
    size_t index = myStrspn(str, charset);
    printf("Str: '%s'\nCharset: '%s'\nIndex: %zu\n", str, charset, index);
    return 0;
}
