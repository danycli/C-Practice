#include<stdio.h>
#include<string.h>

int nthTerm(int n) {
    if(n == 1) return 1;
    return 2 * nthTerm(n - 1) + 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", nthTerm(n));
    return 0;
}