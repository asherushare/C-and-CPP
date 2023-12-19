#include <stdio.h>

union Sample {
    int m;
    float n;
    char ch[32];
};

int main() {
    union Sample u;

    printf("Size of union u: %zu bytes\n", sizeof(u));

    return 0;
}
