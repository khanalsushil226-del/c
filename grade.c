#include<stdio.h>
int main(){
    int marks;
    printf("enter marks you scored \n");
    scanf("%d", &marks);
    if (marks >=90)
    {
        printf("you got A+ \n");

    }
else if (marks >=80)
{
    printf("you got A \n");
}
else if(marks <= 70)
{
    printf("you failed \n ");
}
return 0;

}
