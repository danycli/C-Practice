#include<stdio.h>
int main(){
    int a[3] = {1,3,4}, b[3] = {1,2,4};
    int c[6] = {0}, j =3;
    for(int i = 0; i<3; i++){
        c[i] = a [i];
        c[j] = b[i];
        j++;
    }
    for(int i = 0; i<6-1; i++){
        for(int j=i+1; j<6; j++){
            
            if(c[i]>c[j]){
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(int i=0; i<6; i++){
        printf("%d",c[i]);
    }
}