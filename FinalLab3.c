#include<stdio.h>
#include<string.h>

int product(int n) {
    if(n == 1) return 1;
    return n * product(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", product(n));
    return 0;
}