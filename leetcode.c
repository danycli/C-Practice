#include<stdio.h>
int main()
{
    int num [5] = {1,3,4,9,8};
    int target = 17;
    for(int i = 0; i<5; i++){
        for(int j = i+1; j<5; j++){
            if(num[i]+num[j] == target){
                printf("%d  %d",i,j);
                break;
            }
        }
    }
return 0;
}