#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

unsigned long long gcd(unsigned long long x, unsigned long long y) {
    unsigned long long q;
    
}

int mai() {
    unsigned long long x = 0, y = 0, g;
    int res;

    res = scanf("%llu %llu", &x, &y);
    assert(res == 2);
    g = gcd(x, y);


    return 0;
}