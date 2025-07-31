#include <stdio.h>

void des(int a[])
{
    if()
}

int main()
{
    int a[3] = {1,2,4},b[3] = {1,3,4};
    int c[6] = {0};
    for(int i=0; i<3; i++){
        c[i] = a[i];
        c[i+3] = b[i];
    }
    des(c);
}