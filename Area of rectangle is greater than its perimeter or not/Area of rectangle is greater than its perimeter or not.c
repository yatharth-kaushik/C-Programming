#include <stdio.h>
int main()
{
    int l, b;
    printf("Enter the value of length :- ");
    scanf("%d", &l);
    printf("Enter the value of breadth :- ");
    scanf("%d", &b);
    int area = l * b, perimter = 4 * (l + b);
    if (area > perimter)
    {
        printf("The area of rectangle is greater than perimter !!");
    }
    else{
        printf("The perimeter of rectangle is greater than area !!");
    }
}
