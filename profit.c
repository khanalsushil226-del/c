#include<stdio.h>
int main(){
    int cp, sp, profit, loss;
    printf("enter the cost price");
    scanf("%d",&cp);
    printf("enter the selling price");
    scanf("%d", &sp);
   if (sp > cp){
    
        profit = sp - cp;
        printf("profit is %d", profit);
    }
    else if (cp > sp){
        loss = cp - sp;
        printf("loss is %d", loss);
    }
    else{
        printf("no profit no loss");
   }
}