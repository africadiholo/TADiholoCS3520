#include <stdio.h>
#include <stdlib.h>
//Tlotliso Africa Diholo
//Student Number: 202000690

int PrimeNum()
{
    int num, p=2, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num)
    {
        for(i=2;i<p;i++)
        {
            if(p%i==0)
            break;
        }
        if(i==p)
        {
           printf("%d ",p*p);
           num--;
        }
        p++;
    }

}

int Reverse()
{
    int num, i, n, reverse, remainder;
            remainder = n % 10;
            reverse= reverse* 10;
            reverse = reverse + remainder;
            n = n / 10;

            printf("%d ", reverse);

}
int main()
{
    PrimeNum();
    Reverse();
    return 0;
}
