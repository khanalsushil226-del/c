#include<stdio.h>
int main(){
    int dob, year;
    printf("enter your dob:\n");
    scanf("%d", &dob);
    printf("enter current year\n");
    scanf("%d", &year);
    printf("your current age is: %d", year-dob);
    return 0;
}
