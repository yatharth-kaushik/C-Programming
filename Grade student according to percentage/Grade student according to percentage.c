#include<stdio.h>
int main(){
    int p,c,m,e,cs;
    printf("Enter the marks of Physics :- ");
    scanf("%d",&p);
    printf("Enter the marks of Chemistry :- ");
    scanf("%d",&c);
    printf("Enter the marks of Mathematics :- ");
    scanf("%d",&m);
    printf("Enter the marks of English :- ");
    scanf("%d",&e);
    printf("Enter the marks of Computer Science :- ");
    scanf("%d",&cs);
    float percentage=(p+c+m+e+cs)/5;
    printf("The percentage of the sudent is :- %f\n",percentage);
    if (percentage>90 && percentage<=100)
    {
        printf("Excellent !!");
    }
    else if (percentage>80 && percentage<=90)
    {
        printf("Very Good !!");
    }
    else if (percentage>70 && percentage<=80)
    {
        printf("Good !!");
    }
    else if (percentage>60 && percentage<=70)
    {
        printf("Can do better !!");
    }
    else if (percentage>50 && percentage<=60)
    {
        printf("Average !!");
    }
    else if (percentage>40 && percentage<=50)
    {
        printf("Below Average !!");
    }
    else if (percentage<40)
    {
        printf("Fail !!");
    }
    
}
