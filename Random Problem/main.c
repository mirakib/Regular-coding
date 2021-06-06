#include<stdio.h>
void reversearray(int *p, int n)
{
    int *first = p;
    int *last = p+n-1;
    while(first<last)
    {
        int temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
    printf("After reversing the array: \n");
    for(int i=0; i<n; i++)
        printf("Elements %d = %d \n",i+1, *p++);
}
int main()
{
    int size;
    printf("Enter Array size:");
    scanf("%d", &size);
    int a[size];
    printf("Enter Array Elements:\n");
    for(int i=0; i<size; i++)
        scanf("%d", &a[i]);

    printf("Before reversing the array:\n");

    for(int i=0; i<size; i++)
        printf("Element %d = %d\n",i+1, a[i]);

    reversearray(a, size);
    return 0;
}