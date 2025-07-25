#include<stdio.h>
int main(){
    printf("Comsats Aggregate Calculator :\n");
    printf("_______________________________\n");
//MATRIC
    printf("Enter Your Matric Marks\n");
    printf("Total Marks =");
        float totalMarks;
    scanf("%d",&totalMarks);
    printf("Obtain Marks =");
        float obtainMarks;
    scanf("%d",&obtainMarks);
        float percentage = 100*obtainMarks/totalMarks;
    printf("_______________________________\n");
//FSC
    printf("Enter Your FSc Marks\n");
    printf("Total Marks =");
        float totalMarks1;
    scanf("%d",&totalMarks1);
    printf("Obtain Marks =");
        float obtainMarks1;
    scanf("%d",&obtainMarks1);
        float percentage1 = 100*obtainMarks1/totalMarks1;
    printf("_______________________________\n");
//Entry Test
    printf("Enter Your Entry Test Marks\n");
    printf("Total Marks =");
        float totalMarks2;
    scanf("%d",&totalMarks2);
    printf("Obtain Marks =");
        float obtainMarks2;
    scanf("%d",&obtainMarks2);
        float percentage2 = 100*obtainMarks2/totalMarks2;
    printf("_______________________________\n");
//Calculation
        float matric = (percentage*10)/100;
        float fsc = (percentage1*40)/100;
        float entryTest = (percentage2*50)/100;
        float total = matric+fsc+entryTest;
    printf("Your aggregate is =%f\n",total);
    printf("_______________________________\n");
    printf("   _________________________   \n");
    printf("      _________________        \n");
    printf("          _________            \n");
    printf("             ___               \n");
return 0;
}
