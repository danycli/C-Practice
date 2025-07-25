//#include<stdio.h>
//int main(){
//	for(int i = 1; i <= 5; i++){
//        for(int space = 1; space <= 5 - i; space++) {
//            printf(" ");
//        }
//        for(int j = 1; j <= i; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    for(int i = 5; i >= 1; i--){
//        for(int space = 1; space <= 5 - i; space++) {
//            printf(" ");
//        }
//        for(int j = 1; j <= i; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//
////		for(int i=5; i>=1; i--){
////			for(int j=1; j<=i; j++){
////				printf("* ");
////			}
////			printf("\n");
////		}
//}
#include <stdio.h>

int main() {
    int n = 5;  // Size parameter (number of rows in upper half)
    int i, j, space;

    // Upper part of diamond
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of diamond
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

