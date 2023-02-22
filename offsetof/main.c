typedef unsigned long size_t;

#define offsetof(s, m) ((size_t)&(((s*)0)->m))

int printf(const char*, ...);

struct S {
    char* a;
    int b;
    size_t c;
};

int main(void)
{
    printf("a -> %zu\n", offsetof(struct S, a));
    printf("b -> %zu\n", offsetof(struct S, b));
    printf("c -> %zu\n", offsetof(struct S, c));

    return 0;
}
