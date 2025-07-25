//Write a program to store five numbers in a file and then read them back and print their sum.

// #include<stdio.h>
// int main(){
//     FILE *f;
//     f = fopen("name.txt","w");
//     int a [5] = {3,5,1,7,9},n,sum =0;
//     for(int i=0; i<5; i++){
//         fprintf(f,"%d\n",a[i]);
//     }
//     fclose(f);
//     f = fopen("name.txt","r");
//         while(fscanf(f,"%d",&n)!=EOF){
//             printf("%d ",n);
//             sum +=n;
//         }
//         printf("\n%d",sum);
//         fclose(f);
// }


//Write a program that reads a line of text from the user and saves it to a file, then opens the
//same file and counts the number of vowels in it.
// #include<stdio.h>
// int main(){
//     FILE *f;
//     int count =0;
//     char ch[1000];
//     f = fopen("vowels.txt","w");
//     fgets(ch,sizeof(ch),stdin);
//     fprintf(f,"%s",ch);
//     fclose(f);
//     char c[1000];
//     f = fopen("vowels.txt","r");
//     fgets(c,sizeof(c),f);
//     fclose(f);
//     for(int i=0; ch[i]!='\0'; i++){
//         if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'){
//         count ++;
//     }
//     }
//     printf("The number of vowels in th sentence is %d",count);
// }
//Write a program that stores five strings in a file, then reads the file and displays each string
//in uppercase.
// #include<stdio.h>
// #define MAX_LEN 100
// int main(){
//     FILE *str;
//     char a[5][MAX_LEN];
//     for(int i=0; i<5; i++){
//         fgets(a[i],MAX_LEN,stdin);
//     }
//     str = fopen("string.txt","w");
//     for(int i=0; i<5; i++){
//         fprintf(str,"%s",a[i]);
//     }
//     fclose(str);

//     str = fopen("string.txt","r");
//     char buf[MAX_LEN];
//     while(fgets(buf,MAX_LEN,str)!=NULL){
//         printf("%s\n",buf);
//     }

// }