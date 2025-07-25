#include<stdio.h>
int ff(int a){
	if(a==2){
		return 1;
	}
	if(a<2){
		return 0;
	}else{
		if(a%2==0){
			return 0;
		}else{
			for(int i=2; i<=a; i++){
				if(i%(a*a)==0){
					return 0;
				}else{
					return 1;
				}
			}
		}
	}
}
int main(){
	int a;
	scanf("%d",&a);
	ff(a);
}
