#include <stdio.h>

#define BASE 100000000  // 10^8
#define MAX_BLOCKS 9     // enough for 40!

// multiply big-int a (little-endian base 1e8) by k
static void prada(unsigned int a[], unsigned int *len, unsigned int k) {
    unsigned long long carry = 0;
    for (unsigned int i = 0; i < *len; ++i) {
        unsigned long long prod = (unsigned long long)a[i] * k + carry;
        a[i]  = (unsigned int)(prod % BASE);
        carry = prod / BASE;
    }
    while (carry) {
        if (*len >= MAX_BLOCKS) break; // guard
        a[(*len)++] = (unsigned int)(carry % BASE);
        carry /= BASE;
    }
}

// Recursively do: multiply by f2, then bump f2, stop after n steps
static void foo(unsigned int n, unsigned int f1[], unsigned int *len, unsigned int f2) {
    if (n == 0) return;
    prada(f1, len, f2);
    foo(n - 1, f1, len, f2 + 1);
}

static void print_blocks(const unsigned int a[], unsigned int len) {
    printf("%u", a[len - 1]);
    for (int i = (int)len - 2; i >= 0; --i) printf(" %08u", a[i]);
    putchar('\n');
}

int main(void) {
    unsigned int n;
    while (scanf("%u", &n) == 1) {
        unsigned int res[MAX_BLOCKS] = {0};
        unsigned int len = 1;
        res[0] = 1;                // start from 1
        foo(n, res, &len, 1);      // do n steps: ×1, ×2, ..., ×n
        print_blocks(res, len);
    }
    return 0;
}

