#include<stdio.h>

int we(int a){
    if(a<=1){
        return a;
    }
    return we(a-1) + we(a-2);
}
int main(){
	int n;
	printf("Enter a number :");
	scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("%d ",we(i));
    }
}
	
		// while(first<=n){
		// 	printf("%d\n",first);
		// 	next=first+second;
		// 	first=second;
		// 	second=next;
		// }
