#ifndef NDEBUG
int printf(const char*, ...);
void abort(void);
#define myAssert(expr) do {\
    if (!(expr)) {\
        printf(\
            "%s, file %s, function %s, line %d\n",\
            #expr,\
            __FILE__,\
            __func__,\
            __LINE__\
        );\
        abort();\
    }\
} while (0)
#else
#define myAssert(expr) ((void)0)
#endif

int main(void)
{
    myAssert(1 + 1 != 2);
    myAssert(1 + 1 == 2);
    return 0;
}
