#include<stdio.h>
#include<math.h>
int main(){
	int n,m,originalNum,count=0,reminder,sum=0;
	printf("Enter two numbers :");
	scanf("%d %d",&n,&m);
	
		originalNum=n;
		for(int i=n; i<=m; i++){
			int j;
			i=j;
		while(j!=0){
			j/=10;
			count++;
		}
		i=j;
		while(j!=0){
			reminder=j%10;
			sum+=pow(reminder,count);
			j/=10;
		}
		if(sum==i){
			printf("%d is an Armstrong Number",i);
}
}
}
