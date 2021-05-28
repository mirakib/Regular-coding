#include<stdio.h>

int main(){
    int id[7], total=0;

    for (int i=0; i<7; i++)
    {
        printf("element - %d:",i);
        scanf("%d", &id[i]);
    }

    printf("\nThe unique elements found in student ID are:\n");

    for (int i=0; i<7; i++)
    {
        int crt = 0;
        for (int j=0; j<7+1; j++)
        {
            if (i!=j)
            {
                if(id[i]==id[j])
                {
                    crt++;
                }
            }
        }
        if(crt==0)
        {
            printf("%d ", id[i]);
            total++;
        }
    }
    printf("\nTotal number of unique elements are:\n");

    printf("%d ", total);
}
