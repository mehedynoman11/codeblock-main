#include <stdio.h>

int main()
{
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int count[10] = {0};
    for (int i = 0; i < N; i++)
    {
        int value = A[i];
        count[value]++;
        
    }

    for (int i = 0; i < 10; i++)
    {
    printf("count of %d is: %d\n", i,count[i]);
    }
    
    return 0;
}