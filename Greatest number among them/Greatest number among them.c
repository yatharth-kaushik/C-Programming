#include <stdio.h>
int main()
{
    int p, q, r;
    printf("Enter the value of P :- ");
    scanf("%d", &p);
    printf("Enter the value of Q :- ");
    scanf("%d", &q);
    printf("Enter the value of R :- ");
    scanf("%d", &r);
    if (p > q && p > r)
    {
        printf("P is greatest among them !!");
    }
    else if (q > p && q > r)
    {
        printf("Q is greatest among them !!");
    }
    else if (r > p && r > q)
    {
        printf("R is greatest among them !!");
    }
    else
    {
        printf("All are same !!");
    }
}
