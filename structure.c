//STRUCTURE PRACTICE
// #include<stdio.h>
// struct stu{
//     int id;
//     char name [50];
//     float marks;
// };
// int main(){
//     struct stu s1;
//     printf("Enter your ID :");
//     scanf("%d",&s1.id);
//     printf("Enter your marks :");
//     scanf("%f",&s1.marks);
//     printf("Enter your Name :");
//     scanf("%s",s1.name);
//     printf("\n\nName =%s\n",s1.name);
//     printf("ID =%d\n",s1.id);
//     printf("Marks =%f\n",s1.marks);
// }

//Create a function that takes a structure containing student information (name, roll number,
//marks) and displays the data.
// #include<stdio.h>
// struct student{
//     char name [50];
//     int rNo; 
//     float marks;
// };
// void info(struct student *s){
//     printf("Enter name of the student :");
//     scanf("%s",s->name);
//     printf("Enter Roll no :");
//     scanf("%d",&s->rNo);
//     printf("Enter marks :");
//     scanf("%f",&s->marks);

//     printf("\n\n-----Student Ifo------\n");
//     printf("Name = %s\n",s->name);
//     printf("Roll no = %d\n",s->rNo);
//     printf("Marks = %f\n",s->marks);
// }
// int main(){
//     struct student s1;
//     info(&s1);
// }
//Define a structure for an employee with fields for name, salary, and ID. Take input from the
//user for three employees and print their details.
// #include<stdio.h>
// struct emp{
//     char name[50];
//     int salary;
//     int id;
// };
// int main(){
//     struct emp e[3];
//     for(int i=0; i<3; i++){
//         printf("\n\n-----Enter the details for Emplyee %d-----\n\n",i+1);
//         printf("Enter Name :");
//         scanf("%s",e[i].name);
//         printf("Enter salary :");
//         scanf("%d",&e[i].salary);
//         printf("Enter ID :");
//         scanf("%d",&e[i].id);
//     }
//     for(int j=0; j<3; j++){
//         printf("\n\n-----Enter the details for Emplyee %d-----\n\n",j+1);
//         printf("Name =%s\n",e[j].name);
//         printf("Salary =%d\n",e[j].salary);
//         printf("ID =%d\n",e[j].id);
//     }
// }

//Create a structure to store book information (title, author, price). Write a program that takes
//input for three books and displays their details.
// #include<stdio.h>
// struct book{
//     char title[100];
//     char author[100];
//     int price;
// };
// int main(){
//     struct book b[3];
//     for(int i=0; i<3; i++){
//         printf("\n\n----Enter details for %d book----\n\n",i+1);
//         printf("Enter book name :");
//         scanf("%s",b[i].title);
//         printf("Enter book author :");
//         scanf("%s",b[i].author);
//         printf("Enter book price :");
//         scanf("%d",&b[i].price);
//     }
//     for(int i=0; i<3; i++){
//         printf("\n\n---Details of book %d---\n\n",i+1);
//         printf("\nName =%s\n",b[i].title);
//         printf("Author =%s\n",b[i].author);
//         printf("Price =%d\n",b[i].price);
//     }
// }

// You are asked to create a structure named “Vehicle_Showroom”. The data to be saved against each
// vehicle will be: (i) Owner Name (e.g. Your name), (ii) Registration No. (e.g. XYZ-123), (iii) Company (e.g.
// Toyota), (iv) Model (e.g. Corolla/GLI), (v) Make Year (e.g. 2017), (vi) Engine Capacity (e.g. 1300 cc), and (vii)
// Price (e.g. 3000000). Perform the following operations.
// • Save the record of at least 5 vehicles.
// • Display record of the entered vehicles.
// • Search based on the Registration No. provided by the user.
// #include<stdio.h>
// #include<string.h>
// struct Vehicle_Showroom{
//     char ownerName[100];
//     char regno[100];
//     char company[100];
//     char model[100];
//     int year;
//     int engineCapacity;
//     int price;
// };
// void cars(struct Vehicle_Showroom *v){
//     printf("\n\n----ALL VEHICHLE DETAIL----\n\n");
//     for(int i=0; i<5; i++){
//         printf("---Details of car %d---\n",i+1);
//         printf("Owner Name : %s\n",v->ownerName);
//         printf("Registration No %s\n",v->regno);
//         printf("Company Name %s\n",v->company);
//         printf("Model %s\n",v->model);
//         printf("Year of making %d\n",v->year);
//         printf("Engine Capacity %d cc\n",v->engineCapacity);
//         printf("Price %d\n",v->price);
//     }
// }
// void search(struct Vehicle_Showroom *v){
//     printf("\n\n----Searching By Registration Number----\n\n");
//     char ser[100];
//     int found = 0;
//     scanf("%s",ser);
//     for(int i=0; i<5; i++){
//         if(strcmp(ser,v[i].regno)==0){
//             printf("\n\n----Here is the car you are searching for----\n\n");
//             printf("Owner Name : %s\n",v->ownerName);
//             printf("Registration No %s\n",v->regno);
//             printf("Company Name %s\n",v->company);
//             printf("Model %s\n",v->model);
//             printf("Year of making %d\n",v->year);
//             printf("Engine Capacity %d cc\n",v->engineCapacity);
//             printf("Price %d\n",v->price);
//             found =1;
//             break;
//         }
//         else if(found == 0){
//             printf("\n\n---The vehichle you are searching for is not in the list---\n\n");
//             printf("Try again:");
//             scanf("%s",ser);
//         }
//     }
// }
// int main(){
//     struct Vehicle_Showroom v[5];
//     printf("------Vehichle showroom------\n\n");
//     for(int i=0; i<5; i++){
//         printf("---Enter details of car %d---\n\n",i+1);
//         printf("Enter Owners name :");
//         scanf("%s",v[i].ownerName);
//         printf("Enter Registration number :");
//         scanf("%s",v[i].regno);
//         printf("Enter company name :");
//         scanf("%s",v[i].model);
//         printf("Enter Year of Making :");
//         scanf("%d",&v[i].year);
//         printf("Enter Engine capacity :");
//         scanf("%d",&v[i].engineCapacity);
//         printf("Enter price :");
//         scanf("%d",&v[i].price);
//     }
//     printf("You want to see the details of all cars or just want to search a specific one through reg no ??\n1.All cars\n2.Reg no search");
//     int choose;
//     scanf("%d",&choose);
//     while(choose <1 || choose>2){
//         printf("Invalid number!\nTry again :");
//         scanf("%d",&choose);
//     }
//     if(choose == 1){
//         cars(v);
//     }else if(choose == 2){
//         search(v);
//     }
// }