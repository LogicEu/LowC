#include <stddef.h>

char* myStrsep(char** strptr, const char* delim)
{
    char* str = *strptr;
    if (str) {
        size_t i, j;
        for (i = 0; str[i]; ++i) {
            for (j = 0; delim[j]; ++j) {
                if (str[i] == delim[j]) {
                    str[i] = 0;
                    *strptr = str + i + 1;
                    return str;
                }
            }
        }
    }
    return NULL;
}

extern int printf(const char*, ...);

int main(void)
{
    char buf[0xff] = "Hey there, how are you? - Im feeling ok...\n";
    char* str = buf, *tok;
    while ((tok = myStrsep(&str, " ,.?\n-"))) {
        if (*tok) {
            printf("'%s'\n", tok);
        }
    }
    return 0;
}
