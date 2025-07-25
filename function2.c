#include<stdio.h>
void table(int s, int b, int c){
    printf("   |   |\n");
    for(int a=1; a<=3; a++){
        printf("_%d_|_%d_|_%d_\n",s,b,c);
        if(a<3){
            printf("   |   |   \n");
        }
        s+=3;
        b+=3;
        c+=3;
    }
    printf("   |   |\n");
}
int main(){
    int a=1,b=2,c=3;
    table(a,b,c);
}