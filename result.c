#include<stdio.h>
int main(){
    int math,science,computer,english,nepali;
    printf("enter marks of math:");
    scanf("%d", &math);
    printf("enter marks of science:");
    scanf("%d", &science);
    printf("enter marks of computer:");
    scanf("%d", &computer);
    printf("enter marks of english");
    scanf("%d", &english);
    printf("enter marks of nepali");
    scanf("%d", &nepali);
    int total = math+science+computer+english+nepali;
     printf("total marks scored is %d \n", total);
    int average_marks= (math+science+computer+english+nepali)/5;
    
    printf("average marks scored is: %d",average_marks);
    return 0;

}