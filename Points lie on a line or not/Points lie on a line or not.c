#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the value of x1 :-");
    scanf("%d",&x1);
    printf("Enter the value of x2 :-");
    scanf("%d",&x2);
    printf("Enter the value of x3 :-");
    scanf("%d",&x3);
    printf("Enter the value of y1 :-");
    scanf("%d",&y1);
    printf("Enter the value of y2 :-");
    scanf("%d",&y2);
    printf("Enter the value of y3 :-");
    scanf("%d",&y3);
    float m1=(y2-y1)/(x2-x1);
    printf("The value of slope 1 is :- %f\n",m1);
    float m2=(y3-y2)/(x3-x2);
    printf("The value of slope 2 is :- %f\n",m2);
    if (m1==m2)
    {
        printf("Points lie on the same line !!");
    }
    else{
        printf("Points not lie on the same line !!");
    }
}
