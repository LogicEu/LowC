int printf(const char*, ...);

int myAtoi(const char* str)
{
    int n = 0, sign = 1;
    while (*str == ' ') {
        ++str;
    }

    if (*str == '+') {
        ++str;
    } else if (*str == '-') {
        ++str;
        sign = -1;
    }

    while (*str >= '0' && *str <= '9') {
        n = n * 10 + *str++ - '0';
    }
    return n * sign;
}

int main()
{
    const char* s1 = "-87324", *s2 = "874328";
    int a = myAtoi(s1);
    int b = myAtoi(s2);
    printf("%s == %d\n%s == %d\n", s1, a, s2, b); 
    return 0;
}
