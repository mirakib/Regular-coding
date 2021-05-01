// Thunder 

#include<stdio.h>

int main()
{
    int i,id;

    id = 201410055;

    for(i=1;i<=6;i++)
    {
        printf(" ");

        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("%d\n", id);

    for(i=1;i<=6;i++)
    {
        for(int k=1; k<=i; k++)
        {
            printf(" ");
        }

        for(int j=6; j>=i; j--)
        {
            printf("*");
        }

        printf("\n");
    }
}
