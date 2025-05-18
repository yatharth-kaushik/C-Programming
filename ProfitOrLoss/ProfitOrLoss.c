#include<stdio.h>
int main(){
    int sp,cp;
    printf("Enter the Value of cost price of the item :- ");
    scanf("%d",&cp);
    printf("Enter the Value of selling price of the item :- ");
    scanf("%d",&sp);
    if (sp>cp)
    {
        int profit=sp-cp;
        printf("The salesman is in %d rupees profit !!!",profit);
    }
    else if(sp<cp){
        int loss=cp-sp;
        printf("The salesman is in %d rupees loss !!!",loss);
    }
    else{
        printf("No profit no loss for salesman !!!");
    }
}
