#include<stdio.h>
int main(){
    int phy,chem,maths,eng,comp;
    printf("Enter the marks of phy :- ");
    scanf("%d",&phy);
    printf("Enter the marks of chem :- ");
    scanf("%d",&chem);
    printf("Enter the marks of maths :- ");
    scanf("%d",&maths);
    printf("Enter the marks of eng :- ");
    scanf("%d",&eng);
    printf("Enter the marks of comp :- ");
    scanf("%d",&comp);
    float percentage=(phy+chem+maths+eng+comp)/5;
    printf("Percentage of the student is :- %f",percentage);
}
