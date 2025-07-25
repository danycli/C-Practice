// #include<stdio.h>
// int main(){
//     int a=5,mult =1;
//     for (int i=1; i<=a; i++){
//         mult *= i;
//     }
//     printf("%d",mult);
// }
#include<stdio.h>

int fact(int s){
    if(s == 0){
        return 1;
    }
    return s * fact(s-1);
}
int main(){
    int a =5;
    printf("%d",fact(a));
}