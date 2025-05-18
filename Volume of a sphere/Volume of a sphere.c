#include<stdio.h>
int main(){
    int r;
    printf("Enter the value of the radius :- ");
    scanf("%d",&r);
    int volume=(4*3.14*r*r*r)/3;
    printf("The volume of the sphere of radius %d is :- %d",r,volume);

}
