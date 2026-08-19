#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a b and c\n");
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d is the biggest ",a);
    }
    else if (b>c && b>a)
{
printf("%d is the biggest ",b);
}
  else if (c>b && c>a)
{
    printf("%d is the biggest ",c,c);

}
return 0;
}    


