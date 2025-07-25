#include<stdio.h>
int main (){
    int p,isprime=1;
    scanf("%d",&p);
        
//        if(p==2){
//                isprime=1;
//            }
            if(p<2){
            isprime=0;
        }else{
        	for(int i=2; i<p; i++){
            isprime=1;
            if(p%i==0){
                isprime=0;
                break;
            }
        }
		}
        if(isprime==1){
            printf("%d is a prime number",p);
        }else{
             printf("%d is not a prime number",p);
        }
}