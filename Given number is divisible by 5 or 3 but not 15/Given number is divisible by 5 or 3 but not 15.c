#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :- ");
    scanf("%d",&num);
    if (num%5==0 || num%3==0)
    {
        if (num%15!=0)
        {
            printf("Given number is divisible by 5 or 3 but not 15!!");
        }
        else{
            printf("Given number is divisible by 15!!");
        }
        
    }
    else{
        printf("Given number is not divisible by 5 or 3!!");
    }
    
}
