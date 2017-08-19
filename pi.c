#include <stdio.h>

long a=10000;
long b;
long c=8400;
long d;
long e;
long f[8401];
long g;

int main(int argc, char *argv[])
{
    for ( ;b-c; ) {
        f[b++]=a/5;
    }
    for ( ;d=0, g=c*2; c-=14, printf("%.4ld", e+d/a), e = d%a) {
       for (b = c; d+=f[b]*a, f[b] = d % --g, d /= g--, --b; d*=b);
    }

    return(0);
}
