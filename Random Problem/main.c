#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *numbers, *summation, *average;

    numbers = fopen("C:\\Users\\Rakib\\Documents\\Numbers.txt","w");

    int id, sum;
    printf("Your id:");
    scanf("%d", &id);

    for(int i=1; i<=id; i++)
    {
        fprintf(numbers, "%d\n", i);
        sum += i;
    }
    fclose(numbers);

    summation = fopen("C:\\Users\\Rakib\\Documents\\Summation.txt","w");
    fprintf(summation, "%d", sum);
    fclose(summation);

    average = fopen("C:\\Users\\Rakib\\Documents\\Average.txt","w");
    fprintf(average, "%d", sum / id);
    fclose(average);
}
