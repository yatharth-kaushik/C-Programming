#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter the value of principle :- ");
    scanf("%d",&p);
    printf("Enter the value of rate of interest :- ");
    scanf("%d",&r);
    printf("Enter the value of time :- ");
    scanf("%d",&t);
    int si=(p*r*t)/100;
    printf("The value of simple interest is :- %d",si);
}
