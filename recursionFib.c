// #include<stdio.h>
// int main(){
//     int a =78-68;
//     int fib1=0,fib2=0,fib3=1;
//     for(int i=0; i<a; i++){
//         fib1= fib2;
//         fib2 = fib3;
//         fib3 = fib1 +fib3;
//         printf("%d\n",fib1);
//     }
// }

#include<stdio.h>

int fic(int a){
    if(a<=1){
        return a;
    }
    return fic(a-1)+fic(a-2);
}
int main(){
    int a =10;
    printf("%d\n",fic(a));
}