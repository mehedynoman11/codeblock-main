#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N); // Read the size of the array

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]); // Input array elements
    }

    int count0 = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 0) 
        {
            count0++;
        }
    }

    printf("Count of zeros = %d\n", count0); // Print the count of zeros
    return 0;
}
