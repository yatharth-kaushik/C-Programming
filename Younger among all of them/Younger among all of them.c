#include<stdio.h>
int main(){
    int b1,b2,b3;
    printf("Enter the age of Boy 1 :- ");
    scanf("%d",&b1);
    printf("Enter the age of Boy 2 :- ");
    scanf("%d",&b2);
    printf("Enter the age of Boy 3 :- ");
    scanf("%d",&b3);
    if (b1<b2 && b1<b3)
    {
        printf("Boy 1 is youngest among all of them !!");
    }
    else if (b2<b1 && b2<b3)
    {
        printf("Boy 2 is youngest among all of them !!");
    }
    else if (b3<b2 && b1>b3)
    {
        printf("Boy 3 is youngest among all of them !!");
    }
    
}
