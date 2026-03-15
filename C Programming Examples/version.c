#include <stdio.h>

int main() {
#ifdef __STDC_VERSION__
    long v = __STDC_VERSION__;
    if (v == 199409L) printf("C95\n");
    else if (v == 199901L) printf("C99\n");
    else if (v == 201112L) printf("C11\n");
    else if (v == 201710L) printf("C17\n");
    else if (v == 202311L) printf("C23\n");
    else printf("Version value: %ld\n", v);
#else
    printf("C89/C90 (or non-standard compiler)\n");
#endif
    return 0;
}